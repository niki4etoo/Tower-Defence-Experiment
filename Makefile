INCLUDE_DIR_TOWERS = Towers/
INCLUDE_DIR_BASE = Base/
INCLUDE_DIR_AI = AI/
INCLUDE_DIR_DATABASE = Database/
INCLUDE_DIR_MAP = Map/
INCLUDE_DIR_UI = UI/
INCLUDE_DIR_PLAYER = Player/

INCLUDE_DIR_GLFW = -Iinclude/

LINK_LIBS = -lGL -lGLEW -lglfw
LIBRARIES = -L/Libraries/

TARGET = tde.o
main:
	g++ -std=c++17 -Wall -o $(TARGET) $(INCLUDE_DIR_TOWERS)Tower.cpp $(INCLUDE_DIR_MAP)Grid.cpp main.cpp $(LINK_LIBS) $(LIBRARIES)libglfw3.a $(LIBRARIES)glew32s.lib $(INCLUDE_DIR_GLFW)

clean:
	rm -f $(TARGET)
