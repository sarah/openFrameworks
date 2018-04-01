#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){	 

	// load in sounds:
    purr.load("sounds/max.mp3");
	
	// the fft needs to be smoothed out, so we create an array of floats
	// for that purpose:
	fftSmoothed = new float[8192];
	for (int i = 0; i < 8192; i++){
		fftSmoothed[i] = 0;
	}
	
	nBandsToGet = 128;
}


//--------------------------------------------------------------
void ofApp::update(){
	
	ofBackground(0);

	// update the sound playing system:
	ofSoundUpdate();	
	
    if(! purr.isPlaying()){
        purr.play();
    }
    
	// (5) grab the fft, and put in into a "smoothed" array,
	//		by taking maximums, as peaks and then smoothing downward
	float * val = ofSoundGetSpectrum(nBandsToGet);		// request 128 values for fft
	for (int i = 0;i < nBandsToGet; i++){
		
		// let the smoothed calue sink to zero:
		fftSmoothed[i] *= 0.96f;
		
		// take the max, either the smoothed or the incoming:
		if (fftSmoothed[i] < val[i]) fftSmoothed[i] = val[i];
        cout << fftSmoothed[i] << endl;
	}
}

//--------------------------------------------------------------
void ofApp::draw(){

	
	// draw the fft resutls:
	ofSetColor(255,255,255,255);
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
	float width = (float)(5*128) / nBandsToGet;
	for (int i = 0;i < nBandsToGet; i++){

            ofEnableAlphaBlending();
                ofSetColor(255,255,255,20);
                ofDrawCircle(0,0,fftSmoothed[i]*200);
            ofDisableAlphaBlending();
//        ofDrawCircle(100,100,(fftSmoothed[i]*200));
	}
	
	// finally draw the playing circle:

//    ofEnableAlphaBlending();
//        ofSetColor(255,255,255,20);
//        ofDrawCircle(px, py,50);
//    ofDisableAlphaBlending();
//
//    ofSetHexColor(0xffffff);
//    ofDrawCircle(px, py,8);
}


//--------------------------------------------------------------
void ofApp::keyPressed  (int key){ 
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){ 
	
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
	
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
	// add into vx and vy a small amount of the change in mouse:
//    vx += (x - prevx) / 20.0f;
//    vy += (y - prevy) / 20.0f;
//    // store the previous mouse position:
//    prevx = x;
//    prevy = y;
}
 
//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
//    prevx = x;
//    prevy = y;
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

