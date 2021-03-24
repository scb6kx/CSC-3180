// biggest2.cpp - Samuel Bystrek
// The basic operation of the program is setting the first value as the largest. Then if the next number is larger, the new number is the largest

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
  cout << "The program has been executed " << count << " times." << endl;
 
}
