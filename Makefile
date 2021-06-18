TARGET = tde
OBJ = glad.o
LIBS = -lglfw -lGL -lX11 -lpthread -lXrandr -lXi -ldl -lm
SRC = main.cpp src/ui/button.cpp src/ui/inventory.cpp src/ui/main_menu.cpp src/ui/WindowManager/window_manager.cpp src/ui/settings.cpp \
	src/towers/towers.cpp src/towers/turret.cpp src/towers/tower.cpp \
	src/player/player.cpp src/player/hud.cpp src/enemy/enemy.cpp src/level/level.cpp src/level/wave.cpp src/map/map.cpp src/map/terrain.cpp \
	src/effects/transitions.cpp

# Variables for debugging
WARNINGS = -Wall
GDB = -ggdb

main:
	g++ -std=c++11 $(WARNINGS) $(GDB) -o $(TARGET) $(OBJ) $(SRC) $(LIBS)

clean:
	rm -f $(TARGET)
