varying vec4 debug;
varying vec4 texCoord;
void main() {
	gl_Position = ftransform();
	texCoord = gl_MultiTexCoord0;
    
    //vec3 normalWorld =  gl_NormalMatrix * gl_Normal;
	//debug = vec4( normalWorld , 1.0 );
}