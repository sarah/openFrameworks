#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    dc1.load("600-amazon-oregon.jpeg");
    dc2.load("600-facebook_new_albany_data_center.jpg");
    dc3.load("600-FortuneDataCtrs49.jpg");
    dc4.load("600-Opus-Hillsboro-Cloud.png");
    dc5.load("600-prinevilledatacenterexterior.png");
//    mixed.allocate(900,600, OF_IMAGE_COLOR);
    for( int i=0; i < dc1.getWidth(); i+=1){
        for(int j=0; j < dc1.getHeight(); j+=1){
            ofColor p1 = dc1.getColor(i, j);
            ofColor p2 = dc2.getColor(i, j);
            ofColor p3 = dc3.getColor(i, j);
            ofColor p4 = dc4.getColor(i, j);
            int r = (p1.r + p2.r + p3.r + p4.r)/4;
            int g = (p1.g + p2.g + p3.g + p4.g)/4;
            int b = (p1.b + p2.b + p3.b + p4.b)/4;
            ofColor combined = ofColor(r,g,b);
            colors.push_back(combined);
            
            //            float brightness = pixel.getBrightness();
            //            float radius = ofMap(brightness, 0, 255, 2, 3.5);
            //            ofDrawCircle(i, j, radius);
        }
    }
}

//--------------------------------------------------------------
void ofApp::update(){
   
//    mixed.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
//    dc4.draw(0,0);
//    mixed.draw(0,0);
    // lousy math, stop for now
    int x = 0;
    for(int i = 0; i <= 600; i++){
        for(int j = 0; j <= 400; j++){
            ofSetColor(colors[x]);
            ofDrawCircle(i, j, 5);
            x++;
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
