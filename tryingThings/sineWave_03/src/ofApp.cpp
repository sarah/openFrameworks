#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);
    
    ofBackground(0);
    
    float time = ofGetElapsedTimef();
    float amplitude = 50. + mouseX * 0.00;
    float frequency = 5. + mouseX * 0.00;
    float phase = 3. + mouseX * 0.1 + sin(time) * mouseX;
    
    for (int i = 0; i < 100; i++) {
        float angle = ofMap(i, 0, 100, 0, 2 * PI);
        
        float input = (frequency * angle) + phase;
        float radius = 100 + sin(input)* amplitude;
        
        // converting polar to cartesian
        float xOrig = 100 * cos(angle);
        float yOrig = 100 * sin(angle);
        
        // converting polar to cartesian
        float x = radius * cos(angle);
        float y = radius * sin(angle);
        
        // drawing our original static circle
        ofDrawCircle(xOrig, yOrig, 5);
        // drawing a circle with a varying x & y, just
        // to show connection between them
        ofDrawCircle(x, y, 5);
        
        // draw lines connecting the two so it looks amazing
        // a line btwn the original and the "new" circle
        ofDrawLine(xOrig,yOrig, x,y);
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
