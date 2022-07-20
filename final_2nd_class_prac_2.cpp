#include<iostream>
using namespace std;

class rectangle {
    private:
        double length;
        double width;
        double area;
    public:
        double set_value(){
            cin>>length>>width;
            area=length*width;
            cout<<area<<endl;
            return area;
        }
        char max(double R1,double R2){
            char maxi;
            if(R1>R2){
                maxi='>';
            }else if(R1<R2){
                maxi='<';
            }else{
                maxi='=';
            }
            return maxi;
        }
};

int main(){

    rectangle r1;
    double R1=r1.set_value();
    rectangle r2;
    double R2=r2.set_value();
    char value=max(R1,R2);
    cout<<value;
    

    return 0;
}