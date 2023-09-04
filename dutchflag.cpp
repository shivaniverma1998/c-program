#include<iostream>
using namespace std;


//Function to sort the array of 0s, 1s and 2s
void sortArr(int arr[],int arr_size){
    int lo=0;
    int hi=arr_size-1;
    int mid=0;

    
    // Iterate till all the elements
    // are sorted
    while(mid<=hi) {
        switch(arr[mid]) {
            //if element is 0
            case 0:
                swap(arr[lo],arr[mid]);
                lo++;
                mid++;
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(arr[mid],arr[hi]);
                hi--;
                break;
        }
    
    }
}
void printArr(int arr[],int arr_size){
    for(int i = 0;i < arr_size;i++){
        cout<<arr[i] <<" ";
    }
}
int main(){
    int arr[] = { 0,1,1,0,1,2,1,2, 0, 0, 0, 1};
    int n = sizeof(arr)/ sizeof(arr[0]);

    sortArr(arr,n);
    printArr(arr,n);
    return 0 ;
}