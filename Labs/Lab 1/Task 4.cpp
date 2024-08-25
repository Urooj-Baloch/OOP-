/*
Name:Urooj Baloch
ID:23k-0071
*/
#include <iostream>
using namespace std;
int main() {
    int heights[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int size = sizeof(heights) / sizeof(heights[0]);
    int maxVolume = 0;
    int left = 0, right = size - 1;
    while (left < right) {
        int hLeft = heights[left];
        int hRight = heights[right];
        int width = right - left;
        int minHeight = (hLeft < hRight) ? hLeft : hRight;

        int currentVolume = minHeight * width;
        if (currentVolume > maxVolume) {
            maxVolume = currentVolume;
        }
        if (hLeft < hRight) {
            ++left;
        } else {
            --right;
        }
    }
    cout << "Max Volume: " << maxVolume << endl;
}
