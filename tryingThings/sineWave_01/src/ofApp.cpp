#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    // draw a heart
    /*
    float i = 0;
    while (i < TWO_PI) { // make a heart
        float r = (2-2*sin(i) + sin(i)*sqrt(abs(cos(i))) / (sin(i)+1.4)) * -80;
        float x = ofGetWidth()/2 + cos(i) * r;
        float y = ofGetHeight()/2 + sin(i) * r;
        line.addVertex(ofVec2f(x,y));
        i+=0.005*HALF_PI*0.5;
    }
    line.draw();
    line.close(); // close the shape
     */
    
    /*
    ofPolyline b;
    float angle = 0;
    while (angle < TWO_PI ) {
        b.curveTo(100*cos(angle), 0, 100*sin(angle));
        b.curveTo(300*cos(angle), 300, 300*sin(angle));
        angle += TWO_PI / 30;
    }
    b.draw();
     */
    float time = ofGetElapsedTimef();
    float sinOfTime = sin(time);
    float sinOfTimeRemapped = ofMap(sinOfTime,-1,1,0,TWO_PI);
    
    float yBase = ofGetHeight()/2;
    float xStart = 0;
    ofPoint startPoint(xStart, yBase);
    
    line.addVertex(startPoint);
    line.addVertex(sinOfTimeRemapped, yBase + sinOfTimeRemapped);
    line.addVertex(ofPoint(ofGetWidth(),yBase));
    line.draw();
    // ofDrawLine(0, ofGetHeight()/2,ofGetWidth(), ofGetHeight()/2);

    // float x = sinOfTimeRemapped;
    // float y = sinOfTimeRemapped;
    
    
   //  ofDrawCircle(x, y, 5);
    // line.addVertex(x, y);
    
    //ofDrawCircle( line.getPointAtPercent(0).x, line.getPointAtPercent(0).y, 5);
    
    //if(line.size() > 300){
      //  line.getVertices().erase(line.getVertices().begin());
   // }
    //line.draw();


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
