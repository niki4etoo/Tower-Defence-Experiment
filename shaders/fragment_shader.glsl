#version 420 core

out vec4 FragColor;

in vec2 TexCoords1;

uniform sampler2D texture1;

void main()
{
	FragColor = vec4(0.2, 0.3, 0.8, 1.0);
	//FragColor = texture(texture1, TexCoords1);
}
