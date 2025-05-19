#include<iostream>
using namespace std;

void permutations(string &str, int index){
 //basecase
   if(index>=str.length()){
    cout<<str<<endl;
    return;
   }
   for(int i=index; i<str.length(); i++){
         swap(str[index],str[i]);
         //recursion call
         permutations(str, index+1);
         swap(str[index],str[i]);

   }


}
int main(){
      string str= "abcd";
      int index=0;
      permutations(str,index);
}
