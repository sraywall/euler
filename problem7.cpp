#include <string>
#include <iostream>

using namespace std;

int main(){
  int count = 0;
  int i = 1;
  int prime = false;
  while (count != 10001){
    i++;
    prime = true;
    for(int j = 2; j<i;j++){
      if(i%j == 0){
        prime = false;
        break;
      }
    }
    if(prime){
      count++;
    }
  }
  cout << i<<endl;

}
