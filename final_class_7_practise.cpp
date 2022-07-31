#include<iostream>
using namespace std;
class building{
    int per_sqr_cost;
    int total_sqr_feet;
    public:
    building(int cost,int total_feet){
        per_sqr_cost=cost;
        total_sqr_feet=total_feet;
    }
    int building_cost(){
        int total_cost=per_sqr_cost*total_sqr_feet;
        return total_cost;
    }
};

int main(){
    double l,w;
    cin>>l>>w;
    building b1(l,w);
    int cost=b1.building_cost();
    cout<<cost;
    


 return 0;
}