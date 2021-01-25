#define _WINDOW_MANAGER_H
#include <GLFW/glfw3.h>

class WindowManager {
	int width;
	int height;
	GLFWmonitor *monitor;
public:
	WindowManager();
	~WindowManager(){};
	void setWidth(int width);
	int getWidth();
	void setHeight(int height);
	int getHeight();
	void setMonitor(GLFWmonitor *monitor);
	GLFWmonitor* getMonitor();
};
