#include<iostream>
using namespace std;

int main(){

       long long int num;
       int right_num,a[100];
       cin>>num;
       int i=0;
    while (num>0){
        right_num=num%10;
        a[i]=right_num;
        num=num/10;
        i++;
    }
    for(int n=i-1;n>=0;n--){

        cout << a[n]<<" ";
    }

    return 0;
}
