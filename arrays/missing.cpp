#include<iostream>
#include<vector>
using namespace std;

int missingNumber(vector<int>& nums) {
    int sum = 0;
    int n=nums.size()+1;
   
    
    for(int index=0;index<nums.size(); index++) {
        sum = sum + nums[index];
    }

    int totalSum = ((n)*(n+1))/2;
    int ans = totalSum - sum;
    return ans;
}

int main(){
vector<int>nums={1};
int ans= missingNumber(nums);
cout<<"the ans is: "<<ans<<endl;
}