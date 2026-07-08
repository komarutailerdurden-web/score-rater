//my own project!
//show work with ifelse-ifelse
#include <iostream>
using namespace std;

int main()
{
	int power;
	cout << "Enter your power: ";
	cin >> power;

	if (power >= 90) 
	{
		cout << "Your power is 90 or more! You have a greatful power.\n";
	}
	else if (power >= 70)
	{
		cout << "Your power is 70 or more! Not bad.\n"; 
	}
	else if (power >= 50)
	{
		cout << "Your power is 50 or more! I say its bad.\n"; 
	}
	else
	{
		cout << "Your power is less than 50! Trash tier.\n";
	}

	return 0;
}
