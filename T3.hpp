/***************************************************************************
* T3.hpp is the Tic-Tac-Toe game header file.
* Uses the STL for "You vs. The Computer" gameplay.
* Adapted and expanded from Beginning C++ Through Game Programming,
* Third Edition, Michael Dawson 2011
***************************************************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::fill;

// Function prototypes.
void instructions();
char askYesNo(string question);
int askNumber(string question, int high, int low = 0);
char humanPiece();
char opponent(char piece);
void displayBoard(const vector<char>& board);
char winner(const vector<char>& board);
bool isLegal(int move, const vector<char>& board);
int humanMove(const vector<char>& board, char human);
int computerMove(vector<char> board, char computer);
void announceWinner(char winner, char computer, char human);