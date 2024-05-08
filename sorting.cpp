#include <iostream>
using namespace std;
int partition(int arr[], int first, int last) {
    int pivot= arr[first];
    int count= 0;
    for(int i=first+1;i<=last;i++) {
        if (arr[i] <= pivot)
            count++;
    }
    int pivotIndex=first+count;
    swap(arr[pivotIndex],arr[first]);
    int i=first,j=last;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int first, int last){
    if (first >= last)
        return;
    int p = partition(arr, first, last);
    quickSort(arr, first, p - 1);
    quickSort(arr, p + 1, last);
}
int main() {
    int arr[] = {9, 3, 4, 2, 1, 8};
    int n = 6;
    quickSort(arr,0,n-1);
    for (int i=0;i<n;i++){
        cout<<arr[i] << " ";
    }
    return 0;
}
