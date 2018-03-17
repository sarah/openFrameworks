#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------

float *ofApp::polarCoords(float radius, float angle){
    float *arr = new float [2];
    
    arr[0] = radius * cos(angle);
    arr[1] = radius * sin(angle);
    
    return arr;
}

void ofApp::draw(){
    // https://www.youtube.com/watch?v=sQrq7S0dP54 (3:21)
    
    ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);
    
    ofBackground(0);
    float time = ofGetElapsedTimef();
    float amplitude = 50.;
    float frequency = 5.;
    float phase = 3. + mouseX * 0.1 + sin(time) * mouseX;
    
    for(int i = 0; i < 100; i++){
        float angle = ofMap(i,0, 100, 0, TWO_PI);
        float input = (frequency * angle) + phase;
        float radius = 100; //+ sin(input) * amplitude;
        
        float *c = ofApp::polarCoords(radius, angle);
        
        // drawing our original static circle
        ofDrawCircle(c[0], c[1], 1);

        
    }
    // float time = ofGetElapsedTimef();
    // ofSetBackgroundColor(0);
    // ofNoFill();
    // ofSetLineWidth(5);
    //
    // float sinOfTime = sin(time*1.1);
    // float sinOfTimeRemapped = ofMap(sinOfTime,-1,1,0,360);
    // float x = ofGetWidth()/2;
    // float y = ofGetHeight()/2;
    
    // TODO
    // * colors -- each ring is a diff color.
    // * the whitney rings have a bit of a glow
    // * my rings aren't in the same positions as the rings on the whitney
    // * rings coming in one at a time
    // ofTranslate(x, y);
    // float width = 100.;
    // float height = 400.;
    // for(int i = 1; i < 6; i ++){
    //     ofSetColor(255,255,255,50);
    //
    //     ofPushMatrix(); // TODO understand better
    //         ofRotateY((time * 100) + (i * 60)); // ofRotate takes degrees not radians
    //         ofDrawEllipse(i*0.001, 0, width/i,height/i);
    //     ofPopMatrix();
    // }
    
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
