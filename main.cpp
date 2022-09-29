#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	cin >> str;
	
	int size = str.size();
	if (size % 2 == 0) { //even
		cout << str.substr((int)(size-1)/2, 2) << endl;	
	}
	else {
		cout << str.substr((size-1)/2, 1) << endl;
	}

	return 0;
}
