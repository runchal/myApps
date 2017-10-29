#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    horseImg.load("horse.png"); // this looks at the data folder and then assigns a file to the variable name
    horseImg.setImageType(OF_IMAGE_GRAYSCALE); // this makes it grayscale which makes it easier to deal with
}

//--------------------------------------------------------------
void ofApp::update(){

    float time = ofGetElapsedTimef(); //making time a variable
    float sinVal = sin(ofGetElapsedTimef());
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(0); //makes the background black
    
    ofSetColor(255);
    for (int i = 0; i < horseImg.getWidth(); i+= 10){
        for (int j = 0; j <horseImg.getHeight(); j+=10){ //iteration is resolution, if put that into variable and assign it to mouse you get resolution
            ofColor c = horseImg.getColor(i, j);
            float bright = c.getBrightness();
            float radius = ofMap(bright, 0,255,0,5);
//            ofDrawCircle(i+horseImg.getWidth(), j, radius);
            
            ofPushMatrix();
            ofTranslate(i, j);
            ofRotateZ(ofMap(bright, 0, 255, mouseX, mouseY));
            float sinVal = sin(ofGetElapsedTimef());
            ofDrawLine(0,0,ofMap(sinVal*2, -1, 1, ofRandom(-5,5), ofRandom(30,200)),0);
            ofPopMatrix();
        }
    }


//    for (int i = 0; i < 100; i++ ){
//        ofDrawLine(100 + i*3, ofGetHeight()/2,
//                   100 + i*3, ofGetHeight()/2 + 100 +
//                   ofSignedNoise(i*0.05, ofGetElapsedTimef())*50);
//    }
    
//    cout << ofMap(sinVal, -1, 1, 100, 200) << endl;
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
