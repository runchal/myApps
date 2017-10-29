#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    horseImg.load("horse.png"); // this looks at the data folder and then assigns a file to the variable name
    horseImg.setImageType(OF_IMAGE_GRAYSCALE); // this makes it grayscale which makes it easier to deal with
    
#ifdef TARGET_OPENGLES
    shaderBlurX.load("shadersES2/shaderBlurX");
    shaderBlurY.load("shadersES2/shaderBlurY");
#else
    if(ofIsGLProgrammableRenderer()){
        shaderBlurX.load("shadersGL3/shaderBlurX");
        shaderBlurY.load("shadersGL3/shaderBlurY");
    }else{
        shaderBlurX.load("shadersGL2/shaderBlurX");
        shaderBlurY.load("shadersGL2/shaderBlurY");
    }
#endif

    fboBlurOnePass.allocate(horseImg.getWidth(), horseImg.getHeight());
    fboBlurTwoPass.allocate(horseImg.getWidth(), horseImg.getHeight());
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    float time = ofGetElapsedTimef(); //making time a variable
    float sinVal = sin(ofGetElapsedTimef());
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //this creates a sort of glittery image drawing that is kind of uninteresting IMO
    
    ofBackground(0); //makes the background black
    
//    for (int i=0; i < horseImg.getWidth(); i+=10){
//        for (int j = 0; i < horseImg.getHeight();j+=10){
//            ofColor c = horseImg.getColor(i,j);
//            float bright = c.getBrightness();
//            myLine.addVertex(i,j);
//        }
//    }
//
//    myLine.draw();
    
    
    float blur = ofMap(mouseX, 0, ofGetWidth(), 0, 10, true);
    
    fboBlurOnePass.begin();
    
    shaderBlurX.begin();
    shaderBlurX.setUniform1f("blurAmnt", blur);

    
    
    ofSetColor(255);
    for (int i = 0; i < horseImg.getWidth(); i+= 10){
        for (int j = 0; j <horseImg.getHeight(); j+=10){ //iteration is resolution, if put that into variable and assign it to mouse you get resolution
            ofColor c = horseImg.getColor(i, j);
            float bright = c.getBrightness();
            float sinVal = sin(ofGetElapsedTimef());
            float radius = ofMap(bright, 0,255,0,5);
//            float radius = ofMap(bright, 0,255,0,5);
            ofDrawCircle(i, j, radius);
        }
    }
    
    shaderBlurX.end();
    
    fboBlurOnePass.end();

    
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
