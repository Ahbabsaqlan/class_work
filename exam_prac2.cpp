#include <iostream>
using namespace std;
class Person{
    public:
    static int count;
     Person(){
        count++;
        cout<< "Creating Person: "<< count << endl;}
     ~Person(){
        cout<< "Destructing Person: "<< count << endl;
        count--;
        }
};
int Person::count=0;
class  Student: public Person{
    public:
    Student(){
        cout<< "Creating Student: "<< count << endl;}
     ~Student(){
        cout<< "Destructing Student: "<< count<< endl;}
};
int main()
{
    Student s1;
    {
        Student s2;
        Student s3;
    }
}