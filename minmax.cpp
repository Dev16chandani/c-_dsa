#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 10, -1, 7};
    auto [min,max]=minmax_element(begin(arr), end(arr));
    cout<<"Minimum: "<<*min<<endl;  // Output: Minimum: -1
    cout<<"Maximum: "<<*max<<endl;  // Output: Maximum: 10
    return 0;
}
