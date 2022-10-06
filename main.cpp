/*
 * Author: Anita Prova
 * Course: CSCI-135
 * Instructor: Genady Maryash
 * Assignment: Homework E5.6
 * The program prints the middle of a string.
 * 
 */

#include <iostream>
#include <string>

using namespace std;

string middle(string str) {
	int size = str.size();
	
	string middle_str;	
	if (size % 2 == 0) { //even
		middle_str = str.substr((int)(size-1)/2, 2);
		//cout << middle_str;	
	}
	else {
		middle_str = str.substr((size-1)/2, 1);
		//cout << middle_str;
	}
	return middle_str;
}

int main() {
	string s;
	cin >> s;
	
	middle(s);

	return 0;
}
