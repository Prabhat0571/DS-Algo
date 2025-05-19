#include<iostream>
using namespace std;

int main(){
   
    int n;
     cout<<"enter the number of lines of the pattern"<<endl;
     cin>>n;
    for(int row=0; row<n; row++){

      for(int col=0; col<row+1; col=col+1){
        cout<<" * ";
      }
        cout<<endl;
        
       
        
    }



}