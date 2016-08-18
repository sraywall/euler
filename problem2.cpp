#include <string>
#include <iostream>

using namespace std;

int main(){
  int a = 1;
  int b = 1;
  int temp = 1;
  int sum = 0;
  while (b <= 4000000){
    //cout << b <<endl;
    temp = a + b;
    a = b;
    b = temp;
    if(b%2==0)
      sum += b;
  }
  cout << sum <<endl;
}
