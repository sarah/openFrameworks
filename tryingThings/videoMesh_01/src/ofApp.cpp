#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    grabber.initGrabber(640, 480);
    
}

//--------------------------------------------------------------
void ofApp::update(){

    grabber.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    
   // grabber.draw(0, 0);
    
    

    // make a mesh
    ofMesh m;
    
    // draw triangle strips
    m.setMode(OF_PRIMITIVE_TRIANGLE_STRIP);
    
    int h = ofGetHeight();
    // add 4 vertices
    // THIS PRINTS 1st 3rd of video screen (finally!)
     m.addVertex( ofPoint(0,0) );
     m.addVertex( ofPoint( 0,480) );
     m.addVertex( ofPoint( 213,0) );
     m.addVertex( ofPoint( 213,480) );

    // this is adding textures coordinates based on %s, you can also use points..
    m.addTexCoord(  grabber.getTexture().getCoordFromPercent(0, 0));
    m.addTexCoord(  grabber.getTexture().getCoordFromPercent(0, 1));
    m.addTexCoord(  grabber.getTexture().getCoordFromPercent(0.3, 0));
    m.addTexCoord(  grabber.getTexture().getCoordFromPercent(0.3, 1));
    
    // bind the texture, draw the mesh, unbind
    grabber.bind();
    m.draw();
    grabber.unbind();

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
