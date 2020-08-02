
#ifndef _WINDOW_HPP_
#define _WINDOW_HPP_

#include <iostream>

#include "gl_lib.hpp"

using namespace std;

namespace glfw_app {


/*-----------------------------------------------------------------------------
 *  Some Callbacks to be implemented later
 *-----------------------------------------------------------------------------*/
struct Interface {

  static void * app;

  template<class APPLICATION>
  static void OnKeyDown(GLFWwindow* window, int key, int scancode, int action, int mods){
      ((APPLICATION*)(app))->onKeyDown(key,action);
  }

  template<class APPLICATION>
  static void OnMouseMove(GLFWwindow* window, double x, double y){
      ((APPLICATION*)(app))->onMouseMove(x,y);
  }

  template<class APPLICATION>
  static void OnMouseDown(GLFWwindow* window, int button, int action, int mods){
      ((APPLICATION*)(app))->onMouseDown(button,action);
  }

};

void * Interface::app;



/*-----------------------------------------------------------------------------
 *  A GLFW Window Wrapper
 *-----------------------------------------------------------------------------*/
struct Window {

    GLFWwindow * window;
    Interface interface;

    int mWidth, mHeight;

    int width()  { return mWidth; }
    int height() { return mHeight; }
    float ratio() { return (float)mWidth/mHeight;}

    Window() {}

    //Create a Window Context
    template<class APPLICATION>
    void create(APPLICATION * app, int w, int h, const char * name){

        interface.app = app;

        mWidth = w; mHeight = h;

        window = glfwCreateWindow(w,h,name, NULL /*glfwGetPrimaryMonitor()*/,NULL);
        if (!window) {
          glfwTerminate();
          exit(EXIT_FAILURE);
        }
        glfwMakeContextCurrent(window);
        glfwSwapInterval(1); //<-- force interval (not guaranteed to work with all graphics drivers)

        //register callbacks for keyboard and mouse
        glfwSetKeyCallback(window, Interface::OnKeyDown<APPLICATION>);
        glfwSetCursorPosCallback(window, Interface::OnMouseMove<APPLICATION> );
        glfwSetMouseButtonCallback(window, Interface::OnMouseDown<APPLICATION> );

    }


    //Get the Current framebuffer Size in pixels and Set the Viewport to it
    void setViewport(){
        glfwGetFramebufferSize(window, &mWidth, &mHeight);
        glViewport(0,0,mWidth,mHeight);
    }

    //Check whether window should close
    bool shouldClose(){
      return glfwWindowShouldClose(window);
    }

    //Swap front and back buffers
    void swapBuffers(){
      glfwSwapBuffers(window);
    }

    //Destroy the window
    void destroy(){
      glfwDestroyWindow(window);
    }

    ~Window(){
      destroy();
    }
};

} //glfw_app namespace

#endif
