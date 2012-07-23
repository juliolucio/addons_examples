#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	camera.setup( "camera01.cam" );
}

//--------------------------------------------------------------
void testApp::update(){
	camera.update();
}

//--------------------------------------------------------------
void testApp::draw(){
	camera.begin();
	
	ofSetHexColor( 0x6b90ac );
	ofrender
	ofSphere( 10 );

	camera.end();
	camera.draw( 10,10, ofGetWidth() - 250 , ofGetHeight() - 100 );
		 
	ofSetHexColor( 0xffffff );

	char reportStr[1024];
	sprintf(reportStr, "Left button for rotating teta and fi\nRight button for radius" );
	ofDrawBitmapString(reportStr, 20 , ofGetHeight() - 100 );
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){	
	ofVec2f delta = ofVec2f( x , y ) - mousePosition;
	mousePosition = ofVec2f( x , y );
	if( button == 0 ){
		camera.setDeltaCameraSphericalCoordinatesFi( delta.y / 10 );
		camera.setDeltaCameraSphericalCoordinatesTeta( -delta.x / 10 );	
	}

	if( button == 1 || button == 2 ){
		camera.setDeltaCameraSphericalCoordinatesRadius( - delta.y / 10 );
	}
}
//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
	mousePosition = ofVec2f( x , y );
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}