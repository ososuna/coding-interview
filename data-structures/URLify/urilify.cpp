#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;
string URLify(string expr1,int size){
  string auxiliar="";
  for(int i=0;i<size;i++){
    if(expr1[i] == ' ' ){
      auxiliar+="%20";
    }else{
      auxiliar += expr1[i];    
    }
  }
  return auxiliar;
  
}
int main() {
  string expr1="Mr john smith    ";
  int size=13;

    cout<<URLify(expr1,size);

}