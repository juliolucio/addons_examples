varying vec4 texCoord;
uniform sampler2D modelTexture;
varying vec4 debug;

void main( void ){  
	gl_FragColor = texture2D( modelTexture , texCoord.xy );
    //gl_FragColor = debug;
	//gl_FragColor = vec4( texCoord.xy , 0.0 , 0.0 );
	} 

