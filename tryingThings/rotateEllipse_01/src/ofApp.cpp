#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetBackgroundColor(0);
    ofNoFill();
    float sinOfTime = sin(ofGetElapsedTimef()*1.1);
    float sinOfTimeRemapped = ofMap(sinOfTime,-1,1,0,720);
    float x = ofGetWidth()/2;
    float y = ofGetHeight()/2;
    
    
    // w/o ofTranslate, rotation happens in top corner
    // so, ofTranslate is setting the origin to the middle
    // of the screen, then we're putting our circle at (0,0)
    ofTranslate(x, y);
    
    // TODO how to continually rotate in a circle instead
    // of going to 720 or some n and then restarting
    ofRotateY(sinOfTimeRemapped);
    
    // ofDrawCircle(0, 0, 130);
    
    // a circle is easier to rotate than an ellipse.
    // b/c 360 and ellipse not?
    ofDrawEllipse(0, 0, 100,400);
    ofRotateY(sinOfTimeRemapped * 0.5);
    ofDrawEllipse(0, 0, 80,300);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
