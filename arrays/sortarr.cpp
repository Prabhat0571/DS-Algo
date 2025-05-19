#include<iostream>
using namespace std;

void shiftarr(int arr[], int size){
    int j=0;  //j wo memory location hai jaha pr negative number store hoga


    for(int i=0; i<size; i++){
        if(arr[i]<0){
            swap(arr[i],arr[j]);
            j++;  // i ko isliye nahi badhaya kyuki loop m badh jaega
        }

    }


}

int main(){

    int arr[7]={23,-7,12,-10,-11,40,60};
    int size=7;

    shiftarr(arr,size);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
      
}