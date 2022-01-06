
#include <bits/stdc++.h>
using namespace std;
bool isBalanced(string expr){
 stack<char> s;
 for(int i=0;i<expr.length();i++){
  if (expr[i] == '('){
    s.push(expr[i]);
  }
  if (expr[i] == ')'){
    if(s.empty()){
      return false;
    }
    s.pop();
  }


 }
 return s.empty();
}
int main() {
  string expr="()";
  if(isBalanced(expr)){
    cout << "Balanced";
  }else{
    cout << "not Balanced";
  }
  return 0;
}
