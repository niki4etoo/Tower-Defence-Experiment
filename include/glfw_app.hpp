#ifndef  _GLFW_APP_HPP_
#define  _GLFW_APP_HPP_

#include "glfw_window.hpp" //<-- Our GLFW Window
#define WINDOW_WIDTH 640
#define WINDOW_HEIGHT 480

namespace glfw_game_app {

struct Game{

    Window mWindow;
    Window& window() { return mWindow; }

    Game(int w = WINDOW_WIDTH, int h = WINDOW_HEIGHT, const char *title = "TDE - Tower Defence Experiment")  {

      /*-----------------------------------------------------------------------------
       *  Initialize GLFW
       *-----------------------------------------------------------------------------*/
      if( !glfwInit() ) exit(EXIT_FAILURE);
      mWindow.create(this,w,h,title);

      /*-----------------------------------------------------------------------------
       *  Initialize GLEW
       *-----------------------------------------------------------------------------*/
      glewExperimental = true;
      GLenum glewError = glewInit();
      if (glewError != GLEW_OK){
       printf("glew init error\n%s\n", glewGetErrorString( glewError) );
     }

      if (GLEW_APPLE_vertex_array_object){
        printf("genVertexArrayAPPLE supported\n");
      } else if (GLEW_ARB_vertex_array_object){
        printf("genVertexArrays supported\n");
      }

      /*-----------------------------------------------------------------------------
       *  Some Good Defaults to Start with: enable Alpha Blending and Depth Testing
       *-----------------------------------------------------------------------------*/
      glEnable(GL_DEPTH_TEST);
      glDepthFunc(GL_LESS);

      glEnable(GL_BLEND);
      glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

      glLineWidth(3);               //<-- Thicken lines so we can see 'em clearly

    }


    /*-----------------------------------------------------------------------------
     *  Start the Draw Loop
     *-----------------------------------------------------------------------------*/
    void start(){
      while ( !mWindow.shouldClose() ){

        mWindow.setViewport();

        glClearColor(.2,.2,.2,1);
        glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        onDraw();

        mWindow.swapBuffers();      //<-- SWAP BUFFERS
        glfwPollEvents();           //<-- LISTEN FOR WINDOW EVENTS

      }

    }


    /*-----------------------------------------------------------------------------
     *  Properly terminate glfw when app closes
     *-----------------------------------------------------------------------------*/
    ~Game(){
      glfwTerminate();
    }

    virtual void onDraw() {}

    virtual void onMouseMove(int x, int y){}

    virtual void onMouseDown(int button, int action){}

    virtual void onKeyDown(int key, int action){}
};

} //glfw_game_app namespace


#endif   /* ----- #ifndef _GLFW_APP_HPP_ */
