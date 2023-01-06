#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    int num;
    string grade;
    srand(time(0));
    num = rand() % 9 + 1;
    if (num == 1)
        grade = "A";
    else if (num == 2)
        grade = "B+";
    else if (num == 3)
        grade = "B";
    else if (num == 4)
        grade = "C+";
    else if (num == 5)
        grade = "C";
    else if (num == 6)
        grade = "D+";
    else if (num == 7)
        grade = "D";
    else if (num == 8)
        grade = "F";
    else
        grade = "W";
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    cout << "You will get "<< grade <<" in this 261102.";

    return 0;
}