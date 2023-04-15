#include<iostream>
using namespace std;

void star(){
    for(int i=1 ; i<=4 ; i++){
        char c = 'A';
        for(int j=1 ; j<=7 ; j++){
            if(j >= 5-i && j <= 3+i){
                cout<<c;
                j<4?c++:c--;
            }
            else
                cout<<" ";
        }
        cout<<endl;
    }
}

int main(){

    star();
    
    return 0;
}