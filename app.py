#!/usr/bin/env python
# -*- coding: utf-8 -*-

# web board -> http
# forever -> unix daemon app
# db
# script -> memory
import daemon
import bottle
import pymongo

# TODO : list, delete, edit

@bottle.route('/')
def index():
    return 'hello world'

@bottle.route('/error')
def error():
    return 'error'

@bottle.route('/new', method=['GET','POST'])
def new():
    method = bottle.request.method
    if method == 'GET':
        return '<form action="/new" method="POST"><input name="tweet" type="text" /><input value="Tweet!" type="submit" /></form>'
    elif method == 'POST':
        tweet = bottle.request.forms.get('tweet')
        if tweet == None or len(tweet) == 0:
            bottle.redirect('/error')
        else:
            connection = pymongo.Connection(['127.0.0.1'])
            tweets = connection.twitter['tweets']
            tweets.insert({'tweet': tweet})
            bottle.redirect('/')
    else:
        bottle.redirect('/error')

def run():
    bottle.run(host='localhost', port=8080)
    
run()
#with daemon.DaemonContext():
#    run()
