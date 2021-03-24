#include <iostream>
using namespace std;

int main(){
  int num = 2;
  int result;

  while(num < 1025)
    {
      result = result + num;
      num = num * 2;
    }
  cout << result << endl;
}
