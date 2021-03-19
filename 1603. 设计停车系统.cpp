#include<bits/stdc++.h>
using namespace std;

class ParkingSystem{
public:
    int b, m, s;
    ParkingSystem(int big, int medium, int small): b(big), m(medium), s(small) {}
    
    bool addCar(int carType){
        if(carType==1){
            if(b>0){
                b--;
                return true; 
            }
        }
        else if(carType==2){
            if(m>0){
                m--;
                return true;
            }
        }
        else if(carType==3){
            if(s>0){
                s--;
                return true;
            }
        }
        return false;
    }
};

int main(){
    int big, medium, small;
    scanf("%d %d %d", &big, &medium, &small);
    ParkingSystem *obj=new ParkingSystem(big, medium, small);
    bool param_1=obj->addCar(1); 
    bool param_2=obj->addCar(2);
    bool param_3=obj->addCar(1);
    cout<<param_1<<" "<<param_2<<" "<<param_3<<endl;
    return 0;
}