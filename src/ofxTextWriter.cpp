//
//  ofxTextWriter.cpp
//  ofxTextWriter
//
//  Created by Artem Titoulenko on 2010-06-01.
//  Copyright 2010 Artem Titoulenko. All rights reserved.
//
//  Adapted by Elie Zananiri on 2013-08-28.
//

#include "ofxTextWriter.h"

//--------------------------------------------------------------
ofxTextWriter::ofxTextWriter()
{
    set("", 0);
}

//--------------------------------------------------------------
ofxTextWriter::ofxTextWriter(string text, unsigned long msPerChar)
{
    set(text, msPerChar);
}

//--------------------------------------------------------------
void ofxTextWriter::set(string text, unsigned long msPerChar)
{
    _text = text;
    _time = msPerChar * _text.length();
    reset();
}

//--------------------------------------------------------------
void ofxTextWriter::reset()
{
    _bTimeSet = false;
    _bDone = false;
    _textToRender = "";
}

//--------------------------------------------------------------
void ofxTextWriter::update()
{
    if (!_bDone) {
        if (!_bTimeSet) {
            _startTime = ofGetElapsedTimeMillis();
            _bTimeSet = true;
        }
        
        _elapsedTime = ofGetElapsedTimeMillis() - _startTime;
    
        int n = (_elapsedTime / (_time * 1.0f)) * _text.length();
        
        if (n >= _text.length() - 1) {
            // We have reached the end of the word.
            _textToRender = _text;
            _bDone = true;
        }
        else {
            _textToRender = _text.substr(0, n);
        }        
    }
}

//--------------------------------------------------------------
string ofxTextWriter::textToRender()
{
    return _textToRender;
}

//--------------------------------------------------------------
bool ofxTextWriter::isDone()
{
    return _bDone;
}
