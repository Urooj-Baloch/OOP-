/*Name:Urooj Baloch
ID:23k-0071
*/
#include <iostream>
using namespace std;
int GCD(int a, int b, int divisor = 1) {
    if (divisor > min(a, b))
        return 1;
    if (a % divisor == 0 && b % divisor == 0)
        return divisor;
    return GCD(a, b, divisor + 1);
}
int LCM(int a, int b) {
    int gcd = GCD(a, b);
    return (a * b) / gcd;
}
int main() {
    int n1, n2;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    cout << "GCD of " << n1 << " and " << n2 << " is: " << GCD(n1, n2) << endl;
    cout << "LCM of " << n1 << " and " << n2 << " is: " << LCM(n1, n2) << endl;
    return 0;
}

