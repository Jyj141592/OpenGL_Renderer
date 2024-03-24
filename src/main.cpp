#include <iostream>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>

int main(int, char**){
    glfwInit();
    GLFWwindow* window = glfwCreateWindow(640,480,"Test Window",0,0);

    glfwMakeContextCurrent(window);
    while(!glfwWindowShouldClose(window)){
        
        glfwPollEvents();
    }
    glfwDestroyWindow(window);
    glfwTerminate();
}
