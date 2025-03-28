#include<bits/stdc++.h>
#define ll long long 
using namespace std;

struct Node{
    ll data;
    // con tro co kieu du lieu la node
    Node* next;
};
typedef Node* node;

node makenode (ll x){
    node temp = new Node ();
    temp -> data = x;
    temp -> next = nullptr;
    return temp;
}
node addcuoi (node a, ll x){
    node tmp = makenode (x);
    a -> next = tmp;
    a = tmp;
    return a;
}
void chencuoi (node &a, ll x){
    // node p se luu dia chi cua a
    node p = a;
    node temp = makenode(x);
    if (  a == nullptr){
        a = temp;
    }
    else {
        while ( p->next != nullptr){
            p = p -> next;
        }
        // p chỉ đại diện cho 1 node nào cụ thể thôi mỗi khi nó dịch chuyển.
        p -> next = temp;
    }
}
void chendau (node &a, ll x){
    node temp = makenode(x);
    if ( a == nullptr){
        a = temp;
    }
    else {
        temp -> next = a;
        a = temp;
    }
}


void print ( node a){
    node p = a;
    while (p != nullptr){
        cout << p -> data << " ";
        p = p -> next;
    }
}

int main (){
    ll n;
    cin >> n;
    ll x;
    cin >> x;
    node l = makenode (x);
    // cap nhat node dau la l; luu tru dia chi cua node dau,
    node p = l;
    for ( ll i = 1; i<n; i++){
        cin >> x;
        p = addcuoi( p,x);
    }
    ll k;
    cin >> k;
    chendau(l,k);
    print (l);
    // gio moi chen ptu ne.
}