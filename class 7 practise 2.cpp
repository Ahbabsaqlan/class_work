#include<iostream>
using namespace std;

int main (){

    int a[100] ,sum=0;
    for(int i=0;i<5;i++){
        cout << "Enter your value : ";
        cin>> a[i];
        sum= sum+a[i];
    }
    cout<< "Your total value is : "<< sum;


return 0;
}
