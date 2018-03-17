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
    
    for (int i = 0; i < 100; i++){
        xOrig = ofMap(i, 0, 100, ofGetWidth()/2, mouseX);
        cout << mouseX << endl;
        float angle = ofMap(i,0,100, 0, TWO_PI) + PI/2;
        float x = xOrig + radiusx * cos(angle);
        float y = yOrig + radiusy * sin(angle);
        ofDrawCircle(x,y,3);
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
