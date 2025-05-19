#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

// int fact(int num){
//     if(num==0 || num==1){
//         return 1;
//     }

//     int ans= num*fact(num-1);
//     return ans;
// } 

// void count(int num){
//     if(num==1){
//       return ;
//     }
//     cout<<num;
//      count(num-1);
// }

// int fibonacci(int num){
// if(num==0){
//     return 0;
// }
// if(num==1){
//     return 1;
// }
// int ans= fibonacci(num-1)+fibonacci(num-2);
// return ans;
// }


// void printArray(int arr[], int n, int index){
//     if(index>=n){
//         return;
//     }
//     cout<<arr[index]<<" ";

//     printArray(arr, n, index+1);
// }

// bool linearSearch(int arr[], int n, int index, int target){

//         if(index>=n){
//              return false;  //base case
//          }
//          if(arr[index]==target){
//             return true;//processing
//          }
//          linearSearch(arr,n,index+1,target); //recursive call

        
// }

// int minNumber(int arr[],int n, int index, int &mini){
//   if(index>=n){
//     return -1; //base case
//    }
//    mini=min(arr[index],mini);

//    int ans= minNumber(arr,n,index+1,mini);
//      return mini;
    
// }

void solve(int arr[], int n, int index, vector<int>&v ){
    if(index>=n){
        return ;
    }
    if(arr[index]%2==0){
        v.push_back(arr[index]);
    }
      solve(arr,n,index+1,v);
}

int main(){
  
    int arr[]={11,21,31 ,40,50};
    int n=5;
    int index=0;
    vector<int>v; 
    // int target=40;
    // int mini= INT_MAX;
    solve(arr,n, index, v);
  for(auto i: v){
    cout<<i<<" ";
  }
    // minNumber(arr,n,index,mini);
    // cout<<mini;
    // printArray(arr,n,index);

//    cout<< linearSearch(arr,n,index,target)<<endl;
    
//  cout<<   fibonacci(6);
    
//     count(6);
//     // cout<<fact(num);
//  return 0;




    
}