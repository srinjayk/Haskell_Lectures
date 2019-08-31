#include<iostream>
using namespace std;


// A utility function to swap two elements
void swap(int* a, int* b)
{
   int t = *a;
   *a = *b;
   *b = t;
}

/* This function takes last element as pivot, places
  the pivot element at its correct position in sorted
   array, and places all smaller (smaller than pivot)
  to left of pivot and all greater elements to right
  of pivot */
int partition (int arr[], int low, int high)
{
   int pivot = arr[high];    // pivot
   int i = (low - 1);  // Index of smaller element

   for (int j = low; j <= high- 1; j++)
   {
       // If current element is smaller than or
       // equal to pivot
       if (arr[j] <= pivot)
       {
           i++;    // increment index of smaller element
           swap(&arr[i], &arr[j]);
       }
   }
   swap(&arr[i + 1], &arr[high]);
   return (i + 1);
}

/* The main function that implements QuickSort
arr[] --> Array to be sorted,
 low  --> Starting index,
 high  --> Ending index */
void quickSort(int arr[], int low, int high)
{
   if (low < high)
   {
       /* pi is partitioning index, arr[p] is now
          at right place */
       int pi = partition(arr, low, high);

       // Separately sort elements before
       // partition and after partition
       quickSort(arr, low, pi - 1);
       quickSort(arr, pi + 1, high);
   }
}

void rvereseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";

   cout << endl;
}

int main(){
  int n,m;
  cin >>n>>m;
  int arr[m];
  for (int i = 0; i < m; i++) {
    cin >>arr[i];
  }
  int min_cost=0;
  int max_cost=0;
  int l=m;
  quickSort(arr, 0, m-1);
  printArray(arr, m);
  rvereseArray(arr, 0, m-1);
  printArray(arr, m);
  do{
  //  cout<<"Hello";
    if(arr[l-1]==0) l=l-1;
    min_cost=min_cost+arr[l-1];
    arr[l-1]--;
    //printArray(arr, m);
    //cout<<min_cost<<endl;
    n--;
  }while(n>0);
  int sum=0;
  for (int i = 0; i < m; i++) {
    sum=sum+arr[i];
  }
  cout<<min_cost;



  return 0;
}
