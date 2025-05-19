#include<vector>
#include<iostream>
using namespace std;
 
void transpose(vector<vector<int>>&arr, vector<vector<int>>&ans){
   

    for(int i=0; i<arr.size();i++){
        for(int j=0; j<arr[i].size(); j++){
            ans[j][i]=arr[i][j];
        }
    }

}


int main(){
vector<vector<int>>arr{{1,2,3,4}, {5,6,7,8},{9,10,11,12}};
vector<vector<int>>ans;
ans.resize(4, vector<int>(4));

transpose(arr,ans);

// transpose(arr,row,col);
for(int i=0; i<ans.size(); i++){
    for(int j=0; j<ans[i].size(); j++){
        cout<<ans[i][j]<<" ";
       
    }
    cout<<endl;
}
}