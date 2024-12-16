#include <iostream>
#include <fstream> 
#include <string>

using namespace std;

struct {
	string name;
	string choice;
	float grade;
	char letter;
};

void readAnswrKey(a)

int main() {
	
	ofstream answerKey("settings.txt");

	if (answerKey.is_open()) {
		answerKey << 4 << endl;
		answerKey << 'A' << 'A' << 'C' << 'D' << endl;
		answerKey.close();
		cout << "Saved Successfully" << endl;
	}
	else {
		cout << "unable to open the file" << endl;
	}

	return 0; 
}