#include<iostream>
using namespace std;

int main(){
    int n;
    int cnt=0;
    cout<<"enter the number : ";
    cin>>n;
while(n>0){
    
    n=n/10;
    cnt=cnt+1;
}
cout<<"the number of digits are : "<<cnt<<endl;
}


