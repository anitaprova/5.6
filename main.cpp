#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	cin >> str;
	
	int size = str.size() - 1;
	if (size % 2 == 0) {
		cout << str.substr(size/2, size/2 - 1) << endl;	
	}
	else {
		cout << str.substr( (int)size/2, (int)size/2) << endl;
	}

	return 0;
}
