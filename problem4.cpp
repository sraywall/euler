#include <string>
#include <iostream>

using namespace std;

int main(){
  long max = 999 * 999;
  for (int i = max; i >=0;i--){
    string s = to_string(i);
    bool palendrome = true;
    for(int j = 0;j<s.length()/2;j++){
      if(s[j] != s[s.length()-j-1]){
        palendrome = false;
        break;
      }
    }
    if(palendrome){
      for(int k = 100;k < 1000;k++){
        if(i % k == 0 && i/k > 100 && i/k < 1000){
          cout << s<<endl;
          return 0;
        }
      }
    }
  }
}
