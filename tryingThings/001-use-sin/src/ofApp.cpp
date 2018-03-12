#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    float sinOfTime = sin(ofGetElapsedTimef());
    float sinOfTimeRemapped = ofMap(sinOfTime,-1,1,0,255);
    
    float sinOfTime2 = sin(ofGetElapsedTimef()+TWO_PI*0.33);
    float sinOfTimeRemapped2 = ofMap(sinOfTime2,-1,1,0,255);
    
    cout << sinOfTimeRemapped << endl;
    ofSetColor(0,0,0,sinOfTimeRemapped);
    

    ofDrawCircle(300,300, sinOfTimeRemapped);
    ofDrawCircle(300,300, sinOfTimeRemapped2);

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
