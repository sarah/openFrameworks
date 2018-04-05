#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    font.load("helvetica.otf", 100, true, true, true);
    angle = 0;
    targetAngle = 0;
}

//--------------------------------------------------------------
void ofApp::update(){

    angle = 0.9 * angle + 0.1 * targetAngle;
    
    if (ofGetSeconds() < 10){
        targetAngle = 0;
    } else {
        targetAngle = 90;
    }
    
    cout << ofGetSeconds() << " " << angle << " " << targetAngle << endl;
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    // clock related useful functions:
    // ofGetHours();
    // ofGetMinutes();
    // ofGetSeconds();
    // ofToString(...);
    
    ofBackground(0);
    
    string timeStr = ofToString(ofGetHours()) + ":" +
        ofToString(ofGetMinutes());
    string seconds = ofToString(ofGetSeconds());
    //cout << timeStr << endl;
    
//    cam.begin();
//    float angle = ofMap(ofGetSeconds(), 0, 59, 0, 360);
//
//    ofPushMatrix();
//    ofRotateY(angle);
//    ofRectangle r = font.getStringBoundingBox(timeStr, 0, 0);
//    font.drawString(timeStr, -r.width/2,0);
//    ofPopMatrix();
//
//    ofCircle(200,200,50);
//
//    cam.end();
    
        cam.begin();
    
        ofPushMatrix();
        ofRotateY(angle);
        ofRectangle r = font.getStringBoundingBox(timeStr, 0, 0);
        font.drawString(timeStr, -r.width/2,0);
        ofPopMatrix();
    
    
    ofPushMatrix();
    ofRotateY(angle - 90);
    ofRectangle r2 = font.getStringBoundingBox(seconds, 0, 0);
    font.drawString(seconds, -r2.width/2,0);
    ofPopMatrix();
    
        ofDrawCircle(200,200,50);
    
        cam.end();
    
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
