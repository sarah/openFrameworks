#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    float t = ofGetElapsedTimef() * .2;
    float angle = ofMap(t, 0, 1, 0, TWO_PI);
    float radius = ofMap( 3 * cos(3 * angle), -1, 1, 0, 100);
    ofPoint center(400,400);
    
    float x = radius * sin(angle) + center.x;
    float y = radius * cos(angle) + center.y;
    
    ofDrawCircle(x, y, 5);
    line.addVertex(x, y);
    
    ofDrawCircle( line.getPointAtPercent(0).x, line.getPointAtPercent(0).y, 5);
    
    if(line.size() > 300){
       line.getVertices().erase(line.getVertices().begin());
    }
   line.draw();

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
