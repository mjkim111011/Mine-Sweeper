#include "minesweeper.h"

void minesweeper(string commands, string output) {
	ofstream fout;
	fout.open(output);

	int char ary = [8][8];












}




void _load_(string str) {

	ifstream fin;
	fin.open(str);

	if (!fin.is_open())	{
		cout << "파일을 열 수가 없습니다!" << endl;
		exit(1);
	}

	else {
		getline(fin, str);
		cout << str << endl;
		fin.close();
	}




//1 based
bool _touch_(int x, int y) {
	
	bool check = true;

	while (x <= 8 && y <= 8) {
		if ()
	}

	return check;
}




void _display_(ifstream fin) {
	
	cout << "Command: load " << fin << endl;

	while (!game_over) {
		cout << "Command: touch " << x << " " << y << endl;
	}
	
	cout << "Game Over" << endl << "~~~~~~~~~" << endl << "Final Board" << endl;
	cout << ;
}




int main() {
	cout << "Testing minesweeper" << endl;
	minesweeper(".\\test1commands.txt", "test1_output_mine.txt");
	minesweeper(".\\test2commands.txt", "test2_output_mine.txt");
	minesweeper(".\\test3commands.txt", "test3_output_mine.txt");
	minesweeper(".\\test4commands.txt", "test4_output_mine.txt");
	minesweeper(".\\test5commands.txt", "test5_output_mine.txt");
	minesweeper(".\\test6commands.txt", "test6_output_mine.txt");
	minesweeper(".\\test7commands.txt", "test7_output_mine.txt");
	minesweeper(".\\test8commands.txt", "test8_output_mine.txt");
	minesweeper(".\\test9commands.txt", "test9_output_mine.txt");
	minesweeper(".\\test10commands.txt", "test10_output_mine.txt");

	return 0;
}
