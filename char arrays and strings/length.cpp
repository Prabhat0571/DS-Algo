#include<iostream>
using namespace std;

int getlength(char arr[]){
    int i=0;
    int length=0;
    
    while(arr[i]!='\0'){
       i++;
       length++;
       
    }
    return length;
}

void revstring(char arr[]){
    int i=0;
    int n=getlength(arr);
    int j=n-1;

    while(i<=j){
        swap(arr[i],arr[j]);
            i++;
            j--;
        
    }
}

int main(){
    char arr[100];
    cout<<"enter the data: "<<endl;
    cin.getline(arr,100);
    int ans= getlength(arr);
    cout<<"the length is: "<<ans<<endl;
  revstring(arr);
  cout<<"the reversed string is: "<<arr<<endl;;
}