#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int target, int s , int e){
  
    int mid= s+(e-s)/2;
    if(s>e){
        return -1; //basecase
    }
    if(arr[mid]==target){
        return mid;
    }
    if(arr[mid]>target){
         return binarySearch(arr,n,target,s, mid-1);
    }
    else{
        return binarySearch(arr,n,target,mid+1,e);
    }

    
}

int main(){

    int arr[]={10,20,30,40,50,60};
    int n=6;
    int s=0;
    int e=n-1;
    int target= 50;
   
   cout<<"the ans is: "<< binarySearch(arr,n,target,s,e);
    
}