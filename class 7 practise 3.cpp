#include<iostream>
using namespace std;

int main (){

    int a[100] ,evensum=0,oddsum=0;
    for(int i=0;i<5;i++){
        cout << "Enter your value : ";
        cin>> a[i];
    }
    for(int i=0;i<5;i++){
        if(a[i]%2==0){
            cout << i+1 << "th is even"<<endl;
            evensum=evensum+a[i];
        }else{
            cout << i+1 << "th is odd"<<endl;
            oddsum=oddsum+a[i];
        }
    }
    cout << "your even value is : "<<evensum<<endl;
    cout << "your odd value is : "<<oddsum<<endl;



    return 0;
}
