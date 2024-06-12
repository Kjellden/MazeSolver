#include <iostream>
#include <vector>
#include <windows.h>

#include "mazes.cpp"
using namespace::std;

// Function to display the maze
void displayMaze(char** maze, int height, int width) {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            cout << maze[i][j] << ' ';
        }
        cout << std::endl;
    }
}

int main() {
    // set vars
    int mazeSelect;
    char** maze;
    int mazeHeight;
    int mazeWidth;

    // Display the maze
    cout << "Welcome to the maze solver program what size maze would you like to solve?" << endl;
    cout << "1: 10x10 maze" << endl;
    cout << "2: 15x15 maze" << endl;
    cout << "What option would you like: ";
    cin >> mazeSelect;

    // set the size of the maze and make the maze off user choice
    if (mazeSelect == 1){
        mazeHeight = 10;
        mazeWidth = 10;
        maze = maze_10x10();
    }

    else if (mazeSelect == 2){
        mazeHeight = 15;
        mazeWidth = 15;
        maze = maze_15x15();
    }
    
    // start displaying maze
    std::cout << "\033[2J\033[1;1H";
    displayMaze(maze, mazeHeight, mazeWidth);
    Sleep(1000);
    std::cout << "\033[2J\033[1;1H";
    displayMaze(maze, mazeHeight, mazeWidth);
    return 0;
}