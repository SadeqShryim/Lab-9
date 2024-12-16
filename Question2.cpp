#include <iostream>
#include <vector>

using namespace std;

const int SIZE = 17;

int SumOfThird(vector<int> values) {
	int sum = 0;

	for (int i = 0; i < SIZE; i += 3) {
		sum += values[i];
	}
	return sum;
}

double AvgNegative(vector<int> values) {
	double avg = 0, negNumber = 0;
	int v = 0;

	for (int i = 0; i < SIZE; i++) {
		if (values[i] < 0) {
			negNumber += values[i];
			++v;
		}
	}

	avg = negNumber / v;
	return avg;
}

int HighestValue(vector<int> values) {
	int high = values[0];
	for (int i = 1; i < SIZE; i++) {
		if (values[i] > high) {
			high = values[i];
		}
	}
	return high;

}

int LowestValue(vector<int> values) {
	int low = values[0];

	for (int i = 1; i < SIZE; i++) {
		if (values[i] < low) {
			low = values[i];
		}
	}
	return low;
}

int main()
{
	vector <int> values{ 0, 23, 34, -7, 110, 42, 350, -424, 25, 10, 05, 50, -5,
	1, 200, -350, 99 };
	// your code goes here
	double negAvg = AvgNegative(values);
	int sum = SumOfThird(values);
	int lowest = LowestValue(values);
	int highest = HighestValue(values);

	//1.1
	cout << "The sum of every third number is " << sum << endl << endl;

	//1.2
	cout << "The average of all the negative numbers is " << negAvg << endl << endl;

	//1.3
	cout << "The lowest value is " << lowest << endl << endl;

	//1.4
	cout << "The lowest value is " << highest << endl << endl;
	return 0;
}