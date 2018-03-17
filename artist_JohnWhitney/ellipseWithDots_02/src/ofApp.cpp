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
    float maxX = 514; // determines whether the ellipse "closes" or looks more like a wave
    float dotCount = 100; // when higher, dots look like lines
    float numEllipses = 4;
    float dotRadius = 2;
    


    // this loop controls how many ellipses are drawn
    for(int i = 0; i < numEllipses; i++){

        // trying to offset ellipses from each other on the x & y
        // these don't look great but idc for now
        float radiusx = 100 * sin(time) - i;
        float radiusy = 300 - (i* 17.7);
        
        // my goal is to draw these ellipses at an offset to each other.
        // what needs to change?
        // does it mean moving at different rates? starting at different times?
        // this loops draws dots in the shape of an ellipse
        for (int j = 0; j < dotCount; j++){
            xOrig = ofMap(j, 0, 100, ofGetWidth()/2, maxX);
            float angle = (ofMap(j,0,100, 0, TWO_PI) + PI/2)*i; // this goes about 1 to 7

            // this is the "convert to radians" equation
            float x = xOrig + radiusx * cos(angle) ;
            float y = yOrig + radiusy * sin(angle);
            
            ofDrawCircle(x,y,dotRadius);
        }
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
