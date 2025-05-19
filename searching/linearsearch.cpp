#include<iostream>
using namespace std;
bool find(int arr[],int size, int key){
    //linear search
    for(int i=0; i<size; i++){
        if(arr[i]==key){
        return true;
        }
    }
    
        return false;  
};
int main(){
    int arr[6]={4,7,3,6,2,16};
    int size=6;

    cout<<"enter the key to find: "<<endl;  
    int key;
    cin>>key;

    if(find(arr,size,key)){
        cout<<"key match successful"<<endl;
    }
    else{
        cout<<"match not found"<<endl;
    }


}