//
//  ofxTextWriter.h
//  ofxTextWriter
//
//  Created by Artem Titoulenko on 2010-06-01.
//  Copyright 2010 Artem Titoulenko. All rights reserved.
//
//  Adapted by Elie Zananiri on 2013-08-28.
//

#pragma once

#include "ofMain.h"

//--------------------------------------------------------------
//--------------------------------------------------------------
class ofxTextWriter
{
    public:
        ofxTextWriter();
        ofxTextWriter(string text, unsigned long msPerChar = 100);
    
        void set(string text, unsigned long msPerChar = 100);
        void reset();
        void update();
    
        string textToRender();
        bool isDone();
    
    private:
        string _text;
        unsigned long _time;
    
        unsigned long _startTime;
        unsigned long _elapsedTime;
    
        string _textToRender;
    
        bool  _bTimeSet;
        bool _bDone;
};