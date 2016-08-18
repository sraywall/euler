#include <string>
#include <iostream>

using namespace std;

int main(){
  //13195
  long num = 600851475143;
  int factor = 0;
  bool prime = true;
  //
  for(long i = 2;i * i < num;i++){
    if(num % i == 0 ){
      prime = true;
      for(int j = 2;j<i;j++){
        if(i % j == 0){
          prime = false;
          break;
        }
      }
      if(prime){
        factor = i;
      }
    }
  }
  cout << factor <<endl;
}
