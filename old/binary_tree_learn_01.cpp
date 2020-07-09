// created 01 FEB 2018
// updated JUNE 2018
// updated JULY 2018
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <cstring>
#include <map>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <bitset>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <list>
#include <stdexcept>

// start --> time measurement
// #define TIMING // comment this to disable all timing measurements
long long timerstart;
#ifdef TIMING
#include <x86intrin.h> // this include required for __rdtsc()
#define START_TIMER  timerstart = __rdtsc();
#define STOP_TIMER(name)  std::cout << "RUNTIME of " << name << ": " << \
    (__rdtsc()-timerstart) << std::endl;
#else
#define START_TIMER
#define STOP_TIMER(name)
#endif
// end --> time measurement
//
// How to use time measurement:
//    START_TIMER
//    put code to be timed here
//    STOP_TIMER("x")

using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node *p;
};

// similar to constructor of class node, but without using constructor semantics
// uses just function call semantics to keep things simple
node* newnode(int x)
{
    node* n = new node();
    n->data=x;
    n->left=nullptr;
    n->right=nullptr;
    n->p=nullptr;
    return n;
}

// fixes the tree to populate pointers in children back to the parent
void in_order_tree_parent_populate(node *x)
{
    if(x==nullptr)
        return;
    if(x->left != nullptr)
        x->left->p = x;
    if(x->right != nullptr)
        x->right->p = x;
    in_order_tree_parent_populate(x->left);
    in_order_tree_parent_populate(x->right);
    return;
}

// in order tree walk and print data
void in_order_tree_print(node *x)
{
    if(x==nullptr)
        return;
    in_order_tree_print(x->left);
    cout << x->data << " ";
    in_order_tree_print(x->right);
    return;
}

int main ()
{
    std::ios_base::sync_with_stdio(false), cin.tie(0) , cout.tie(0);

    // below code creates the tree structure as in Fig 12.1(a) on page 287 of CLRS_3e.
    node* root = newnode(6);
    root->left = newnode(5);
    root->right = newnode(7);
    root->left->left = newnode(2);
    root->left->right = newnode(5);
    root->right->right = newnode(8);

    // fix parent pointers
    in_order_tree_parent_populate(root);
    // walk and print the data elements of tree via in-order walk
    in_order_tree_print(root);
    cout << endl;

    // test parent pointers
    cout << root->right->right->p->p->data << endl;

    return 0;
}

