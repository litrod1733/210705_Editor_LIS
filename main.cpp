//
// Created by 이인성 on 2021/07/05.
//

#include <iostream>
#include <stack>
using namespace std;

int main() {
  stack<char> str;
  stack<char> temp;
  string proto;
  char control;
  char control_alpha;
  int control_num;
  int i=0;
  cin >> proto;
  while(proto[i] != '\0') {
    str.push(proto[i]);
    i++;
  }
  cin >> control_num;
  for(int i=0; i<control_num; i++) {
    cin >> control;
    if(control == 'L') {
      if(str.empty())
        continue;
      else {
        temp.push(str.top());
        str.pop();
      }
    }
    if(control == 'D') {
      if(temp.empty())
        continue;
      else {
        str.push(temp.top());
        temp.pop();
      }
    }
    if(control == 'B') {
      if(str.empty())
        continue;
      else
        str.pop();
    }
    if(control == 'P') {
      cin >> control_alpha;
      str.push(control_alpha);
    }
  }
  int n1 = str.size();
  for(int j=0; j<n1; j++) {
    temp.push(str.top());
    str.pop();
  }
  int n2 = temp.size();
  for(int k=0; k<n2; k++) {
    cout << temp.top();
    temp.pop();
  }


  return 0;
}
