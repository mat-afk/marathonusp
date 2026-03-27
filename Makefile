SRC_DIR = src
BIN_DIR = bin

COMPILER = g++

FILE ?= main

SRC = $(SRC_DIR)/$(FILE).cpp
OUT = $(BIN_DIR)/$(FILE)

all: run

run:
	@mkdir -p $(BIN_DIR) && $(COMPILER) $(SRC) -o $(OUT) && ./$(OUT)

