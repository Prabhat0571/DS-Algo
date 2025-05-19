#include<iostream>
using namespace std;
class Vehicle{
    private:
    int weight;
    
    public: int getWeight(){
        return weight;
    }
    void setWeight(int w){
        weight=w;
    }

};

int main(){
    Vehicle car;
    car.setWeight(101);
    cout<<"the real weight is: "<<car.getWeight()<<endl;
}