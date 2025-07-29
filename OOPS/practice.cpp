#include<iostream>
using namespace std; 

class Animal{
private:
int weight;

public:
int age;
string name;

Animal(){
    cout<<"mai hu constructor"<<endl;
}

void eat(){  // these are behaviours(methods of the objects)
cout<<"eating";
}

void sleep(int phone){
cout<<"sleeping on number, "<<phone;
}

int getWeight(){
 cout<<"the weight is: "<<weight;
}

int setWeight(int w){
    weight= w;
}

};

class janwar: public Animal{


};


int main(){
//  cout<<sizeof(Animal);
//     Animal dog; 
//     // dog.name="aryan";
//     // cout<<dog.name<<endl;;
   
//     // dog.eat();
//     // dog.sleep(94211);           
//     dog.setWeight(100);
//     dog.getWeight();

//   //dynamic memory
//    Animal* billota = new Animal; //billota address store karega and *billota would be object
//    (*billota).age= 12;
//    (*billota).name= "prabhat";

//    cout<<billota->age; //other method to access
 Animal dog;

 janwar bhalu;

 bhalu.eat();

}  