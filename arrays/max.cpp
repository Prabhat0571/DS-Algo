 #include<iostream>
#include<limits.h>
using namespace std;

int Minnumber(int arr[],int size){
    int minans=INT_MAX;
    for(int i=0; i<size; i++){
         if(arr[i]<minans){
                minans=arr[i];
         }
    }
     return minans;

}

int main(){
    int arr[]={10,8,31,4,3,1,41};
    int size=7;

    cout<<Minnumber(arr,size);  


}