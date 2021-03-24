// biggest.cpp - Samuel Bystrek
// I tried to make the looper as simple and user frriendly as possible but I found visually if you enter the ten numbers in one line
//   instead of hitting enter after each number made the outputs look weird. Otherwise I couldn't notice any issues causing the code
//   to output anything wacky

#include <iostream>
using namespace std;

bool isNumber(int a){
  if (isdigit(a) == false){
    return false;
  }
  return true;
}

int main(){
  int list[10];
  int count = 0;
  int biggest;
  
  for (int i = 0; i < 100; i++){
    cout << endl << endl;
  }

  cout << "Enter ten numbers:" << endl;
  
  while (count < 10){
    cout << ">>> ";
    cin >> list[count];
    count++;
  }
  
  count = 1;
  biggest = list[1];

  while (count < 10){
    if (list[count] > biggest){
      biggest = list[count];
    }
    count++;
  }

  cout << "The largest number in the list is: " << biggest << "." << endl;

}
