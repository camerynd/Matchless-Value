#include<iostream>
using namespace std;
const int SIZE = 9;
void displayArray(int array[]);
void bubbleSort(int (&array)[SIZE]);
void find_matchless_value(int array[]);
int main()
{
    int array[SIZE] = {2, 8, 3, 5, 10, 3, 5, 10, 2};
    cout << "Array: ";
    displayArray(array);
    bubbleSort(array);
    cout << "Sorted array: ";
    displayArray(array);
    find_matchless_value(array);

    return 0;
}

void displayArray(int array[])
{
    for(int i = 0; i < SIZE; i++)
    {
        cout << array[i] << " ";
    } 
    cout << endl << endl;
}

void bubbleSort(int (&array)[SIZE])
{ 
   int maxElement; 
   int index; 
   int temp; 
   int counter; 
   for (maxElement = SIZE - 1; maxElement >= 0; maxElement--) 
   { 
      for (index = 0; index <= maxElement - 1; index++) 
      { 
            if (array[index] > array[index + 1]) 
            { 
               temp = array[index]; 
               array[index] = array[index + 1]; 
               array[index + 1] = temp; 
            } 
       } 
   } 
}

void find_matchless_value(int array[])
{
    int j = 1;
    for(int i = 0; i < SIZE; i ++)
    {
        while(j < (i+2) && j < SIZE)
        {
            if(array[i] != array[j])
            {
                cout << "The value with no match is " << array[i] << endl;
            }
            j += 2;
            break;
        }
    }
}