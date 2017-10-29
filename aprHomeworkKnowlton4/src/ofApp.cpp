#include "ofApp.h"

/*
 The goal of this app is to riff off of Niklas's code and create something
 that creates a sort of loops that takes all the people at SFPC and loops them
 through each other.
 */

//--------------------------------------------------------------
void ofApp::setup(){
    myImage.load("peace.png"); // thats the big emoji
    myImage.setImageType(OF_IMAGE_GRAYSCALE);
    mosaic.load("fingers.png"); // thats the small emoji
    tcImg.load("tc.jpg"); // taeyoon's image
    lgImg.load("lg.jpg"); // lauren's image
    zlImg.load("zl.jpg"); // zach's image
    tcImg.resize(800, 800);
    lgImg.resize(800, 800);
    zlImg.resize(800, 800);
    
    

}

//--------------------------------------------------------------
void ofApp::update(){

    
    resolution = ofMap(ofGetMouseX(), 0, ofGetWindowWidth(), 5, 50);
    maxScale = resolution / tcImg.getWidth();
    minScale = 1 / tcImg.getWidth();
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(255);
 
    /*
    ofSetRectMode(OF_RECTMODE_CENTER);
    
        for (int i = 0; i < myImage.getWidth(); i += resolution){
            for (int j = 0; j < myImage.getHeight(); j += resolution){
                ofColor c = myImage.getColor(i, j);
                float bright = c.getBrightness();
    
                ofPushMatrix();
                    ofTranslate(i,j);
                    float scale = ofMap(bright, 0, 255, minScale, maxScale);
                    ofScale(scale, scale);
                    mosaic.draw(0, 0);
                ofPopMatrix();
            }
        }
    */
    
    ofBackground(255);
    
    ofSetRectMode(OF_RECTMODE_CENTER);
    
    for (int i = 0; i < lgImg.getWidth(); i += resolution){
        for (int j = 0; j < lgImg.getHeight(); j += resolution){
            ofColor c = lgImg.getColor(i, j);
            float bright = c.getBrightness();
            
            ofPushMatrix();
            ofTranslate(i,j);
            float scale = ofMap(bright, 0, 255, minScale, maxScale);
            ofScale(scale, scale);
            tcImg.draw(0, 0);
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

