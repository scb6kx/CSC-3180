// Sam Bystrek, Noah Bass

// Team Programming Assignment Two

// https://www.tutorialspoint.com/cplusplus-program-to-implement-quick-sort-using-randomization

#include <iostream>
#include <algorithm>
#include <ctime>
using namespace std;

void display(int *array, int s)
{
  for(int i = 0; i < s; i++)
    {
      cout << array[i] << " ";
      cout << endl;
    }
}

int partition(int *array, int p, int q) // p = left; q = right
{
	int x = array[p];
	int i = p; // Assign left array to index
	x = q; // Assign right array to pivot

	for(int j = p; j <= q; j++)
	{
		if(array[j] < array[x])
		{
			swap(array[j], array[i]);
			i++;
		}
	}
	
	swap(array[x], array[i]);
	return i;
}


void quickSort(int *array, int p, int q) // p = left; q = right
{
	int middle;

	if(p < q)
	{
		middle = partition(array, p, q);

		quickSort(array, p, middle - 1);
		quickSort(array, middle + 1, q);
	}
}


int main()
{
	int arraySize = 1000;
	int array[arraySize];
        srand(time(0));


	for(int x = 0; x < 101; x++)
	  {

	    for(int i = 1; i < arraySize; i++)
	      {
		array[i] = rand() % 1000 + 1;
	      }	

	    cout << "\nQuickSort list before sorting: " << endl;

	    display(array, arraySize);
	    	    
	    quickSort(array, 0, arraySize - 1);

	    cout << "\nQuickSort list after sorting: " << endl;

	    display(array, arraySize);
	  }	    
	
	return 0;
}
