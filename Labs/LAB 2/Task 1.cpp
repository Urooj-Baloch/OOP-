/*Name:Urooj Baloch
ID:23k-0071
*/
#include <iostream>
using namespace std;
void recursiveSwap(int &a, int &b,int i);
int main() {
    int n1, n2,iterations = 3;
    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;
    cout << "Before swapping: n1 = " << n1 << ", n2 = " << n2 << endl;
    recursiveSwap(n1, n2,iterations);
    cout << "After swapping: n1 = " << n1 << ", n2 = " << n2 << endl;
    return 0;
}
void recursiveSwap(int &a, int &b,int i) {
    if (i == 0) {
        return;
    }
    a = a ^ b;//using XOR bitwise operator to swap the values
    recursiveSwap(b,a,i-1);
}