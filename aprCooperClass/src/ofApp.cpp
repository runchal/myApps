#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    font.load("Helvetica.ttc", 100, true, true, true);
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0);
    ofSetColor(255);
//    myFont.drawstring("orange");
    
//    ofRotateY(ofGetElapsedTimef()* 30);
    
//    //declare variables
//    string myString = "This is fine";
//
//    ofRectangle rect = font.getStringBoundingBox(myString, 200, 200);
//
//    //creates the rotation
//    //need push and pop matrix
//    //what happens if i use sin?
//
//    for (int i = 0; i < 20; i++){
//        ofPushMatrix();
//        ofTranslate(200,200);
//        ofRotateX(ofGetElapsedTimef()* 30 + i*20);
//        font.drawString(myString, 0, 0);
//        ofPopMatrix();
//
//    }
   
    //now lets add in a camera
    
    ofBackground(0);
    ofSetColor(255);
    //    myFont.drawstring("orange");
    
    //    ofRotateY(ofGetElapsedTimef()* 30);
    
    //declare variables
    string myString = "This is fine";
    
    ofRectangle rect = font.getStringBoundingBox(myString, 200, 200);
    
    //creates the rotation
    //need push and pop matrix
    //what happens if i use sin?
    
    for (int i = 0; i < 20; i++){
        ofPushMatrix();
        ofTranslate(200,200);
        ofRotateX(ofGetElapsedTimef()* 30 + i*20);
        font.drawString(myString, 0, 0);
        ofPopMatrix();

    }
    
//    cam.enableOrtho();
//
//    cam.begin();
//    //this centers the text on the strong
//
//    for (int i = 0; i < 20; i++){
//        ofPushMatrix();
//        //what the fuck is ofTranslate doing here
//        ofTranslate(0,0, i*20);
//        font.drawString(myString, -rect.width*0.5, -rect.height*0.5);
//        ofPopMatrix();
//    }
//
//    cam.end();
    
    //example three d camera
//    cam.begin();
//    ofDrawRectangle(0,0,100,100);
//    cam.end();
    
//    now we're going to draw with points
    
//    ofPolyline example: collection of points
    
    myLine = myLine.getSmoothed(2);
//    myLine.draw();
//    ofPolyline resampled = myLine.getResampledBySpacing(10);
//
//    for (int i = 0; i<20; i++){
//
//    }
    
    
    

//    //path is complex object that is set of shapes, ofPath can store those things
//    vector <ofPolyline> lines;
//    vector <ofPath> characters = font.getStringAsPoints(myString);
//
//    for (int i = 0; i < characters.size(); i++){
//        for (int j = 0; j < characters[i].getOutline().size(); j++){
//            lines.push_back(characters[i].getOutline()[j]);
//        }
//    }
//
//    ofTranslate(300,300);
//
//    for (int i = 0; i<lines.size(); i++){
//        for (int j = 0; j <)
//    }

//    vector <ofPolyline> lines;
//    vector <ofPath> characters = font.getStringAsPoints(myString);
//
//    ofTranslate(300, 300);
//
//    for (int i = 0; i < lines.size(); i++){
//        lines[i].draw();
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

    myLine.addVertex(x,y);
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

    myLine.clear();
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
