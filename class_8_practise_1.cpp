#include<iostream>
using namespace std;

class person{
    public:
        static int count;
        person(){
            count++;
            cout<<"Creating person "<<count<<endl;
        }
        ~person(){
            cout<<"destructing person "<<count<<endl;
            count--;
        }
};
    int person::count=0;
class student :public person{
    public:
    student(){
        cout<<"creating student "<<count<<endl;
    }
    ~student(){
        cout<<"destructing student "<<count<<endl;
    }
};
int main(){

    student s1;
    {
        student s2;
        student s3;
    }
    student s4;

    return 0;
}