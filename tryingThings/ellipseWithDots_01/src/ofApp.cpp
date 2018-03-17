#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    float time = ofGetElapsedTimef();
    
    float xOrig = ofGetWidth()/2;
    float yOrig = ofGetHeight()/2;
    float radiusx = 50 + 50 * sin(time);
    float radiusy = 300;
    
    // this loop draws a sin-y ellipse-y line across the stage
    // b/c of sin it widens and narrows much like a slinky
    // adding that sin(i) to 1000 gives it a weird jaggy edge at the top 
    for (int i = 0; i < 1000; i++){
        // sin just returns -1 to 1, so amplify it
        float var = sin(time * 0.3) * 1000;
        cout << var << endl;
        xOrig = ofMap(i, 0, 100, ofGetWidth(), var);
        float angle = ofMap(i,0,100, 0, TWO_PI) + PI/2;
        float x = xOrig + radiusx * cos(angle);
        float y = yOrig + radiusy * sin(angle);
        ofDrawCircle(x,y,2);
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
