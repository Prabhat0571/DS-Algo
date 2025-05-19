#include<iostream>
using namespace std;

int findmax(int a, int b, int c){

if(a>b && a>c){
    cout<<"a is greater";
  return a;
}
else if(b>c && b>a){
    cout<<"b is greater";
    return b;
}
else{
    cout<<" c is greater"<<endl;
    return c;
}
}


int main(){

int a,b,c;
cout<<"input the value of a: "<<endl;
cin>>a;
cout<<"input the value of b: "<<endl;
cin>>b;
cout<<"input the value of c: "<<endl;
cin>>c;

int maximum=findmax(a,b,c);

cout<<"greatest number is: "<<maximum;
}