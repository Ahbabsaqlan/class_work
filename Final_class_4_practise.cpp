#include<iostream>
using namespace std;
class b_11{
    private:
        int a,b;
    public:
        b_11(int c,int d){    //constructor
            a=c;
            b=d;
        }
        int get_a(){
            return a;
        }
        int get_b(){
            return b;
        }
       ~b_11(){               //destructor
        cout<<"destructor"<<endl;   
       }
};

int main(){
    
    b_11 section(5,6);
    int a=section.get_a();
    int b=section.get_b();


 return 0;
}

