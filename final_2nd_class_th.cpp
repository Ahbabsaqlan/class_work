#include<iostream>
using namespace std;

class student {
    public:
        string name;
        string id;
        string section;
        string sesson;
        string department;
        string B_group;
        string DOB;
};

int main(){

    student s1;
    s1.name="Ahbab";
    s1.id="22-48108-2";
    s1.section="B11";
    s1.sesson="2021/22";
    s1.department="CS";
    s1.B_group="B+";
    s1.DOB="31/01/2000";

    return 0;
}