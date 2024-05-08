#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int>& arr, int key) {
    int first=0;
    int last=arr.size()-1;
    while(first<=last){
        int mid=first+(last-first)/2;
        if(arr[mid]==key)
            return mid;
        if(arr[mid]<key)
            first=mid+1;
        else
            last=mid-1;
    }
    return -1;
}
int main() {
    int n,key,result;
    cout<<"Enter the number of elements: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter "<< n <<" elements (sorted): "<<endl;
    for(int i=0;i<n;++i)
        cin>>arr[i];
    cout<<"Enter an element to search: ";
    cin>>key;
    result = binarySearch(arr, key);
    if(result==-1)
        cout<<"Element not found in the array."<<endl;
    else
        cout<<key<<" found at index "<<result<<endl;
    return 0;
}
