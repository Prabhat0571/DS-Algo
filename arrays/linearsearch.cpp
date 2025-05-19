#include<iostream>
using namespace std;
bool linearSearch(int arr[],int target,int size){
    for(int i=0; i<size; i++){
        if(arr[i]==target){
            return true;
        }
   
}
return false;
}

int main(){
    int arr[5]={1,23,76,8,56};
       int size=5;
       int target=8;
 
     bool answer= linearSearch(arr,target,size);//sequence of fn. call parameters should be same as function definition

     cout<<answer;
    //    for(int i=0; i<size; i++){
    //     if(arr[i]==target){
    //     cout<<"target found at: "<<i<<endl;
    //         break;
    //     }
    //    }

        
}