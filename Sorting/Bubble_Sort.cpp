//Therefore, the overall time complexity remains O(n^2)
#include<iostream>
#include<vector>
using namespace std;
void bobblesort(vector<int>&arr,int n)
{
    bool swapped;
    for(int i=0;i<n;i++)
    {
        swapped=false;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
                swapped=true;
            }
        }
        if(!swapped)
        {
            break;
        }

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
    bobblesort(arr,Size);
    cout<<"Sorted array"<<endl;
    for (int i = 0; i < Size; i++) 
    {
        cout << arr[i] << " ";
    }
    return 0;
}
