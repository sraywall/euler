#include <string>
#include <iostream>

using namespace std;

int main(){
  long a = 0;
  long b = 0;
  for (long i = 1;i<=100;i++){
    a += i * i;
    b += i;
  }
  b *= b;
  cout << b - a << endl;
}
