#include <iostream>
#include <vector>

using namespace::std;

// make a maze that is 10x10 in size (Not random just the same 15x15 maze every time)
char** maze_10x10(){
    char tempMaze[10][10] = {
    {'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X'},
    {'X', 'S', ' ', ' ', 'X', ' ', ' ', ' ', 'E', 'X'},
    {'X', 'X', 'X', ' ', 'X', ' ', 'X', 'X', 'X', 'X'},
    {'X', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'X'},
    {'X', ' ', 'X', 'X', 'X', ' ', 'X', 'X', ' ', 'X'},
    {'X', ' ', ' ', ' ', ' ', ' ', 'X', ' ', ' ', 'X'},
    {'X', 'X', 'X', 'X', ' ', 'X', 'X', ' ', 'X', 'X'},
    {'X', ' ', ' ', 'X', ' ', ' ', ' ', ' ', ' ', 'X'},
    {'X', ' ', 'X', 'X', 'X', 'X', 'X', 'X', ' ', 'X'},
    {'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X'}
};

char** maze = new char*[10];
    for (int i = 0; i < 10; ++i) {
        maze[i] = new char[10];
        for (int j = 0; j < 10; ++j) {
            maze[i][j] = tempMaze[i][j];
        }
    }
    
    return maze;
}

// make a maze that is 15x15 in size (Not random just the same 15x15 maze every time)
char** maze_15x15() {
    char tempMaze[15][15] = {
    {'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X'},
    {'X', 'S', ' ', ' ', 'X', ' ', ' ', 'X', ' ', ' ', ' ', ' ', ' ', 'E', 'X'},
    {'X', 'X', 'X', ' ', 'X', ' ', 'X', 'X', 'X', 'X', 'X', ' ', 'X', 'X', 'X'},
    {'X', ' ', ' ', ' ', ' ', ' ', 'X', ' ', ' ', 'X', ' ', ' ', 'X', ' ', 'X'},
    {'X', ' ', 'X', 'X', 'X', ' ', 'X', 'X', ' ', 'X', 'X', ' ', 'X', ' ', 'X'},
    {'X', ' ', 'X', ' ', ' ', ' ', 'X', ' ', ' ', 'X', ' ', ' ', 'X', ' ', 'X'},
    {'X', 'X', 'X', 'X', ' ', 'X', 'X', ' ', 'X', 'X', ' ', 'X', 'X', ' ', 'X'},
    {'X', ' ', ' ', 'X', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'X'},
    {'X', ' ', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', ' ', 'X', 'X', ' ', 'X'},
    {'X', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'X', ' ', 'X'},
    {'X', 'X', 'X', ' ', 'X', ' ', 'X', 'X', 'X', 'X', 'X', ' ', 'X', 'X', 'X'},
    {'X', ' ', ' ', ' ', ' ', ' ', 'X', ' ', ' ', ' ', ' ', ' ', 'X', ' ', 'X'},
    {'X', 'X', ' ', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', ' ', 'X', ' ', 'X'},
    {'X', ' ', ' ', ' ', ' ', 'X', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'X'},
    {'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X'}
};

    char** maze = new char*[15];
    for (int i = 0; i < 15; ++i) {
        maze[i] = new char[15];
        for (int j = 0; j < 15; ++j) {
            maze[i][j] = tempMaze[i][j];
        }
    }
    return maze;
}
