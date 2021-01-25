#include "../../../include/window_manager.h"

WindowManager::WindowManager()
{
	// glfw: initialize and configure
    // ------------------------------
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

#ifdef __APPLE__
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
#endif

	this->setMonitor(glfwGetPrimaryMonitor());
	const GLFWvidmode* mode = glfwGetVideoMode(this->getMonitor());
	
	this->width = mode->width;
	this->height = mode->height;
	
}

void WindowManager::setWidth(int width)
{
	this->width = width;
}

int WindowManager::getWidth()
{
	return this->width;
}

void WindowManager::setHeight(int height)
{
	this->height = height;
}

int WindowManager::getHeight()
{
	return this->height;
}

void WindowManager::setMonitor(GLFWmonitor *monitor)
{
	this->monitor = monitor;
}

GLFWmonitor* WindowManager::getMonitor()
{
	return this->monitor;
}
