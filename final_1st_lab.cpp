#include<iostream>
#include<cmath>
using namespace std;

class line{
    double x1,y1,x2,y2;
    public:
        void setvalues(double a , double b,double c, double d){
            x1=a;
            y1=b;
            x2=c;
            y2=d;
        }
        double length(){
            double length=sqrt(pow((x1+x2),2)+pow((y1+y2),2));
            return length;
        }

};

int main(){

    line line1;
    double x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    line1.setvalues(x1,y1,x2,y2);
    double distance=line1.length();

    return 0;
}