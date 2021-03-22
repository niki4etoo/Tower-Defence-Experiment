#define _WINDOW_MANAGER_H
#include <GLFW/glfw3.h>
#include <string>

struct ScreenSizes {
	int width[3] = { 800, 1024, 1280 };
	int height[3] = { 600, 768, 980 };
};

class WindowManager {
	int width;
	int height;
	int state;
	GLFWmonitor *monitor;
	const GLFWvidmode *mode;
	std::string title = "Tower Defence Experiment";
public:
	WindowManager();
	~WindowManager(){};
	void setTitle(std::string title);
	std::string getTitle();
	void setWidth(int width);
	int getWidth();
	void setHeight(int height);
	int getHeight();
	void setState(int state);
	int getState();
	void setMonitor(GLFWmonitor *monitor);
	GLFWmonitor* getMonitor();
	
	//Toggle Fullscreen / screen sizes
	void toggleWindowSizes(GLFWwindow* window, int type);
};
