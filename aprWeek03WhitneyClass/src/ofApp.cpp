#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    time = 0;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    //sin(...);
    //Zach loves this code. It's his Jam.
//    cout << sin (ofGetElapsedTimef()) << endl;
    
    //ofMap
//    float sinVal = sin (ofGetElapsedTimef());
//    cout << ofMap(sinVal, -1, 1,0, 100) << endl;
    
    //make background color change from white to black every 6.28 seconds
//    ofBackground(ofMap(sinVal, -1, 1,0, 255));

    //this is something I made quickly to show how to animate a circle being drawn that shows how
    //to make it bigger and smaller using ofGetMap
//    ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, ofMap(sinVal, -1, 1,0, ofGetHeight()/2-10));

    //this is something I made quickly to show how to animate x position and make it move around
    //the screen by hacking stuff together
    //ofDrawCircle(ofMap(sinVal, -1, 1, 0, ofGetWidth()), ofGetHeight()/2, 100);
    
    //this animates the size of the circle
//    ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2,ofMap(sinVal, -1, 1, 1, 200));
    
    
    //INTRO TO SIN2
    //What Zach wants to introduce is phase, amplitude, frequency
    
    ofBackground(1);
    
//    //this animates at 2pi
//    float sinVal = sin (ofGetElapsedTimef());
//    ofDrawCircle(ofMap(sinVal, -1, 1, 200, 600), 150, 20);
//
//    //this animates twice as fast
//    float sinVal2 = sin (ofGetElapsedTimef()*2);
//    ofDrawCircle(ofMap(sinVal2, -1, 1, 200, 600), 200, 20);
//
//    //this animates three times as fast
//    float sinVal3 = sin (ofGetElapsedTimef()*3);
//    ofDrawCircle(ofMap(sinVal3, -1, 1, 200, 600), 250, 20);
    
    //FREQUENCY VARIATION
    //make the above code a for loop
    //10 circles goijng in different frequencies
    //they go in and out of sync
//    for (int i= 0; i < 10; i++){
//        float sinVal = sin (ofGetElapsedTimef()*(i+1));
//        ofDrawCircle(ofMap(sinVal, -1, 1, 200, 600), (i+1)*50, 20);
//    }
    
    
    //PHASE VARIATION
    //Don't multiply the elapsed time by anything. Thye'll be moving with the same speed.
    //If we add something, we can change the position. We can try adding to change the phase
//    for (int i= 0; i < 10; i++){
//        float sinVal = sin (ofGetElapsedTimef() + i*0.5);
//        ofDrawCircle(ofMap(sinVal, -1, 1, 200, 600), (i+1)*50, 20);
//    }

    
    //CIRCULAR MOVEMENTS
    //circle formula
    //x = xorig + r * cos(angle);
    //y = yorig + r * sin(angle);
    //make a point that moves in a circular angle around the mouse cursor
    //you can reverse x and y cos and sin to change direction
    
//    float x = mouseX + 100 * cos(ofGetElapsedTimef());
//    float y = mouseY + 100 * sin(ofGetElapsedTimef());
//
//    ofDrawCircle(x, y, 10);
    
    
//    //DRAW A LINE/PATH USING POLYLINE
//    //declared ofPolyLine myLine in h file so it exists across frames
//        float x = mouseX + 100 * cos(ofGetElapsedTimef());
//        float y = mouseY + 100 * sin(ofGetElapsedTimef());
//
//    myLine.addVertex(x,y);
//    if (myLine.size() > 100){
//        //this erases the lines to make sure it's kinda smooth and there's not shit all over the screen
//        myLine.getVertices().erase(myLine.getVertices().begin());
//
//    }
//    myLine .draw();
    
    //SSTART FUCKING WITH IT BY FLOATING RADIUS AND FEEDING IT STUFF TO DRAW A LINE/PATH USING POLYLINE
    //declared ofPolyLine myLine in h file so it exists across frames
    
    
//    float radius = ofMap(sin(ofGetElapsedTimef()*100), -1, 1, 100, 200);
//
//    float x = mouseX + radius * cos(ofGetElapsedTimef());
//    float y = mouseY + radius * sin(ofGetElapsedTimef());
//
//    myLine.addVertex(x,y);
//    if (myLine.size() > 200){
//        //this erases the lines to make sure it's kinda smooth and there's not shit all over the screen
//        myLine.getVertices().erase(myLine.getVertices().begin());
//
//    }
//    myLine .draw();
//
    
    //LISAJOULE FIGURE??
    //
    
    int radius = 200;
    //this changes the form
    float multiplier = 100;
    float x = ofGetWidth()/2 + radius * cos(ofGetElapsedTimef()*69*multiplier);
    float y = ofGetHeight()/2 + radius * sin(ofGetElapsedTimef()*420*multiplier);

    
    myLine.addVertex(x,y);
    if (myLine.size() > 1000){
        //this erases the lines to make sure it's kinda smooth and there's not shit all over the screen
        myLine.getVertices().erase(myLine.getVertices().begin());
//        float x = (ofGetWidth()/2 + radius * cos(ofGetElapsedTimef()*69*multiplier))*200;
//        float y = ofGetHeight()/2 + radius * sin(ofGetElapsedTimef()*420*multiplier);
        

    }
    myLine.draw();
    
    //DOING SOMETHING WITH MOUSEPRESS WITH LISAJOULE FIGURE
    
//    if (ofGetMousePressed()){
//        time = time + ofGetLastFrameTime();
//    }
//
//        float x = ofGetWidth()/2 + 200 * cos(time*3.7);
//        float y = ofGetHeight()/2 + 200 * sin(time*0.2);
//
//        myLine.addVertex(x, y);
//        if (myLine.size() > 300){
//            //this erases the lines to make sure it's kinda smooth and there's not shit all over the screen
//            myLine.getVertices().erase(myLine.getVertices().begin());
//
//        }
//        myLine.draw();
    
    //ZACH SHOWING SOMETHING HOW HOW HE'S DRAWING CIRCLES
    
//    //set background color
//    ofBackground(255);
//
//    //for offset
//    ofSetCircleResolution(300);
//
//    ofColor(red);
//    for (int i=0; i < 100; i++){
//        ofDrawCircle(200+i, ofGetHeight(), 15);
//    }
    
    
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
