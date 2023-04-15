#include <iostream>
using namespace std;

void star()
{

    for (int i = 1; i <= 9; i++)
    {
        if (i < 6)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "*";
            }
        }

        else

            for (int j = 1; j <= 10 - i; j++)
            {
                cout << "*";
            }
        cout << endl;

    }
  
}

    int main(){
        star();
        return 0 ;
    }