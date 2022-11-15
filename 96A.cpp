#include <algorithm>
#include <iostream>
#include <vector>
#include <math.h>
#include <unordered_map>
using namespace std;

string func(string s) {
  int sumZ = 0, sumO = 0;
  for(int i = 0; i < s.length(); i++){
    if(sumZ >= 7 || sumO >= 7){
      return "YES";
    }
    if(s[i] == '1'){
      sumZ = 0;
      sumO++;
    }
    else if(s[i] == '0'){
      sumZ++;
      sumO = 0;
    }
  }
  return "NO";
}
int main() {
  string s;
  cin >> s;
  string out = func(s);
  cout << out;
}