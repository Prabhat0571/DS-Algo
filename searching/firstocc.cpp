#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int firstOcc(int arr[], int target, int n) {
  int start=0;
  int end= n-1;
  int mid= (start+end)/2;
  int Answer =-1;
  int Ans=-1;
  
  while(start<=end){
    if(arr[mid]==target){
      Answer=mid;
      end=mid-1;
      
    }
    else if(target>arr[mid]){
      start=mid+1;
  }
  else if(target<arr[mid]){
      end= mid-1;
  }
    mid=(start+end)/2;
    
  }
  return Answer;

  
  
}



int main() {
  int arr[]={10,20,20,30,30,40,50};
  int n=8;
  int target=20;

  int ans = firstOcc(arr, target, n);
  cout << "ans is "<< ans << endl;

  
}