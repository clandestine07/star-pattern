#include<iostream>
using namespace std;

void star(){
    for(int i=1 ; i<=4 ; i++){
        for(char j='E'-i ; j<='E' ; j++){
           cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main(){

    star();
    
    return 0;
}