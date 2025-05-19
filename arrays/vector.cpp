#include<iostream>
#include<vector>

using namespace std;
void vectorprint(vector<int>v){
    for(int i=0; i<v.size(); i++){
        cout<<"the"<<i<<" vector elements are: "<<v[i]<<endl;
    }
}
int main(){

   vector<int>v;

//    v.push_back(12);
//    v.push_back(1234);
//    v.push_back(76);
//    vectorprint(v);

 cout<<"enter the number of elements you want to input: "; 
   int n;
  
   cin>>n;
   int data;
   for(int i=0; i<n; i++){
    cin>>data;
    v.push_back(data);
   }
   vectorprint(v);
    
}
    