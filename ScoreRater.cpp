//score rater
//show work with if
#include <iostream>
using namespace std;

int main()
{
    if (true)
    {
        cout << "This is always displayed.\n\n";
    }

    if (false)
    {
        cout << "This is never displayed. \n\n";
    }

    int score = 5000; 

    if (score)
    {
        cout << "At least you didnt score zero .\n\n";
    }

    if (score >= 2500)
    {
        cout << "You score more 250 or more! Decent.\n\n "; 
    }

    if (score >= 3500)
    {
        cout << "Wow, you scored 3500 or more! Amazing.\n\n"; 
    }

    if (score >= 5000)
    {
        cout << "You score 5000 or more! Impressive.\n";
    }

    return 0; 
}