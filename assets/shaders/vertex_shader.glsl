#version 450 core
layout (location = 0) in vec3 aPos;

uniform float xOffset; // Uniform variable for horizontal offset

void main() {
    vec3 pos = aPos + vec3(xOffset, 0.0, 0.0); // Apply horizontal offset
    gl_Position = vec4(pos, 1.0);
}