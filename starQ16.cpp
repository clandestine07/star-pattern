#include<iostream>
using namespace std;

void star(){
    char c= 'A';
    for(int i=1 ; i<=5 ; i++){

        for(int j=1 ; j<=i ; j++){
            cout<<c<<" ";
        }
        cout<<endl;
        c++;
    }
}

int main(){
    
    star();
    return 0;
}