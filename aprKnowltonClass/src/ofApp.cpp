#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    judithImg.load("judith.jpg");
    judithImg.setImageType(OF_IMAGE_GRAYSCALE);
    
//    myImg.allocate(500,500,OF_IMAGE_COLOR);
    
//    for (int i = 0; i<500; i++){
//        for (int j = 0; j<500; j++){
//            myImg.setColor(i,j, ofColor(127));
//        }
//    }
    
         myImg.update();
}

//--------------------------------------------------------------
void ofApp::update(){

    float time = ofGetElapsedTimef();
    
//    for (int i = 0; i<500; i++){
//        for(int j = 0; j < 500; j++){
//
//            float dist = ofDist(mouseX, mouseY, i, j);
//            myImg.setColor(i, j, ofColor(127 + 127*sin(dist*0.01),127 + 127*cos(dist*0.01),127 + 127*sin(dist*0.01)));
//        }
//    }
    myImg.update();
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0,0,0);
//    judithImg.draw(0,0);
    
    //disneyland

    ofSetRectMode(OF_RECTMODE_CENTER);

    //for loops inside for loops is like a grid, 2D for loop fundamnetal for images
        for (int i = 0; i < judithImg.getWidth(); i+=10){
            for (int j = 0; j < judithImg.getHeight(); j+=10){
                ofColor c = judithImg.getColor(i, j);
                float bright = c.getBrightness();

                float radius = ofMap(bright, 0, 255,0.01, 1.25); //the latter two numbers control radius
                ofDrawCircle(i+ judithImg.getWidth(), j, radius);
                ofPushMatrix();
                ofTranslate(i,j);
                ofRotateZ( ofMap(bright, 0, 255, mouseY, mouseX));
                ofDrawRectangle(0,0,3,5);
                ofPopMatrix();

//                cout << bright <<endl;
            }
        }
    
    //detroit!
    
//    unsigned char * data = judithImg.getPixels().getData(); //unsigned char is a character between 8 bits asnd 0 nad 255,it's an important idea in C and C++, it's a point which shows a position in memory where, it's a pointer. This is a memory address, it's a numebr where some place in ram where data is.
//
//    for (int i = 0; i < judithImg.getWidth(); i+= 10){
//            for (int j = 0; j < judithImg.getHeight(); j+= 10){
//            //trikc is that this is a two dimensional array with a one dimensional array
//            int index = j*judithImg.getWidth() + i;
//            int brightness = data[index];
//            ofDrawCircle(i,j, ofMap(brightness, 0, 255, 0, 5));
//        }
//    }
    
    //how to synthesize images
    
    myImg.draw(0,0);

    
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
