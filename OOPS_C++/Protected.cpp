#include<bits/stdc++.h>
using namespace std;
class protect{
    protected:
    int id_proctect;
};
class child:public protect{
    public:
    void setid(int id){
        id_proctect=id;
    }
    void display(){
        cout<<"id_procted "<<id_proctect<<endl;
    }
};
int main(){
   child obj;
   obj.setid(81);
   obj.display();
   return 0;
}