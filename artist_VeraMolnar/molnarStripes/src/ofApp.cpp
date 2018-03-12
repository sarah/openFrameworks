#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSeedRandom(0);
    ofSetColor(26,49,51);
    
    int x, rightOffset;
    int y = 0;
    int height = 8;
    int edgeOffset = 10;
    int rowOffset = height + 3;
    int randLowerBound = 5;
    int randUpperOffset = 30;
    bool runSolutionTwo = false;
    
    if(runSolutionTwo){
        for(int i = 0; i < 60; i++){
            y += rowOffset;
            float offsetV = ofSignedNoise(i*0.8) * mouseX; // 100
            float offsetH = ofSignedNoise(i*0.18) * mouseY; // 200
            float perlinMidpoint = ofGetWidth()/2 + offsetV;
            ofDrawRectangle(20, y, perlinMidpoint-10, height);
            
            int rightXLower = 20 + (perlinMidpoint - 10) + 5;
            int rightOffset = ofRandom(randLowerBound + offsetH, randUpperOffset);
            int rightX = rightXLower + rightOffset;
            // while(rightX <= rightXLower ){
            //     rightOffset = ofRandom(randLowerBound + offsetH, randUpperOffset);
            //     rightX = rightXLower + rightOffset;
            // }
            ofDrawRectangle(rightX, y, (ofGetWidth()-20)-rightOffset, height);
        }
    } else {
        
        for(int i = 0; i < 60; i++){
            // space between each horizontal bar
            y+= rowOffset;
            
            // perlin noise values,
            float noiseOffset = ofSignedNoise(i * 0.01) * mouseX; // 200
            float widthOffset = ofSignedNoise(i * 0.15) * mouseY; // 180
            float perlinMidpoint = ofGetWidth()/2 + noiseOffset;
            
            // left rectangle
            // rect(x,y,w,h)
            float leftWidth = perlinMidpoint-ofRandom(randLowerBound + widthOffset,edgeOffset+randUpperOffset);
            ofDrawRectangle(edgeOffset, y, leftWidth, height);
            int leftEnd = leftWidth + edgeOffset;
            
            // right rect
            rightOffset = ofRandom(randLowerBound + widthOffset,  randUpperOffset);
            x = leftEnd + rightOffset;
            ofDrawRectangle(x, y, (ofGetWidth()-edgeOffset)-x, height);
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
