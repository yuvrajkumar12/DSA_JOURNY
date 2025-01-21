#include<bits\stdc++.h>
using namespace std;
int palindrome(char input[], int n){
    int left=0;
    int right=n-1;
    while(left<right){
        if(input[left]!=input[right]){
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}
int main(){
    const int MAX_SIZE=100;
    char input[MAX_SIZE];
    int length=0;
    cin.getline(input,MAX_SIZE);
    while(input[length]!='\0'){
        length++;
    }
    cout<<palindrome(input,length);
    return 0;
}