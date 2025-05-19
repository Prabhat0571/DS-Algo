#include<iostream>
using namespace std;

class Space{
    public: 
    int planets=7;
    int galaxies=2;
    string meteor="hello";

    // void NASA(){
    //     cout<<"hello Mars!"<<endl;
    // }
    Space(){
        cout<<"constructor called"<<endl;
    }

    // Space(int stars){
    //    cout<<"hello i am a star"<<endl;;
    // }

    Space(Space &mars){
        this->planets= mars.planets;
        this->galaxies=mars.galaxies;
        cout<<"hello i m copy constructor";

    }
};

int main(){
    Space Milkyway;
    Space bye=Milkyway; // method 1      
    Space hello(Milkyway); // method 2 //hello
//   Space andromeda=Milkyway;
  
     

}