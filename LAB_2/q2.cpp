#include <iostream>
#include <algorithm>
using namespace std;

int findPlatforms(int AT[], int DT[], int n) {
    sort(AT, AT + n);
    sort(DT, DT + n);

    int platform = 0;
    int maxPlatform = 0;

    int i = 0; 
    int j = 0; 

    while (i < n && j < n) {

        if (AT[i] <= DT[j]) {
            platform++;
            i++;
        }
        else {
            platform--;
            j++;
        }

        if (platform > maxPlatform)
            maxPlatform = platform;
    }

    return maxPlatform;
}

int main() {

    int AT[] = {900, 910, 920, 1100, 1120};
    int DT[] = {940, 1200, 950, 1130, 1140};

    int n = 5;

    int result = findPlatforms(AT, DT, n);

    cout << "platforms = " << result << endl;

    return 0;
}
