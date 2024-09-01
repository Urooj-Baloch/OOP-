/*Name:Urooj Baloch
ID:23k-0071
*/
#include <iostream>
using namespace std;
bool hasSubsetSum(int arr[], int size, int targetSum) {
    if (targetSum == 0) {
        return true;
    }
    if (size == 0) {
        return false;
    }
    return hasSubsetSum(arr, size - 1, targetSum) ||
           hasSubsetSum(arr, size - 1, targetSum - arr[size - 1]);
}
int main() {
    int arr[] = {2, 35, 3, 10, 11, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int targetSum = 38;
    if (hasSubsetSum(arr, size, targetSum)) {
        cout << "Subset with sum " << targetSum << " exists."<<endl;
    } else {
        cout << "No subset with sum " << targetSum << " exists."<<endl;
    }
    return 0;
}