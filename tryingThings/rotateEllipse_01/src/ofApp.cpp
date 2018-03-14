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
    float time = ofGetElapsedTimef();
    ofSetBackgroundColor(0);
    ofNoFill();
    ofSetLineWidth(7);
    
    float sinOfTime = sin(time*1.1);
    float sinOfTimeRemapped = ofMap(sinOfTime,-1,1,0,360);
    float x = ofGetWidth()/2;
    float y = ofGetHeight()/2;
    
    // w/o ofTranslate, rotation happens in top corner
    // so, ofTranslate is setting the origin to the middle
    // of the screen, then we're putting our circle at (0,0)
    ofTranslate(x, y);
    float width = 100.;
    float height = 400.;
    for(int i = 1; i < 6; i ++){
        ofSetColor(77,44,50, 50);
        for(int j = 0; j < 8; j++){
           // draw multiple elipses on top of each other
            // vary color & alpha
            ofPushMatrix(); // TODO understand better
            // sin(something + phase); // pseudo-code for phase
            // ofRotate behaves "sin-y" so you can add phase
            ofRotateY((time * 100) + (i * 60)); // ofRotate takes degrees not radians
            ofDrawEllipse(j*0.001, 0, width/i,height/i);
            ofPopMatrix();
        }
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
