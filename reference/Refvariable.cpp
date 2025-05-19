#include<iostream>
using namespace std;
int incrementby1(int n){
    n++;                  //call by value as both n presents different address of n
    cout<<&n<<endl;
    return n;
   }

int main(){
    int n;
    cin>>n;

    n=incrementby1(n);
    cout<<n<<endl<<&n<<endl;
    return 0;
   

}