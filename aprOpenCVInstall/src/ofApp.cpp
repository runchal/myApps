#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

//w#ifdef _USE_LIVE_VIDEO // i don't think we need this so i'm going to copy along but get rid of every if statement since i only care about live video
    vidGrabber.setVerbose(true);
    vidGrabber.initGrabber(320,240);
//#else
//    vidPlayer.loadMovie("fingers.mov");
//    vidPlayer.play();
//#endif
    
    colorImg.allocate(320,240); //is it setting the boundaries of the pixel sapce?
    grayImage.allocate(320,240); //same
    grayBg.allocate(320,240);
    grayDiff.allocate(320,240);
    
    bLearnBakground = true; //ok that bakground from the h file wasn't a typo
    threshold = 80; //hmm what the fuck is a threshold... oh it's an integer i created
    //fuck this hipster electropop shit i need some hip hop
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    ofBackground(100,100,100);
    
    bool bNewFrame = false; //ok this is going to be asking if a new frame is true or false which is interesting, i wonder what this ends up doing
    
    vidGrabber.update(); //getting a frame
    bNewFrame = vidGrabber.isFrameNew(); //passing a true or false value to this, this will likely be used as a counter to trigger something i'm guessing
    
    if(bNewFrame){
        ofPixels pixels = vidGrabber.getPixels();
        colorImg.setFromPixels(pixels.getPixels(), 320, 240);
        
        
        grayImage = colorImg;
        if (bLearnBakground == true){
            grayBg = grayImage; // the = sing copys the pixels from grayImage into grayBG. The commnets I copied this from said it is operator overloading but I'm not sure what that is doing
            bLearnBakground = false;
        }
            
            //take the abs value of the difference between background and incomonig and threashold ok that made no sense based on what I read
            grayDiff.absDiff(grayBg, grayImage);
            grayDiff.threshold(threshold);
            
            //find contours which are between the size of 20 pixels and 1/3 the width times height pixels. also find holes is set to true so we will get interior cotnours as well
            contourFinder.findContours(grayDiff, 20, (340*240)/3, 10, true); //find holes. I HAVE NO CLUE
        }
    
    printf("%f \n", ofGetFrameRate());
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //draw icoming, grayscae,l, bg, thresholded diff. no clie what this does but will fuck with threshold as next step
    
    ofSetColor(0xffffff);
    colorImg.draw(20,20);
    grayImage.draw(360,20);
    grayBg.draw(20,280);
    grayDiff.draw(360,280);
    
    //then draw the contours
    
    ofFill();
    ofSetColor(0x333333);
    ofRect(360,540,320,240);
    ofSetColor(0xffffff);
    
    //we could drae hte whole contour finder
//    contourFinder.draw(360,540);
    
    //or draw each blob individuall
    
    for (int i = 0; i < contourFinder.nBlobs; i++){
        contourFinder.blobs[i].draw(360,540);
    }
    
    //finally a report
    
    ofSetColor(0xffffff);
    char reportStr[1024];
    sprintf(reportStr, "bg subtraction and blob detection\npress ' ' to capture bg\nthreshold %i (press: +/-)\nnum blobs found %i", threshold, contourFinder.nBlobs);
    ofDrawBitmapString(reportStr, 20, 600);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

    switch (key){
        case ' ':
            bLearnBakground = true;
            break;
        case '+':
            threshold ++;
            if (threshold > 255) threshold = 255;
            break;
        case '-':
            threshold --;
            if (threshold < 0) threshold = 0;
            break;
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
