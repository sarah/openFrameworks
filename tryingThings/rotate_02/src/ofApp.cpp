#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    // http://openframeworks.cc/ofBook/chapters/intro_to_graphics.html#movingtheworld
    ofSetRectMode(OF_RECTMODE_CENTER);
    ofBackground(255);
    float t = ofGetElapsedTimef();
    float sinOfTime = sin(t);
    float sinOfTimeRemapped = ofMap(sinOfTime, -1,1,0,360);
    
    ofPushMatrix();
    // Original rectangle in blue
    ofSetColor(0, 0, 255);
    ofDrawRectangle(500, 200, 200, 200);
    
    // Rotated rectangle in red
    ofTranslate(500, 200); // move the origin to our rectangle
    //ofRotate(sinOfTimeRemapped);  // rotate rectangle
    ofRotate(sinOfTimeRemapped, 500, 200, sinOfTimeRemapped);

    // ofScale(0.5, 0.5);  // We are only working in x and y, so let's leave the z scale at its default (1.0)
    ofSetColor(255, 0, 0);
    ofDrawRectangle(0, 0, 200, 200);
    ofPopMatrix();

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
