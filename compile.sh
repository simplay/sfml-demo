#!/bin/bash

g++ -c main.cpp
g++ main.o -o sfml-demo -lsfml-graphics -lsfml-window -lsfml-system
