#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    catchUp.set(300,300);
    catchUp2.set(300,300);
    catchUps.set
}

//--------------------------------------------------------------
void ofApp::update(){

    ofPoint mouse(mouseX, mouseY);
    catchUps[0] = 0.9 * catchUps[0] + 0.1 * muse;
    for (i=0; i<10; i++){
        
    }
    
//    catchUp = 0.9 * catchUp + 0.1 * mouse;
//    catchUp2 = 0.9 * catchUp2 + 0.1 * catchUp;
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0);
//    ofDrawCircle(catchUp, 20);
//    ofDrawCircle(catchUp2, 20);
    
    
    
    
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
