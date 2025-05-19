#include<iostream>
using namespace std;

class animal{
public:
int age;
string name;
void eat(){
    cout<<" eating";
}
};
  
class dog: private animal{
    public:
    void print(){
        cout<<this->age;
    }
    dog(){
        cout<<"agya mai"<<endl;   
     }
};

int main(){
dog d1;
animal a1;
d1.print();

}