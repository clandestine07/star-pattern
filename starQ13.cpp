#include <iostream>
using namespace std;

void star()
{
    int number = 1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << number << " ";
            number++;
        }
        cout << endl;
    }
}

int main()
{
    star();

    return 0;
}