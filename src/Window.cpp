#include<glad/glad.h>
#include<GLFW/glfw3.h>
#include<window/Window.h>
#include<iostream>

GLFWwindow* window; 
 void framebuffer_size_callback(GLFWwindow* window, int width, int height);

void Window::createWindow()
{

glfwInit();
glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

window=glfwCreateWindow(800,600,"DreamyEngine", NULL,NULL);

if(window==NULL)
{

std::cerr<<"failed to create window \n";
glfwTerminate();
return;

}

glfwMakeContextCurrent(window);
glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

if(!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)){
    std::cerr<<"failed to initialize GLAD\n";
    glfwTerminate();
    return;
}

while(!glfwWindowShouldClose(window))
{
    glfwSwapBuffers(window);
    glfwPollEvents();
}

glfwTerminate();
return;
}

void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
    glViewport(0, 0, width, height);
}