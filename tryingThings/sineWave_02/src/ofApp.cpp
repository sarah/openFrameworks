#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){


}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0);
    float time = ofGetElapsedTimef();
    float amplitude = 100.;
    float frequency = 0.01  + time / 100;
    float phase = 3.;

    // SIN
    // sin = amplitude * sin(frequency * x + phase)  // general formula for a sin wave
    // sin = a * sin(f * x + p)  // general formula for a sin wave with short var names
    
    // COS
    // cos is a sin wave shifted by a phase (starts at 1 instead of 0)
    // cos = amplitude * sin(frequency * x + phase + PI/2)  // general formula for a cos
    // cos = a * cos(f * x + p)  // general formula for a cos wave with short var names
    // output of sin() is betwn -1 & 1
    for(int i=0; i < 100; i++){
        float x = ofMap(i,0,100,0, ofGetWidth());
        float input = (frequency * x) + phase;

        // cout << "x: " << x << ": i:   " << i << endl;
        float y = ofGetHeight()/2 + sin(input)* amplitude;
        ofDrawCircle(x, y, 5);
    }

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
