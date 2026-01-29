#include<iostream>
using namespace std;

int bianry(vector<int> &arr,int key){
    int start = 0;
    int end = arr.size();
    int mid = start + (end - start)/2;
    ;

    while (start <= end)
    {
        if (arr[mid]==key)return key;

        if(arr[mid] < key)return mid+1;

        if(arr[mid] > key)return mid-1;
        
    return -1;
    }
}
    int main(){
    vector<int> arr = {2,6,12,23,65,77,88,98};
    int key = 23;
    bianry(arr,key);

    return 0;
    }
