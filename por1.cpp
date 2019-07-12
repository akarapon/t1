#include <iostream>
using namespace std;
int main()
{
	int score;
	cout << "Enter your score ";
	cin >> score;
	if (score < 0)
		cout << "Eror";
	else if (score < 60)
		cout << "F";
	else if (score < 70)
		cout << "D";
	else if (score < 80)
		cout << "C";
	else if (score < 90)
		cout << "B";
	else if (score < 100)
		cout << "A";
	else
		cout << "Eror";


	return(0);
}