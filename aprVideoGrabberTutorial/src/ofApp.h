#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    ofVideoGrabber vidGrabber; //this seems to create a variable or something to call ofVideoGrabber so you don't have to keep typing ofVideoGrabber?
    ofPixels videoInverted; //this is creating a way to intvert the pixels?
    ofTexture videoTexture; //htis is showing a way to call a texture thing and tie it to video manipulation
    int camWidth; // this is setting an integer variable to the width of the camera
    int camHeight; // this is the camHeight variable
		
};
