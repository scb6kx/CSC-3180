#include <iostream>
using namespace std;

int main(){
  int num = 1;
  int result;

  while(num < 1000)
    {
      result = result + num;
      num = num + 2;
    }
  cout << result << endl;
}
