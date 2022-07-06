#include<iostream>
using namespace std;

void oddEvencheck(int inputNum){
    if(inputNum>1 && inputNum%2==0 || inputNum==0){
        cout<<"This number is even";
    }
    else{
        cout<<"This number is odd";
    }
}

int main(){
    int inputNum;
    cin>>inputNum;
    oddEvencheck(inputNum);
}