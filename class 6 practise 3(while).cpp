#include<iostream>
using namespace std;

int main(){

       int num,right_num;
       cin>>num;
    do{
        right_num=num%10;
        cout<< right_num;
        num=num/10;
    }
    while (num>0);

return 0;
}
