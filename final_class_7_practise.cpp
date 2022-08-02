#include<iostream>
using namespace std;
class building{
    int per_sqr_cost,total_sqr_feet;
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
class residence : public building{
    int cost_per_elec_eqpmnt,number_eqpmnt;
    public:
    residence(int cost_per,int num_eqpmnt,int b,int c):building(b,c){
        cost_per_elec_eqpmnt=cost_per;
        num_eqpmnt=num_eqpmnt;
    }
    int total_cost(){
        int total_cost=cost_per_elec_eqpmnt*number_eqpmnt;
        return total_cost;
    }
};
class dormitory :protected residence{
    protected:
    int num_residence;
    public:
    dormitory(int x,int p,int q,int r,int s):residence(p,q,r,s){
        num_residence=x;
    }
};

int main(){
    
    dormitory D(5000,5,10,15,20);
    
 return 0;
}