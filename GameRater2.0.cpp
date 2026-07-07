// game rater 2.0
// show work with else
#include <iostream>

using namespace std;

int main()
{
    int score;
    cout << "Enter your score: ";
    cin >> score;

    if (score >= 100)
    {
        
        cout << "You scored 100 or more! Impressive!\n";
    }
    else
    {
        
        cout << "You scored less than 100.\n";
    }

    return 0;
}
