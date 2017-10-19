#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    //printf is old school
    //cout is new school
    
//    cout << "hi" << endl;
//    
//    cout << ofRandom(0,100) << endl;
//    cout << ofRandom(0,100) << endl;
//    cout << ofRandom(0,100) << endl;
//    cout << ofRandom(0,100) << endl;
//    cout << ofRandom(0,100) << endl;
     // you can think of ofRandom as a pseudo-Random function
    
    ofSeedRandom(0);
    //this helps ask for the same random number at the beginnign of every app
    //this helps you get the same random numbers every time ÑÊit's weird to think about this philosophically
    //if you use a random number in the draw function, then the graphics are going to shake and vibrate ÑÊif you want that you should
    //if you seed it to the system clock you will always get different numbers in general (this is interesting conceptually also)
    //you can change ofSeedRandom to get a different set. Zach likes to use mouse position
    
    
//    for (int i = 0; i < 100; i++){
//        cout << ofRandom(0,100) << endl;
//        
//    }

    //let's draw four points
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

//    ofBackground(255);
//    ofSetColor(0);
//    
//    ofPoint a = ofPoint(100,100);
//    ofPoint b = ofPoint(100,200);
//    ofPoint c = ofPoint(200,200);
//    ofPoint d = ofPoint(100,200);
//    
//    ofDrawLine(a,b);
//    ofDrawLine(b,c);
//    ofDrawLine(c,d);
//    ofDrawLine(a,d);
//    
//    //for some reason i can't fucking draw a box
//    
//    
//    ofBackground(0);
//    ofSetColor(255);
    
    
    //ofNoise () << 0 nad 1
    //ofSignedNoise () << -1 and 1
    //ofNoise there is 1d, 2d, 3d, 4d noise
    //ofNoise(float, float, float) for example
    
    
    //noisy via random
//    for(int i=0; i<100; i++){
//        ofDrawLine(100+i*3, ofGetHeight()/2,
//                   100+i*3, ofGetHeight()/2+100 + ofRandom(-50,50));
//    }
//    
    
    //noisy via random
//    for(int i=0; i<100; i++){
//        ofDrawLine(100+i*3, ofGetHeight()/2,
//                   100+i*3, ofGetHeight()/2+100 + ofSignedNoise(i*0.05,ofGetElapsedTimef() *50);
//    }
    
                   
    
    //it's returning a random amount but it's continuous
    //you have to be careful abot the scale but
    
    //trying to make interreuptions here with vera malner
    //how to make a color
    ofBackground(255);
    
    


//    ofSetColor(ofMap(sin(ofGetElapsedTimef()) * 2, -1, 1, 0, 255),
//               ofMap(sin(ofGetElapsedTimef()) * 3, -1, 1, 0, 255),
//               ofMap(sin(ofGetElapsedTimef()) * 6, -1, 1, 0, 255));

    //UNDONE
    //1.    write array to get ofGetMouseX and ofGetMouseY
    //      use the array to get positions and feed them into a color scheme of some sort
    //
    
    //map color to mouseXh
//    ofSetColor(ofMap(ofGetMouseX() * 5, 0, ofGetWidth(), 0, 255)),
//               ofMap(ofGetMouseX()*8, 0, ofGetWidth(), 0, 255),
//               ofMap(ofGetMouseX()*7, 0, ofGetWidth(), 0, 255));

//    map out mouse position of 0 and 255 for JUST the first value
    ofSetColor((ofMap(ofGetMouseX(), 0, ofGetWidth(), 0, 255),
               ofMap(ofGetMouseX(), 0, ofGetWidth(), 0, 0),
               ofMap(ofGetMouseX(), 0, ofGetWidth(), 0, 0)),
               (ofMap(ofGetMouseX(), 0, ofGetWidth(), 0, 0),
                ofMap(ofGetMouseX(), 0, ofGetWidth(), 0, 255),
                ofMap(ofGetMouseX(), 0, ofGetWidth(), 0, 0)),
               (ofMap(ofGetMouseX(), 0, ofGetWidth(), 0, 0),
                ofMap(ofGetMouseX(), 0, ofGetWidth(), 0, 0),
                ofMap(ofGetMouseX(), 0, ofGetWidth(), 0, 255))
               );
    
    ofDrawRectangle(200,200,200,200);
    
//    ofSetColor(20,0,0);

    //green attempt
//    ofSetColor(ofColor( 0, ofRandom( 0, 255 ), 0 ));
    
    //set center of screen to return white color value
    //maybe i should start with the map first?
//    ofSetColor(
//           ofMap(ofGetMouseX() % 30, 0, ofGetWidth(), 0 ,255),
//           ofMap(ofGetMouseX() % 80, 0, ofGetWidth(), 0 ,255),
//           ofMap(ofGetMouseX() % 140, 0, ofGetWidth(), 0 ,255)
//               );
    
    
    
    
    for (int i = 0; i < 20; i++){
        for (int j = 0; j<20; j++){
            ofPoint pos = ofPoint (i*40+10, j*40+10);
            
            //this made a lovely fade effect but i have commented it out because i am trying to figure out the colors
//            ofSetColor(i*j);
            ofPoint a = pos - ofPoint(0,0);
            ofPoint b = pos - ofPoint(0,20);
            ofPoint c = pos - ofPoint(20,0);
            ofPoint d = pos - ofPoint(20,20);
            ofDrawLine(a,b);
            ofDrawLine(b,d);
            ofDrawLine(d,c);
            ofDrawLine(c,a);
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
