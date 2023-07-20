#include<iostream>
using namespace std;
void evenOddChecker(int inputArray[],int n){
    int countEven=0;
    int countOdd=0;
    for(int i=0;i<n;i++){
        if(inputArray[i]==1){
            countOdd++;
        }
        else if(inputArray[i]%2==0){
            countEven++;
        }
        else{
            countOdd++;
        }
    }
    int even[countEven],odd[countOdd];
    int oddNum=0;
    int evenNum=0;
    for(int i=0;i<n;i++){
        if(inputArray[i]==1){
            odd[oddNum++]=inputArray[i];
        }
        else if(inputArray[i]%2==0){
            even[evenNum++]=inputArray[i];
        }
        else{
            odd[oddNum++]=inputArray[i];
        }
    }
    cout<<"The Array you entered:";
    for(int i=0;i<n;i++){
        cout<<inputArray[i]<<" ";
    }
    cout<<endl;
    cout<<"The Array have total "<<countEven<<" even number"<<endl;
    cout<<"The Array have those even number:";
    for(int i=0;i<countEven;i++){
        cout<<even[i]<<" ";
    }
    cout<<endl;
    cout<<"The Array have total "<<countOdd<<" odd number"<<endl;
    cout<<"The Array have those odd number:";
    for(int i=0;i<countOdd;i++){
        cout<<odd[i]<<" ";
    }   
}

int main(){
    int num;
    cout<<"Enter your Array number:";
    cin>>num;
    int inputArray[num];
    
    for(int i=0;i<num;i++){
        cout<<"Enter your Array's "<<i+1<<" number value:";
        cin>>inputArray[i];
    }
    evenOddChecker(inputArray,num);
    return 0;
}