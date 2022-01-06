#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isPermutation(string expr1,string expr2){
 sort(expr1.begin(), expr1.end());
  sort(expr2.begin(), expr2.end());
  if(expr1.length()!=expr2.length()){
    return false;
  }
  for(int i=0;i<expr1.length();i++){
    if(expr1[i]!=expr2[i]){
      return false;
    }
  }
  return true;
}
int main() {
  string expr1="casa";
  string expr2="sapa";
  if(isPermutation(expr1,expr2)){
    cout<<"permutation";
  }else{
    cout<<" no permutation";
  }
}