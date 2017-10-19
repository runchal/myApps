#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    camWidth = 320; //this is trying to grab oF at a size
    camHeight = 240; // is it forcing the camera to be in these paramenters?
    
    //get a list of devices
    vector<ofVideoDevice> devices = vidGrabber.listDevices(); //vector is creating a growable array of devices in case we add or subtract devices??

    
    for(size_t i = 0; i < devices.size(); i++){ //this is declaring a for loop that is going to get the number of devices? it is growing the size of the array? I think sizes is a property of the vector
        if(devices[i].bAvailable){
            //log the device
            ofLogNotice() << devices[i].id << ": " << devices[i].deviceName;
        }else{
            //log the device and note it as unavailable
            ofLogNotice() << devices[i].id << ": " << devices[i].deviceName << " - unavailable ";
        }
        
    }
    
    vidGrabber.setDeviceID(0);
    vidGrabber.setDesiredFrameRate(60);
    vidGrabber.initGrabber(camWidth, camHeight);
    
    videoInverted.allocate(camWidth, camHeight, OF_PIXELS_RGB);
    videoTexture.allocate(videoInverted);
    ofSetVerticalSync(true);
    
    //i think this above is getting everything setup for inverting the camera. I'm not sure why nothing is being set up the non-inverted thing?
    
    //also i tried to set this up but like it did something weird and sent me to debug so let's keep coding and see what happens
}

//--------------------------------------------------------------
void ofApp::update(){

    ofBackground(100, 100, 100); //setting the abckground to some grayish shit
    vidGrabber.update(); //not sure what this does
    
    
    if(vidGrabber.isFrameNew()){ //is this creating an array of pixels and then putting each pixel into a place and then drawing it?
        ofPixels & pixels = vidGrabber.getPixels();
        for(size_t i = 0; i < pixels.size(); i++){
            //invert the color of the pixels
            videoInverted[i] = 255 - pixels[i];
        }
        //load the inverted pixels
        videoTexture.loadData(videoInverted);
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofSetHexColor(0xffffff);
    vidGrabber.draw(20, 20);
    videoTexture.draw(20 + camWidth, 20, camWidth, camHeight);
    //what the fuck is this function doing.
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

    if(key == 's' || key == 'S'){
        vidGrabber.videoSettings();
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
