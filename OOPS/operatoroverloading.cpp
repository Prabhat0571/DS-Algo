#include<iostream>
using namespace std;

class Operator{
  public: 
  int value;
  
    void operator+ (Operator &num2){
        int value1= this->value;
        int value2= num2.value;
        cout<< value2-value1;
        
    }
};


int main(){
Operator num1, num2;
num1.value=7;
num2.value=2;

num1+num2;

}