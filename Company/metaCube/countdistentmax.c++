#include<bits\stdc++.h>
using namespace std;
char count_max_rep(char input[]){
    string s;
    int length=0;
    while(input[length]!='\0'){
        s+=toupper(input[length])
        length++;
    }
    int prev=0;
    for(int i=0;i<length;i++){
        
    }
}

int main(){
    const int MAX_SIZE=100;
    char input[MAX_SIZE];
    cin.getline(input,MAX_SIZE);
   
    cout<<count_max_rep(input);
    return 0;
}