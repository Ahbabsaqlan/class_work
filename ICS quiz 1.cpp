#include<iostream>
using namespace std;

int main(){

    int last_month_bill,present_monnth_bill;
    cout << "Enter your last month's bill: ";
    cin>>last_month_bill;
    cout << "Enter your present month's bill: ";
    cin>>present_monnth_bill;

    if(last_month_bill>10000){
        if(present_monnth_bill>=last_month_bill+15000){
            cout <<"you got a vaucher";
        }else{
            cout <<"you donot fullfil the condition";
        }
    }else{
        cout <<"you donot fullfil the condition";
    }

    return 0;
}





