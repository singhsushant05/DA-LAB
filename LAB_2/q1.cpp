#include<iostream>
using namespace std;

/*
void merge(int start, int finish,int l,int mid,int r){
    int n1 = mid-l+1, n2 = r-mid;
    int leftStart[n1], leftFinsh[n1],rightStart[n2],rightFinish[n2];

    for (int i = 0; i < n1; i++) {
        leftStart[i] = start[l + i];
        leftFinsh[i] = finish[l + i];
    }
} */

#include <iostream>
using namespace std;

void Bsort(int start[], int finish[], int n) {
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (finish[j] > finish[j + 1]) {

                
                temp = finish[j];
                finish[j] = finish[j + 1];
                finish[j + 1] = temp;

                temp = start[j];
                start[j] = start[j + 1];
                start[j + 1] = temp;
            }
        }
    }
}


void chooseActivity(int start[], int finish[], int n) {
    int lastFinish;

    cout << "activities\n";
    cout << "(" << start[0] << ", " << finish[0] << ")" << endl;
    lastFinish = finish[0];

    for (int i = 1; i < n; i++) {
        if (start[i] >= lastFinish) {
            cout << "(" << start[i] << ", " << finish[i] << ")" << endl;
            lastFinish = finish[i];
        }
    }
}

int main() {
    int start[]  = {1, 3, 0, 5, 8, 5};
    int finish[] = {2, 4, 6, 7, 9, 9};

    int n = sizeof(start) / sizeof(start[0]);

    Bsort(start, finish, n);
    chooseActivity(start, finish, n);

    return 0;
}
