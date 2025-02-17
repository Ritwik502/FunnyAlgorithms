// C++ program for implementation of Bubble sort  
#include <bits/stdc++.h> 
using namespace std; 
  
void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
  
// A function to implement bubble sort  
void bubbleSort(int arr[], int n)  
{  
   int i,j;
   bool any_swap_flag;
    for(i=0;i<n-1;i++)
    {
      any_swap_flag=false;
      for(j=0;j<n-i-1;j++)
      {
        if(arr[j]>arr[j+1])
        {
          swap(&arr[j],&arr[j+1]);
          any_swap_flag=true;
        }
      }
      //if no swaps have been made
      if(any_swap_flag==false)
        break;
    }
}  
  
/* Function to print an array */
void printArray(int arr[], int size)  
{    
    for (int i = 0; i < size; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
}  
  
// Driver code  
int main()  
{  
    int arr[] = {64, 34, 25, 12, 22, 11, 90};  
    int n = sizeof(arr)/sizeof(arr[0]);  
    bubbleSort(arr, n);  
    cout<<"Sorted array: \n";  
    printArray(arr, n);  
    return 0;  
}  
  
// This code is contributed by rathbhupendra 
