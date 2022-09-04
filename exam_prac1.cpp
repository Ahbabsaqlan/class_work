#include <iostream>
using namespace std;
class Complex{
public:
    int real;
    int imaginary;
public:
    Complex(int r=0, int i=0){
        real=r;
        imaginary=i;
    }
    Complex operator +(Complex obj){
        Complex result;
        result.real=real + obj.real;
        result.imaginary= imaginary+ obj.imaginary;
        return result;
    }
    Complex operator -(Complex obj){
        Complex result;
        result.real=real - obj.real;
        result.imaginary= imaginary - obj.imaginary;
        return result;
    }
};
int main(){
  Complex c1(5,10);
  Complex c2(15,20);
  Complex c3(5,10);
  c3 =c1+c2+c3;
  cout << c3.real << endl;
  cout << c3.imaginary<< endl;
  c3=c1-c2;
    cout << c3.real << endl;
    cout << c3.imaginary;

 

}