#include<iostream>
#include<cstring>
using namespace std;
void stringrev(char arr[]){
    int i=0;
    int n=strlen(arr);
    int j=n-1;

    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    
    
}

int main(){
  
    char arr[100];
    cout<<"enter the string that you want to reverse: ";
    cin.getline(arr,50);
    stringrev(arr);
    cout<<"reversed string is: "<<arr;
    

}