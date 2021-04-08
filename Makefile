TARGET = tde
OBJ = glad.o
LIBS = -lglfw -lGL -lX11 -lpthread -lXrandr -lXi -ldl -lm
SRC = main.cpp src/ui/WindowManager/window_manager.cpp src/towers/towers.cpp src/towers/turret.cpp \
	src/player/player.cpp src/enemy/enemy.cpp src/level/level.cpp src/map/map.cpp src/map/terrain.cpp

# Variables for debugging
WARNINGS = -Wall
GDB = -ggdb

main:
	g++ -std=c++11 $(WARNINGS) $(GDB) -o $(TARGET) $(OBJ) $(SRC) $(LIBS)

clean:
	rm -f $(TARGET)
