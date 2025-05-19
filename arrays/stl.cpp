#include<iostream>
#include<vector>
using namespace std;



int main(){
//     vector<int>v;  //vector declaration
//     v.push_back(1); //inserts a element in the dynamic arr... vector doubles it's size everytime it sees more element insertion

//     for(int i=0; i<v.size();i++){   // printing a vector
//         cout<<v[i];
//     }
//     v.push_back(231454);
//     for(int i=0; i<v.size();i++){   // printing a vector
//         cout<<v[i];
//     }

//     int temp= v.capacity();
//     cout<<temp;
//    v.pop_back(); // removes one element from the end of the array   


   //taking input in a vector

 
int n;
cin>>n;
   vector<int>arr(n);
   for(int i=0; i<arr.size();i++ ){
    cin>>arr[i];
   }

   for(int i=0; i<arr.size();i++){   
   cout<<arr[i]<<endl;


}}