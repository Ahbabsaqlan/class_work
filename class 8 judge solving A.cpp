#include<iostream>
using namespace std;

int main (){

       int num;
       cin>>num;
       int right_num,sum=0;
       if(num<0){
        num=-num;
       }
    while (num>0){
        right_num=num%10;
        sum=sum+right_num;
        num=num/10;
    }
    cout<<sum;


return 0;
}
