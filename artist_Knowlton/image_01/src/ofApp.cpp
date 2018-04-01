#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    image.load("assistant.jpg");
    image.resize(image.getWidth()*2, image.getHeight()*2);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0);
    // image.draw(0,0);
    // draws the assistant picture in dots
    for( int i=0; i < image.getWidth(); i+=5){
        for(int j=0; j < image.getHeight(); j+=5){
            ofColor pixel = image.getColor(i, j);
            float brightness = pixel.getBrightness();
            float radius = ofMap(brightness, 0, 255, 2, 3.5);
            ofDrawCircle(i, j, radius);
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
