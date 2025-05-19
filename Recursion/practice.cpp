#include<iostream>
using namespace std;
 
int dearrange(int n){
    if(n==1){
    return 0;
    }

    if(n==2){
        return 1;
    }
    
    int ans= (n-1)* ( dearrange(n-1) + dearrange(n-2) );
    return ans;


}

int main(){
    int n=4;

    cout<<dearrange(n);



}