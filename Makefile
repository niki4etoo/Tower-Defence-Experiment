INCLUDE_DIR_TOWERS = Towers/
INCLUDE_DIR_BASE = Base/
INCLUDE_DIR_AI = AI/
INCLUDE_DIR_DATABASE = Database/
INCLUDE_DIR_MAP = Map/
INCLUDE_DIR_UI = UI/
INCLUDE_DIR_PLAYER = Player/
INCLUDE_DIR_GLFW = -I/include/
LINK_LIBS = -lGL -lGLEW -lglfw
LIBRARIES = -L/Libraries/



main:
	g++ -std=c++17 -Wall -o tde $(INCLUDE_DIR_TOWERS)Tower.cpp main.cpp $(LINK_LIBS)
	 $(LIBRARIES)libglfw3.a $(LIBRARIES)glew32s.lib $(INCLUDE_DIR_GLFW)
