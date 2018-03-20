#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    texture.load("image.png");
}

//--------------------------------------------------------------
void ofApp::update(){
    texture.resize(30,30);
}

//--------------------------------------------------------------
void ofApp::draw(){
    float time = ofGetElapsedTimef();
    
    float xOrig = ofGetWidth()/2;
    float yOrig = ofGetHeight()/2;
    float maxX = 514; // determines whether the ellipse "closes" or looks more like a wave
    float dotCount = 100; // when higher, dots look like lines
    float numEllipses = 5;
    float dotRadius = 2;
    float height = 200;
    float width = 70;
    

    // this loop controls how many ellipses are drawn
    for(int i = 0; i < numEllipses; i++){

        // my goal is to draw these ellipses at an offset to each other.
        // by passing a phase into sin (+ i*something) it draws them in a time offset
        float radiusx = width * sin(time + i*(0.5*sin(time*0.1)));
        float radiusy = height - (i* 3.7);
        
        // this loops draws dots in the shape of an ellipse
        for (int j = 0; j < dotCount; j++){
            ofSetColor(255,40,40, 50);
            
            xOrig = ofMap(j, 0, 100, ofGetWidth()/2, maxX);
            float angle = (ofMap(j,0,100, 0, TWO_PI) + PI/2)*i; // this goes about 1 to 7

            // this is the "convert to radians" equation
            float x = xOrig + radiusx * cos(angle) ;
            float y = yOrig + radiusy * sin(angle);
            
            ofDrawCircle(x,y,dotRadius);
            
            // ofDrawCircle(x, y, 1);
            texture.draw(x - texture.getWidth() / 2, y - texture.getHeight() / 2);
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
