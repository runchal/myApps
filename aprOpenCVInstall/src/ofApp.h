#pragma once //what does this doe

#ifndef _TEST_APP //wtf does this do
#define _TEST_APP //wtf does this do

#include "ofMain.h"

#include "ofxOpenCv.h" //this is doing something i don't understand but probably getting some key shit from this

#define _USE_LIVE_VIDEO //is ALL_CAPS some open CV stuff


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
		
#ifdef _USE_LIVE_VIDEO
    ofVideoGrabber vidGrabber;
#else
    ofVideoPlayer vidPlayer;
#endif
    
    ofxCvColorImage colorImg;
    
    ofxCvGrayscaleImage grayImage;
    ofxCvGrayscaleImage grayBg;
    ofxCvGrayscaleImage grayDiff;
    
    ofxCvContourFinder contourFinder;
    int threshold;
    bool bLearnBakground; //this seems like a typo
};

#endif //ah okay i think I understand what it was doing – we put in an end statement that like, fucked with shit and said to include certain things depending on what they were
