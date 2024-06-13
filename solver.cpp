#include <iostream>
#include <vector>
#include <windows.h>
#include <list>
#include "mazes.cpp"
using namespace::std;


// Function to display the maze
void displayMaze(char** maze, int height, int width) {
    std::cout << "\033[2J\033[1;1H";
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            cout << maze[i][j] << ' ';
        }
        cout << std::endl;
    }
}

// Finds the starting postion of the maze this allows us to start moving down the maze this is down in O(n)
std::pair<int, int> findStartPosition(char** maze, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (maze[i][j] == 'S') {
                return std::make_pair(i, j);
            }
        }
    }
    return std::make_pair(-1, -1); // Return an invalid position if 'S' is not found
}

// solver the maze using dfs
bool dfsSolve(char** maze,int mazeHeight, int mazeWidth, pair<int,int> pos){
    pair<int, int> move;
    bool solved;
    
    displayMaze(maze, mazeHeight, mazeWidth);
    Sleep(500);

    if (maze[pos.first][pos.second] == 'E'){
        return true;
    }

    maze[pos.first][pos.second] = '*';

    if (maze[pos.first + 1][pos.second] == ' ' or maze[pos.first + 1][pos.second] == 'E'){
        move = make_pair(pos.first + 1, pos.second);
        if (dfsSolve(maze, mazeHeight, mazeWidth, move)){
            return true;
        }
    }

    if (maze[pos.first][pos.second + 1] == ' ' or maze[pos.first][pos.second + 1] == 'E'){
        move = make_pair(pos.first, pos.second + 1);
        if (dfsSolve(maze, mazeHeight, mazeWidth, move)){
            return true;
        }
    }

    if (maze[pos.first - 1][pos.second] == ' ' or maze[pos.first - 1][pos.second] == 'E'){
        move = make_pair(pos.first - 1, pos.second);
        if (dfsSolve(maze, mazeHeight, mazeWidth, move)){
            return true;
        }
    }

    if (maze[pos.first][pos.second -1] == ' ' or maze[pos.first][pos.second - 1] == 'E'){
        move = make_pair(pos.first, pos.second - 1);
        if (dfsSolve(maze, mazeHeight, mazeWidth, move)){
            return true;
        }
    }

    maze[pos.first][pos.second] = '!';
    return false;
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
    dfsSolve(maze, mazeHeight, mazeWidth, findStartPosition(maze, mazeHeight, mazeWidth));
    std::cout << "The maze was solved yea";
    return 0;
}