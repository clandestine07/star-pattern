#include<iostream>
using namespace std;

void star(){

    int stars;
    for(int i=1 ; i<=5 ; i++){
        stars = 1;
        if(i%2==0) stars = 0;
        for(int j=1 ; j<=i ; j++){
            cout<<stars;
            stars = 1-stars;
        }
        cout<<endl;
    }
}

int main(){
    star();
    return 0;
}