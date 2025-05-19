#include<iostream>
using namespace std;
//PRINT ALL PAIRS OF THE GIVEN ARRAY
int main(){
int arr[3]={10,20,30};
int size=3;
int target=50;

// for(int i=0; i<size; i++){
//   for(int j=0; j<size; j++){
//         if(arr[i]+arr[j]==target){
//           cout<<"pair found at "<<arr[i]<<" , "<<arr[j]<<endl;
//         }  }
//   }
for(auto i :arr){
  cout<<i<<" ";
}
    
}

