CC = g++
CFLAGS = -std=c++11 -Wall -Wextra -pedantic
LDFLAGS = -lglfw

SRCDIR = src
OBJDIR = obj
BINDIR = build

EXECUTABLE = $(BINDIR)/tde

SOURCES = $(wildcard $(SRCDIR)/*.cpp)
OBJECTS = $(SOURCES:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) -o $@ $^

$(OBJECTS): $(OBJDIR)/%.o : $(SRCDIR)/%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -f $(OBJECTS) $(EXECUTABLE)
