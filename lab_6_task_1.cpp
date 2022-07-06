#include<iostream>
using namespace std;

void sum (int a,int b){
    int sum=a+b;
    cout<<"Your Summation is "<<sum<<endl;
}
void mul (int a,int b){
    int mul=a*b;
    cout<<"Your Multiplication is "<<mul<<endl;
}
void sub (int a,int b){
    int sub=a-b;
    cout<<"Your Subtraction is "<<sub<<endl;
}
void div_ (int a,int b){
    int div_=a/b;
    cout<<"Your Divition is "<<div_<<endl;
}

int main(){
    int a,b;
    cin>>a>>b;
    sum(a,b);
    sub(a,b);
    mul(a,b);
    div_(a,b);

    return 0;
}