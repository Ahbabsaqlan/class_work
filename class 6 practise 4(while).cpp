#include<iostream>
using namespace std;
int main()
{
    long long int n;
    long long int right_num,a[1000];
    cin>>n;

    if(n>0){
        int i=0;
        while(n>0)
        {
            right_num=n%10;
            a[i]=right_num;
            n=n/10;
            i++;
        }
        for(int m=0;m<i;m++)
        {
            cout<<a[m];
        }
        
    }
    else{
        cout<<"0";
    }

    
    return 0;
}