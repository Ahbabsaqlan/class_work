#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int min_=a[0],max=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>min_){
            min_=a[i];
        }
        if(a[i]<max){
            max=a[i];
        }
    }
    cout<<"MAX:"<<min_<<endl;
    cout<<"MIN:"<<max<<endl;
    if(min_%2==0){
        cout<<"max is even"<<endl;
    }else{
        cout<<"max is odd"<<endl;
    }
    if(max%2==0){
        cout<<"min is even"<<endl;
    }else{
        cout<<"min is odd"<<endl;
    }
    return 0;
}