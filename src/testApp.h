#pragma once

#include "ofMain.h"
#include "camHandler.h"
#include "ardHandler.h"
#include "ofxTweener.h"

class testApp : public ofBaseApp{

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
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
        void draw3d();
        void sBox(float x, float y, float z, float h, float l, float d);
    
        ofMesh          cube;
    
        camHandler*     sideCam;
        camHandler*     topCam;
    
        ardHandler      arduino;
    
        ofPoint position;
        float radius;

        // 3D stuff
        ofLight light; // creates a light and enables lighting
        ofEasyCam cam; // add mouse controls for camera movement
    
        ofFbo rgbaFbo;
    
        bool toggleCamview;
        bool toggleArdSend;
    
        int motorX;
        int motorY;
        int motorZ;
    
};

