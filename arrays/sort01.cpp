#include<iostream>
using namespace std;
void zeroOne(int arr[],int size){

    int zerocount=0;
    int onecount=0;

    for (int i=0; i<size; i++){    //STEP1 is to count the number of zeroes and one
        if(arr[i]==0){
            zerocount++;
        }
        if(arr[i]==1){
            onecount++; 
        }
    }
    int index=0;
    while(zerocount--){
        //zerocount-- mtlb h utne times hi loop chlega
        arr[index]=0;
        index++;

    }
    while(onecount--){
        arr[index]=1;
        index++;
    }
}
int main(){

    int arr[]={0,1,0,1,1,0,1,0,0,1,1,0,0,0,1,1,1,0,0};
    int size=19;
    zeroOne(arr,size);                          
    for(int i=0; i<size; i++){
    cout<<arr[i]<<",";
  }
   
   
}