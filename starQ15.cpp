#include<iostream>
using namespace std;

void star(){

    for(int i=1 ; i<=5 ; i++){
        char c= 'A';
        for(int j=1 ; j<=6-i ; j++){
            cout<<c<<" ";
            c++;
        }
        cout<<endl;
    }
}

int main(){
    
    star();
    return 0;
}