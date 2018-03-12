#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    // https://www.youtube.com/watch?v=sQrq7S0dP54 (3:21)
    // this is not where I want to it to be yet but there's the ref
    time = ofGetElapsedTimef();
    ofSetBackgroundColor(0);
    ofNoFill();
    ofSetLineWidth(3);
    
    float sinOfTime = sin(time*1.1);
    float sinOfTimeRemapped = ofMap(sinOfTime,-1,1,0,360 + time);
    float x = ofGetWidth()/2;
    float y = ofGetHeight()/2;
    
    // w/o ofTranslate, rotation happens in top corner
    // so, ofTranslate is setting the origin to the middle
    // of the screen, then we're putting our circle at (0,0)
    ofTranslate(x, y);
    float width = 100.;
    float height = 400.;
    for(int i = 1; i < 7; i ++){
        ofSetColor(77,44,50);
        ofRotateY(sinOfTimeRemapped * i);

        ofDrawEllipse(0, 0, width/i,height/i);
        ofRotateY(sinOfTimeRemapped * 0.5);
        ofDrawEllipse(0, 0, 80,300);
    }
    
    // TODO how to continually rotate in a circle instead
    // of going to 720 or some n and then restarting
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
