#include <string>
#include <iostream>

using namespace std;

int main(){
  int i =0;
  bool divisible = false;
  while (!divisible){
    i++;
    divisible = true;
    for (int j = 1;j<=20;j++){
      if(i % j != 0){
        divisible = false;
        break;
      }
    }
  }
  cout << i << endl;
}
