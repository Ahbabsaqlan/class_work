#include<iostream>
using namespace std;

void numberSeparation (int inputNum){
    int right_num,a[100];
    
    int i=0;
    while (inputNum!=0){
        right_num=inputNum%10;
        a[i]=right_num;
        inputNum=inputNum/10;
        i++;
    }
    for(int n=i-1;n>=0;n--){

        cout << a[n]<<" ";
    }
}

int main (){
    int inputNum;
    cin>>inputNum;
    numberSeparation (inputNum);
}