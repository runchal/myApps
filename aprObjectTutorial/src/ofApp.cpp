#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    for (int i = 0; i < 100; i++){
        myCoolBall[i].x = ofRandom(0,400);
        myCoolBall[i].y = ofRandom(0,400);
        myCoolBall[i].radius = ofRandom(1,5);
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){

    
    
}

//--------------------------------------------------------------
void ofApp::draw(){

//    float w = ofGetWidth()/20;
//    
//    for (int i = 0; i<20; i++){
//        if (i% == 0){
//            ofSetColor(255,0,0);
//        } else {
//            ofSetColor(255);
//        }
//        ofDrawCircle(i*w + w/2, ofGetHeight()/2, w/2);
//    }
    
    
    for(int i = 0;i < 100; i++){
        ofDrawCircle(myCoolBall[i].x, myCoolBall[i].y, myCoolBall[i].radius);
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
