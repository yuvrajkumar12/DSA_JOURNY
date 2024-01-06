#include<iostream>
#include<vector>
using namespace std;
void Selectionsort(vector<int>&arr,int size)
{
    for(int i=0;i<size-1;i++)
    {
        int mid_index=i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[mid_index])
            {
                mid_index=j;
            }
            
        }
        swap(arr[i],arr[mid_index]);
    }
};

int main()
{
    cout<<"PlZZ Enter your Size of arr"<<": ";
    int Size,element;
    cin>>Size;
    vector<int>arr;
    for(int i=0;i<Size;i++)
    {
        cin>>element;
        arr.push_back(element);
    }
    Selectionsort(arr,Size);
    cout<<"Sorted array"<<endl;
    for (int i = 0; i < Size; i++) 
    {
        cout << arr[i] << " ";
    }
    return 0;
}