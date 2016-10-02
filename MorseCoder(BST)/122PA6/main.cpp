/*******************************************************************************************
* Programmer: Stefon  Martin                                                                    *
* Class: CptS 122, Spring  2016; Lab Section 15                                           *
* Programming Assignment: PA6                                                     *
* Date: March 23, 2016                                                                          *
* Description: This program converts txt from a file into morse code*
*******************************************************************************************/



#include "Bst.h";
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::fstream;

int main(void) {

	char c = '\0';
	fstream Convert;
	Convert.open("Convert.txt");
	Bst Tree;
	Tree.print();
	cout << endl << endl;
	while (!Convert.eof()) {
		Convert >> c;

		Tree.search(c);
		
		
	}
	
	cout << endl;

	if (Convert.is_open()) {
		Convert.close();
	}
}