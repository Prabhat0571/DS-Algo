#include<iostream>
#include<algorithm>
using namespace std;

void shiftNegative(int arr[], int size){
    int s=0;
    int e=size-1;

    while(s<e){
    if(arr[s]<0){
        s++;
    }
    else if(arr[e]>0){
        e--;

    }
    else{
        swap(arr[s],arr[e]);
    }
    }

}

int main(){

int arr[]={1,2,-3,4,-5,6};
int size=6;

shiftNegative(arr,size);

for(int i=0; i<size; i++){
    cout<<arr[i]<<" ";
}





}