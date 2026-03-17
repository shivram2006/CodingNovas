#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int minIndex = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}



void insertionSort(int arr[], int n){

    for(int i=1; i<n; i++){
        int curr = arr[i];
        int prev = i-1;
      while(prev>=0 && arr[prev] > curr){
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
    }
}


int main(){

    cout << endl;


    int arr[] = {2,4,5,3,1};
    int n = 5;


    // selectionSort(arr, n);
    insertionSort(arr, n);

    for(int i=0; i<n; i++){
    cout << arr[i] << " ";
    }

    





    cout << endl;



    return 0;
}