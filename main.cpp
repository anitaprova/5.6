#include <iostream>
#include <string>

using namespace std;

string middle(string str) {
	int size = str.size();
	
	if (size % 2 == 0) { //even
		cout << str.substr((int)(size-1)/2, 2) << endl;	
	}
	else {
		cout << str.substr((size-1)/2, 1) << endl;
	}
	return "";
}

int main() {
	string s;
	cin >> s;
	
	middle(s);

	return 0;
}
