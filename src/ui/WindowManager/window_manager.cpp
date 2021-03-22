#include "../../../include/ui/window_manager.h"

WindowManager::WindowManager() {
	// glfw: initialize and configure
	// ------------------------------
	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

#ifdef __APPLE__
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
#endif

	this->width = 800;
	this->height = 600;
}

void WindowManager::setTitle(std::string text) { this->title = text; }

std::string WindowManager::getTitle() { return this->title; }

void WindowManager::setWidth(int width) { this->width = width; }

int WindowManager::getWidth() { return this->width; }

void WindowManager::setHeight(int height) { this->height = height; }

int WindowManager::getHeight() { return this->height; }

void WindowManager::setState(int state) { this->state = state; }

int WindowManager::getState() { return this->state; }

void WindowManager::setMonitor(GLFWmonitor *monitor) {
	this->monitor = monitor;
}

GLFWmonitor *WindowManager::getMonitor() { return this->monitor; }

void WindowManager::toggleWindowSizes(GLFWwindow *window, int type) {
	if (type >= 0 && type <= 3) {
		struct ScreenSizes screen_sizes;

		switch (type) {
			case 0: {
				this->width = screen_sizes.width[0];
				this->height = screen_sizes.height[0];
				glfwSetWindowSize(window, this->width,
						  this->height);
				this->setState(0);
			} break;
			case 1: {
				this->width = screen_sizes.width[0];
				this->height = screen_sizes.height[0];
				glfwSetWindowSize(window, this->width,
						  this->height);
				this->setState(1);
			} break;
			case 2: {
				this->width = screen_sizes.width[1];
				this->height = screen_sizes.height[1];
				glfwSetWindowSize(window, this->width,
						  this->height);
				this->setState(2);
			} break;
			case 3: {
				this->width = screen_sizes.width[2];
				this->height = screen_sizes.height[2];
				glfwSetWindowSize(window, this->width,
						  this->height);
				this->setState(3);
			} break;
		}
	}
}
