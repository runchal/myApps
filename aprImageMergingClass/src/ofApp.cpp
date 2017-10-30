#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    noahMix.allocate(360, 240, OF_IMAGE_COLOR);
    
    ofDirectory dir; // this is creating a directory variable called dir. Is this actually called a variable?
    dir.listDir("noah"); // this is pointing the directory to the folder in data with images
//    cout << dir.size() << endl; // this will list the number of images in the directory
    
    /*
     From Zach: we have a problem where the pixels of this have 8 bits, there are 8 bits for red, 8 bits for
     green. We need to do the average which means we need to sum up all of these pixels, we need to take the
     red from the first pixel of the first image and the red from the first pixel of the second image
     and the red from the first pixel of the third image and so on and add them together and divide it.
     We need a way to store this information that is larger than than 255, what I'm going to do is create a
     ton of floating point numbers. I'll create an array of integer numbers, divide by the total.
     */
    
    int pixelSum[ 360 * 240 * 3];
    
    //detroit
    for (int i = 0; i<360*240*3; i++){
        pixelSum[i]=0;
    }
    
    
    // this creates an array of ints that represent the number of pixel colors we would store. if this was black and white I suppose we could use just one pixel thing for grey, but this is basically creating a line of numbers? actually i realized i have no clue what is going on here. After running a cout it appears that it is creating an array of a specific size with values stored to 0
    
    dir.sort();
    
    for (int i = 0; i < dir.size(); i++){
        cout << "loading: " << dir.getPath(i) << endl; // this is not returning things that I want it to return.
        ofImage temp; // creates a temporary ofImage to store individual pixel data in the loops
        temp.setUseTexture(false); // this takes the temp ofImage thing and makes it not store the texture
        temp.load(dir.getPath(i)); // this will load in each image from the path.
        
        /*
         ofImage has texture, and texture uploads things to graphic cards and turning it off will make it not load to the graphic card and make it run faster
         */
        
        /* now we want to add to the pixel sum (the value of each first pixel) by creating a for loop
         that takes the red green and blue image, going to grab the data
         */
        
        for (int j = 0; j<360; j++){
            for (int k = 0; k < 240; k++){ //Zach wants to point out that this is where you can get a lot of bugs in your code, when you have a for loop inside of for loop
                ofColor c = temp.getColor(j, k); // this is going though every single pixel and getting the color from that pixel. j,k are the pixel coordinates and what it's doing is getting the file from the folder associated with temp, and then getting the pixel color
                int index = (k * 360 + j)*3; // zach has this as funky math. As he explains, this is a one-dimensional array, we need to figure out where we are inside that one dimensional array, we are in a two dimensional for loop.
                pixelSum[index] += c.r;
                pixelSum[index+1] += c.g;
                pixelSum[index+2] += c.b;
                
                
            }
        }
        
        cout << "pixel sum of red for pixel 0 " << pixelSum[0] << endl;
        
    }
    
    for (int i = 0; i<360; i++){
        for (int j = 0; j < 240; j++){
            ofColor c; // this initializes this
            int index = (j*360+i)*3;
            c.r = (float)pixelSum[index] / (float)dir.size();
            c.g = (float)pixelSum[index+1] / (float)dir.size();
            c.b = (float)pixelSum[index+2] / (float)dir.size();
            noahMix.setColor(i,j, c);
            
      
        
        }
    }
    
    noahMix.update();
        // is it normal to feel like an idiot all the time when programming or is it just me
    
    
    
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    noahMix.draw(0,0);
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
