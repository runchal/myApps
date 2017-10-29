#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    noahMix.allocate(360, 240, OF_IMAGE_COLOR);
    
    ofDirectory dir; // this is creating a directory variable called dir. Is this actually called a variable?
    dir.listDir("noah"); // this is pointing the directory to the folder in data with images
    cout << dir.size() << endl; // this will list the number of images in the directory
    
    /*
     From Zach: we have a problem where the pixels of this have 8 bits, there are 8 bits for red, 8 bits for
     green. We need to do the average which means we need to sum up all of these pixels, we need to take the
     red from the first pixel of the first image and the red from the first pixel of the second image
     and the red from the first pixel of the third image and so on and add them together and divide it.
     We need a way to store this information that is larger than than 255, what I'm going to do is create a
     ton of floating point numbers. I'll create an array of integer numbers, divide by the total.
     */
    
    int pixelSum[ 360 * 240 * 3]; // this creates an array of ints that represent the number of pixel colors we would store. if this was black and white I suppose we could use just one pixel thing for grey, but this is basically creating a line of numbers? actually i realized i have no clue what is going on here. After running a cout it appears that it is creating an array of a specific size with values stored to 0
    
    for (int i = 0; i < 4; i++){
        cout << dir.getPath(i) << endl; // this is not returning things that I want it to return.
        // is it normal to feel like an idiot all the time when programming or is it just me
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

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
