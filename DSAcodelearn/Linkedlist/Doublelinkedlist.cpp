#include <bits/stdc++.h>
#define ll long long 
using namespace std;

struct Node {
    ll data;
    Node* pre;
    Node* next;
};
typedef Node* node;
struct LIST {
    Node* head;
    Node* tail;
};
void createEmty(LIST &L){
   L.head = nullptr;
   L.tail = nullptr;
}
node makenode (ll x){
    node temp = new Node();
    temp -> data = x;
    temp -> next = nullptr;
    temp -> pre = nullptr;
    return temp;
}
void addtail (LIST &L, ll x){
    while (true){
        cin >> x;
        if ( x == -1 ) break;
        node temp = makenode (x);
        if ( L.head == nullptr){
            L.head = temp;
            L.tail = temp;
        }
        else {
            L.tail -> next = temp;
            L.tail = temp;
        }
    }
}
void print (LIST L){
    if ( L.head == nullptr ) return;
    else{
        while ( L.head != nullptr){
            cout << L.head -> data << " ";
            L.head = L.head -> next;
        }
    }
}


int main (){
    LIST L;
    createEmty(L);
    ll x; cin >> x;
    addtail (L,x);
    print (L);
}