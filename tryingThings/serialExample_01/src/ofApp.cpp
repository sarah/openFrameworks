#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetVerticalSync(true);
	
	bSendSerialMessage = false;
    bSendSerialOn = false;
	ofBackground(255);	
	ofSetLogLevel(OF_LOG_VERBOSE);
	
	font.load("DIN.otf", 64);
	
	serial.listDevices();
	vector <ofSerialDeviceInfo> deviceList = serial.getDeviceList();
	
	// this should be set to whatever com port your serial device is connected to.
	// (ie, COM4 on a pc, /dev/tty.... on linux, /dev/tty... on a mac)
	// arduino users check in arduino app....
	int baud = 57600;
    ofSetLogLevel(OF_LOG_VERBOSE);
    if(!serial.setup("/dev/tty.usbmodem1411", baud)) {
        // log and error and leave
        ofLogError() << "could not open serial port - listing serial devices";
        serial.listDevices();
        OF_EXIT_APP(0);
    }
    
	nTimesRead = 0;
	nBytesRead = 0;
	readTime = 0;
	memset(bytesReadString, 0, 4);
}

//--------------------------------------------------------------
void ofApp::update(){
    if(bSendSerialMessage){
        // this is just the program running on the arduino right now
        // c1 for LED on; c0 for LED off; could be anything
        if (bSendSerialOn){
            cout << "turning LED ON by sending c1" << endl;
            serial.writeByte('c');
            serial.writeByte('1');
        } else {
            cout << "turning LED off by sending c0" << endl;
            serial.writeByte('c');
            serial.writeByte('0');
        }
    }
    
	if (bSendSerialOn){
		// (2) read
		// now we try to read 3 bytes
		// since we might not get them all the time 3 - but sometimes 0, 6, or something else,
		// we will try to read three bytes, as much as we can
		// otherwise, we may have a "lag" if we don't read fast enough
		// or just read three every time. now, we will be sure to 
		// read as much as we can in groups of three...
		
//        nTimesRead = 0;
//        nBytesRead = 0;
//        int nRead  = 0;  // a temp variable to keep count per read
//
//        unsigned char bytesReturned[3];
//
//        memset(bytesReadString, 0, 4);
//        memset(bytesReturned, 0, 3);
//
//        while( (nRead = serial.readBytes( bytesReturned, 3)) > 0){
//            nTimesRead++;
//            nBytesRead = nRead;
//        };
//
//        memcpy(bytesReadString, bytesReturned, 3);
//
//        bSendSerialMessage = false;
//        readTime = ofGetElapsedTimef();
    } else {
//        cout << "turning LED off by sending c0" << endl;
//        serial.writeByte('c');
//        serial.writeByte('0');
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
	if (nBytesRead > 0 && ((ofGetElapsedTimef() - readTime) < 0.5f)){
		ofSetColor(0);
	} else {
		ofSetColor(220);
	}
	string msg;
	msg += "click to test serial:\n";
	msg += "nBytes read " + ofToString(nBytesRead) + "\n";
	msg += "nTimes read " + ofToString(nTimesRead) + "\n";
	msg += "read: " + ofToString(bytesReadString) + "\n";
	msg += "(at time " + ofToString(readTime, 3) + ")";
	font.drawString(msg, 50, 100);
}

//--------------------------------------------------------------
void ofApp::keyPressed  (int key){
    cout << "key: " << key << endl;
    if(key == 99){
        bSendSerialOn = true;
    }
    if(key == 111){
        bSendSerialOn = false;
    }
	
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){ 
	
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){
	
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
	
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    bSendSerialMessage = true;
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

