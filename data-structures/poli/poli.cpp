#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;
string perm(string expr1){
 sort(expr1.begin(), expr1.end());

vector<char> vt;
 string aux;
  for(int i=0;i<expr1.length()-1;i++){
    if(expr1[i] == expr1[i+1]){
      vt.push_back(expr1[i]);
      i++;
    }else{
      aux += expr1[i];
    }
  }
  int i=0;
   string paly="";
  while(!vt.empty()){
cout<< expr1<<"\n";
    if(i>vt.size()){

       paly+= vt.back();
       vt.pop_back();
    }else if(i==vt.size()){
      paly+=aux;
    }else{
         paly+=vt[i];
    }
    i++;

  }


  return paly;

}
int main() {
  string expr1="tact coa";
  int size=13;

    cout<<perm(expr1);

}

