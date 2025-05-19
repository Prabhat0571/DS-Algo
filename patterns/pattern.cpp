//solid rectangle
#include<iostream>
using namespace std;
int main(){
    for(int row=0; row<3; row++)      //outer loop is for row
    { 
                                       
        for(int col=0; col<5; col++) //inner loop is for col
        {
             cout<<" *";
        }
      cout<<endl;
    }
}