#include <iostream>
using namespace std;

void star()
{
    int k = 0;
    for (int i = 1; i <= 9; i++)
    {
        i <= 5 ? k++ : k--;
        for (int j = 1; j <= 9; j++)
        {
            if (j <= k || j >= 10 - k)
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    star();
    return 0;
}