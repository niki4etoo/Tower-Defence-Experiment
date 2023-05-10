CC = g++
CFLAGS = -std=c++11 -Wall -Wextra -pedantic
LDFLAGS = -lSDL2 -lSDL2_image -lSDL2_ttf -lvulkan

SRCDIR = src
OBJDIR = obj
BINDIR = bin

EXECUTABLE = $(BINDIR)/tower_defense

SOURCES = $(wildcard $(SRCDIR)/*.cpp)
OBJECTS = $(SOURCES:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) -o $@ $^

$(OBJECTS): $(OBJDIR)/%.o : $(SRCDIR)/%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -f $(OBJECTS) $(EXECUTABLE)
