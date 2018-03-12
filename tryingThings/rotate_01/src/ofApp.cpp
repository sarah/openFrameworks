#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

    ofSetBackgroundColor(255);
}

//--------------------------------------------------------------
 void ofApp::draw(){
     // this is not rotate: it's push and pop matrix
     // drawing a grid
     
         for (int rows=0; rows<4; rows++) {
             ofPushMatrix(); // saves coordinate system
             for (int cols=0; cols<7; cols++) {
                 drawStickFigures(); // draws stuff
                 ofTranslate(150, 0); // moves coord system on the x (to the left)
             }
             ofPopMatrix(); // jumps back to saved coord system (0, whatever)

             ofTranslate(0, 200); // moves down a row, 200 lower than current Y
         }
 }


void ofApp::drawStickFigures(){
    ofSetColor(0);
    ofDrawCircle(30, 30, 30);
    ofDrawRectangle(5, 70, 50, 100);
    ofDrawCircle(95, 30, 30);
    ofDrawRectangle(70, 70, 50, 100);
    ofDrawCircle(45, 90, 15);
    ofDrawRectangle(30, 110, 30, 60);
    ofDrawCircle(80, 90, 15);
    ofDrawRectangle(65, 110, 30, 60);

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
