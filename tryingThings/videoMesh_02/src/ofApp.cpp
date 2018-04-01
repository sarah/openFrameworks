#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    grabber.initGrabber(1024, 768);
    
}

//--------------------------------------------------------------
void ofApp::update(){

    grabber.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0);
    float oneThird = grabber.getWidth()/3;
    float height = grabber.getHeight();
    float width = grabber.getWidth();
    int stepSize = 5;

   // grabber.draw(0, 0);
    // make a mesh
    ofMesh m;

    // mesh & grabber
    // draw triangle strips
    m.setMode(OF_PRIMITIVE_TRIANGLE_STRIP);
    

    int h = ofGetHeight();
    // add 4 vertices
    // THIS PRINTS 1st 3rd of video screen (finally!)
     m.addVertex( ofPoint(0,0) );
     m.addVertex( ofPoint( 0,height) );
     m.addVertex( ofPoint( oneThird,0) );
     m.addVertex( ofPoint( oneThird,height) );

    // this is adding textures coordinates based on %s, you can also use points..
    m.addTexCoord(  grabber.getTexture().getCoordFromPercent(0, 0));
    m.addTexCoord(  grabber.getTexture().getCoordFromPercent(0, 1));
    m.addTexCoord(  grabber.getTexture().getCoordFromPercent(0.3, 0));
    m.addTexCoord(  grabber.getTexture().getCoordFromPercent(0.3, 1));
    
    // bind the texture, draw the mesh, unbind
    grabber.bind();
    m.draw();
    grabber.unbind();
    // end mesh & grabber

    // draw middle strip
    for (int i = int(oneThird); i < (int(oneThird))*2; i+=stepSize){
        for (int j = 0; j < height; j+=stepSize){
            ofColor pixel = grabber.getPixels().getColor(i,j);
            float brightness = pixel.getBrightness();
            ofPushMatrix();
                // float radius = ofMap(brightness, 0, 255, 1, 2.5);
                ofSetColor(pixel);
                ofDrawCircle(i, j, 2.5);
            ofPopMatrix();
        }
    }
    
    // draw end strip
    for(int i = int(oneThird) * 2; i < width; i+= stepSize*4){
        for( int j = 0; j < height; j += stepSize*4){
            ofColor pixel = grabber.getPixels().getColor(i,j);
            ofPushMatrix();
                ofSetColor(pixel);
                ofDrawBitmapString("sg", i,j);
            ofPopMatrix();
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
