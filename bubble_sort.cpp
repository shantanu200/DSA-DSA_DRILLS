#include <bits\stdc++.h>
using namespace std;

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}


void bubbleSort(int arr[],int size){
    int i,j;
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-i-1; j++)
        {
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}


int main(){
    //Declaration of array
    int arr[] = {2,45,67,89,34,78,56,90,23};
    // Size of array
    int size = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,size);
    //Printing array
    copy(arr,arr+size,ostream_iterator<int>(cout," "));
    return 0;
}