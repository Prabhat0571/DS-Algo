#include<iostream>
using namespace std;

class Animal{
    private: 
    int weight;
    public:   
    int age;
    string name;

    void printname(){
        cout<<"India is a great country";
    }
    int getweight(){
        return weight;

    }
    int setweight(int w){
        weight=w;
        
    }
    Animal(){ //default constructor
        cout<<"object banaya toh m aaya";
    }
    
}; 

int main(){

    Animal dogesh;// creation of object
    // dogesh.age=12;
    // cout<<dogesh.age<<endl; // access of age property through object dogesh
    // dogesh.printname();
    // dogesh.setweight(101);
    // cout<<dogesh.getweight()<<endl;
    
}

