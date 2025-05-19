#include<iostream>
using namespace std;

int main(){
    int arr[]={0,1,1,0,1,0,1,1,1,0};
    int size=10;
    int num_zero=0;
    int num_one=0;

    for(int i=0; i<size; i++){
        if(arr[i]==0){
            num_zero++;
        }
        if(arr[i]==1){
            num_one++; 
        }
    }

    cout<<"number of zeroes in array: "<<num_zero<<endl;
   cout<<"number of ones in array: "<<num_one<<endl;; 
    
}