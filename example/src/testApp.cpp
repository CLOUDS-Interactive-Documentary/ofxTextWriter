#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup()
{
    // First parameter is the full text to render,
    // second parameter is the time in ms per character.
    tr.set("Hello World...", 100);
}

//--------------------------------------------------------------
void testApp::update()
{
    tr.update();
}

//--------------------------------------------------------------
void testApp::draw()
{
    ofBackground(0,0,0);
	ofSetColor(255,255,255);
	
	ofDrawBitmapString(tr.textToRender(), 10, 20);
}

//--------------------------------------------------------------
void testApp::exit()
{

}

//--------------------------------------------------------------
void testApp::keyPressed(int key)
{

}

//--------------------------------------------------------------
void testApp::keyReleased(int key)
{

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y)
{ 
	
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button)
{
 
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button)
{
    tr.reset();
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button)
{

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h)
{
 

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg)
{

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo)
{

}
