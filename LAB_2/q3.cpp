#include <iostream>
using namespace std;

//DESCENDING
void sortWeight(float itemValue[], float itemWeight[], int totalItems) {

    for (int i = 0; i < totalItems - 1; i++) {
        for (int j = 0; j < totalItems - i - 1; j++) {

            float ratio1 = itemValue[j] / itemWeight[j];
            float ratio2 = itemValue[j+1] / itemWeight[j+1];

            if (ratio1 < ratio2) {

                float temp = itemValue[j];
                itemValue[j] = itemValue[j+1];
                itemValue[j+1] = temp;

                temp = itemWeight[j];
                itemWeight[j] = itemWeight[j+1];
                itemWeight[j+1] = temp;
            }
        }
    }
}

void fractionK(float itemValue[], float itemWeight[], int totalItems, float capacity) {

    float maxValue = 0;

    for (int i = 0; i < totalItems; i++) {

        if (capacity >= itemWeight[i]) {
            capacity -= itemWeight[i];
            maxValue += itemValue[i];
        } else {
            maxValue += itemValue[i] * (capacity / itemWeight[i]);
            break;
        }
    }
    cout << "Maximum value in knapsack = " << maxValue << endl;
}
int main() {

    float itemValue[]  = {60, 100, 120};
    float itemWeight[] = {10, 20, 30};

    int totalItems = 3;
    float capacity = 50;

    sortWeight(itemValue, itemWeight, totalItems);
    fractionK(itemValue, itemWeight, totalItems, capacity);

    return 0;
}
