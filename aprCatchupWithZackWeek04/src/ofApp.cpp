#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    pos.x = 40;
    pos.y = 400;
    ptA.set(0,0);
    ptB.set(ofGetWidth(), ofGetHeight());
    
    startTime = ofGetElapsedTimef();
    duration = 1;
}

//--------------------------------------------------------------
void ofApp::update(){

    //this was messing around
//    pos.x += 1;
    float elapsedTime = ofGetElapsedTimef() - startTime;
    
    cout << "elapsedTime " << elapsedTime << endl;
    
    //Zach: I LOVE 0 to 1
    
    float pct = elapsedTime / duration;
    
    //WE LOVE NUMBERS BETWEEN 0 AND 1
    cout << pct << endl;
    
    //traffic camera
    pct = powf(pct, .1);

    pos = (1-pct) * ptA * pct * ptB;
    cout << "pos is " << pos << endl;
    
    if (pct > 1){
        startTime = ofGetElapsedTimef();
        
        //fractional power starts fast and slows down
        //
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){

    //basic animation
    ofBackground(0);
    ofCircle(pos,5);
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

    if (key == ' '){
        startTime = ofGetElapsedTimef();
    }
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
