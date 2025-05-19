#include<iostream>
using namespace std; 

void subSequence(string str, string ans, int index){
    if(index>=str.length()){
        cout<<"-> "<<ans<<endl;
        return ;
    }
    char ch= str[index];

    subSequence(str,ans,index+1); //exclude
    //include
    ans.push_back(ch);
    subSequence(str,ans,index+1);

}


int main(){

    string str= "abc";
    string ans=" ";
    int index=0;

    subSequence(str,ans,index);
    

}