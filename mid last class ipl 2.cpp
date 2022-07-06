#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char a[]="AIUB";
    char b[]="university";
    cout<<strcmp(a,b)<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    strcat(a,b);
    cout<<a<<endl;
    cout<<b<<endl;
    strncpy(a,b,4);
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<strcmp(a,b)<<endl;
    cout<<strlen(b)<<endl;
}