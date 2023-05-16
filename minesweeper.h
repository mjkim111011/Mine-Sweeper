#include <string>
#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

void minesweeper(string commands, string output);

void _load_(string str);

bool _touch_(int x, int y);

void _display_();