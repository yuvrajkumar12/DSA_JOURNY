#include<iostream>
#include<string>
using namespace std;
const int Alphabet_size=26;
struct TrieNode{
    struct TrieNode *childrenAl[Alphabet_size];
    
    bool isEndoftheWord;
};
//Return new trie Node(initialize Null)
struct TrieNode *getNode(void){
    struct TrieNode *pNode=new TrieNode;
    pNode->isEndoftheWord=false;
    for(int i=0;i<Alphabet_size;i++){
        pNode->childrenAl[i]=NULL;
    }
    return pNode;
}
//if not present inserts key into trie
void insert(struct TrieNode *root,string key){
    struct TrieNode *PCrowl=root;
    for(int i=0;i<key.length();i++){
        int index=key[i]-'a';
        if(!PCrowl->childrenAl[index])
            PCrowl->childrenAl[index]=getNode();
        PCrowl=PCrowl->childrenAl[index];
    }
    PCrowl->isEndoftheWord=true;
}

bool search(struct TrieNode *root, string key){
    struct TrieNode *PCrowl=root;
    for(int i=0;i<key.length();i++){
        int index=key[i]-'a';
        if(!PCrowl->childrenAl[index])
            return false;
        PCrowl=PCrowl->childrenAl[index];
    }
    return (PCrowl!=NULL&&PCrowl->isEndoftheWord);
}

int main(){
    string keys[]={"the","a","there","answer","any","by","bye","their"};
    int n=sizeof(keys)/sizeof(keys[0]);
    struct TrieNode *root=getNode();
    for(int i=0;i<n;i++){
        insert(root,keys[i]);
    }
    search(root,"the")?cout<<"yes\n":cout<<"No\n";
    search(root,"yuvraj")?cout<<"Yes\n":cout<<"No\n";
    return 0;
}