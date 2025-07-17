#include<iostream>
using namespace std; 

int binarySearch(int arr[], int n, int target) {
  int start = 0;
  int end = n-1;
  //there is some flaw in below line, HW ?
  int mid = start+(end-start)/2;
  while(start <= end) {
    ///found
    if(arr[mid] == target) {
      //return index of the found element
      return mid;
    }
    else if(target > arr[mid]) {
      //right me jao
      start = mid + 1;
    }
    else if(target < arr[mid]) {
      //left me jao 
      end = mid - 1;
    }
    //mid update
    mid = start+(end-start)/2;
  }
  //agar yaha tk pohohche ho
  //iska matlab element nahi mila tumhe
  return -1;
}

int main(){

    int arr[]={10,20,30,40,50,60,70,80,90};
    int target = 70;
    int n=9;

    int ansIndex= binarySearch(arr, n , target);
        cout<<"the answer is: "<<ansIndex<<endl;
    
}