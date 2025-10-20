CC := gcc
SRCDIR := src
BUILDDIR := build
BINDIR := bin
INCDIR := include
TARGET := $(BINDIR)/runner
SRCEXT := c
SOURCES := $(shell find $(SRCDIR) -type f -name *.$(SRCEXT))
HEADERS := $(shell find $(INCDIR) -type f -name *.h)
OBJECTS := $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SOURCES:.$(SRCEXT)=.o))
CFLAGS := -O2 -Wall
all: $(TARGET)
$(TARGET): $(OBJECTS)
mkdir -p $(BINDIR)
@echo "> Linking..."
$(CC) $^ -o $(TARGET)
CC := gcc
SRCDIR := src
BUILDDIR := build
BINDIR := bin
INCDIR := include
TARGET := $(BINDIR)/runner
SRCEXT := c
SOURCES := $(shell find $(SRCDIR) -type f -name *.$(SRCEXT))
HEADERS := $(shell find $(INCDIR) -type f -name *.h)
OBJECTS := $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SOURCES:.$(SRCEXT)=.o))
CFLAGS := -O2 -Wall
all: $(TARGET)
$(TARGET): $(OBJECTS)
mkdir -p $(BINDIR)
@echo "> Linking..."
$(CC) $^ -o $(TARGET)
