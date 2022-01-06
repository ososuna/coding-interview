#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool edits(string e1,string e2){
  vector<char> v(e2.begin(), e2.end());

  for(int i=0;i<e1.size();i++){

    for(int j=0;j<e2.size();j++){
        int ite=v.begin();
      if(e1[i] == v[j]){
        v.erase(ite);
      }

    }

  }

return false;

}


int main() {
  string e1="aaaaaa";
  string e2="bbbbbb";
  cout<<edits(e1,e2);

}
/*
pale ple true   remove
pales pale true  remove
pale bale  true   replace  aelp abel
pale bake false
*/
