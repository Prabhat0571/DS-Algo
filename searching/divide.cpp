#include<iostream>
using namespace std;


int divide(int divisor, int dividend ){

    int s =0;
    int e= dividend;
    int mid= s+ (e-s)/2;
    int ans= -1;
    while(s<=e){
        if(mid*divisor==dividend){
            return mid;
        }

        else if(mid*divisor>dividend){
            e= mid-1;

        }

        else{
            ans=mid;
            s=mid+1;
    }
    mid= s+ (e-s)/2;

}
return ans;
}


int main(){


    int divisor= 7;
    int dividend= 29;

    int ans = divide(divisor , dividend);
    cout<<"final ans is: "<<ans<<endl;




}