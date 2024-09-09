#include<iostream>
#include<sstream>
using namespace std;
#include<vector>
void  merge(int arr1[],int low,int mid, int high){
    int n1=mid-low+1;
    int n2=high-mid;
    int left[n1];
    int right[n2];
    //Copy to the temp array left
    for(int i=0;i<n1;i++){
        left[i]=arr1[low+i];
    }
    //copy to the tem array right
    for(int j=0;j<n2;j++){
        right[j]=arr1[mid+1+j];
    }
    int i=0,j=0,k=low;
    //store the value in temp array arr1

    while(i<n1&&j<n2){
        if(left[i]<=right[j]){
            arr1[k]=left[i];
            i++;
        }else{
            arr1[k]=right[j];
            j++;
            
        }
        k++;
    }
    while(i<n1){
        arr1[k]=left[i];
        i++; k++;
    }
    while(j<n2){
        arr1[k]=right[j];
        j++;k++;
    }

}
//merge function Algorithm

void mergeSort(int arr1[], int low, int high) {
    if (low < high) {
        int mid = low + (high - low) / 2;
        mergeSort(arr1, low, mid);
        mergeSort(arr1, mid + 1, high);
        merge(arr1, low, mid, high);
    }
}   
int main(){
    string line;
    getline(cin, line);
    istringstream iss(line);
    vector<int>arr;
    int num;

    //Set input in one line
    while (iss >> num) {
        arr.push_back(num);
    }
    int size = arr.size();
    if (size == 0) {
        return 0;
    }

    //create a new array arr1 to store the value
    int arr1[size];
    for (int i = 0; i < size; i++) {
        arr1[i] = arr[i];
    }


    //call merge function
    mergeSort(arr1, 0, size - 1);
    for (int i = 0; i < size; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    return 0;
}