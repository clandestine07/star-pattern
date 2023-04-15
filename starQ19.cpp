#include <iostream>
using namespace std;

void star()
{
    int k = 0;
    for (int i = 1; i <= 9; i++)
    {
        i <=5 ? k++ : k--;
        for (int j = 1; j <= 9; j++)
        {
            if (j <= 6 - k || j >= 4 + k)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout<<endl;
    }


 //   for(int i=1 ; i<=5 ;i++){

//         for (int j = 1; j <= 9; j++)
//         {
//             if (j <= i || j >= 10 - i)
//             {
//                 cout << "*";
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
}

int main()
{
    star();
    return 0;
}