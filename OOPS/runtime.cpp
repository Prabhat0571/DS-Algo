#include <iostream>
using namespace std;

class Animal
{
public:
   virtual void speak()
    {
        cout << "speaking";
    }
};

class Dog: public Animal{

void speak(){

    cout<<"barking";
}

};


int main(){

//dynamic object creation
//UPCASTING
Animal *a= new Dog; //normally hamesha parent ka method call hoga unless we have used virtual keyword
a->speak();



    
}