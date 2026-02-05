#include <iostream>
using namespace std;

void sortJobProfit(int jobOrder[], int jobProfit[], int totalJobs) {

    for(int i = 0; i < totalJobs - 1; i++) {
        for(int j = 0; j < totalJobs - i - 1; j++) {

            if(jobProfit[jobOrder[j]] < jobProfit[jobOrder[j+1]]) {

                int temp = jobOrder[j];
                jobOrder[j] = jobOrder[j+1];
                jobOrder[j+1] = temp;
            }
        }
    }
}

int main() {

    int totalJobs = 5;

    int jobDeadline[] = {2, 1, 2, 1, 3};
    int jobProfit[]   = {100, 19, 27, 25, 15};

    int jobOrder[totalJobs];

    //remaining
    return 0;
}
