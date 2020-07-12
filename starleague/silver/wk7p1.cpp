// created 01 FEB 2018
// updated JUNE 2018
// updated JULY 2018
// updated MAY 2020
// updated JULY 2020
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

// g++ -O2 -lm -std=c++0x src.cpp

// ADD problem topic / domain (graph, DP, etc)
// ADD problem source and link
// ADD date 


using namespace std;
 
int x,n;
vector<int> v;

void printv(vector<int> vec, int nnn)
{
	for(int i=0;i<nnn;i++)
		cout << vec[i] << " ";
	cout << endl;
}
	
int main ()
{
//    std::ios_base::sync_with_stdio(false), cin.tie(0) , cout.tie(0);
    freopen("bcount.in", "r", stdin);
    freopen("bcount.out", "w", stdout);
	int a,b,t1,t2,t3,q;
	cin >> n >> q;	
	v.push_back(0); //push something in 0'th place
	for(int i=0;i<n;i++){
		cin >> x;
		v.push_back(x);
	}
//	printv(v,n);
	for(int i=0;i<q;i++){
		cin >> a>>b;
		t1=0;t2=0;t3=0;
		for(int j=a;j<=b;j++){
			if(v[j]==1)t1++;
			if(v[j]==2)t2++;
			if(v[j]==3)t3++;
		}
		cout << t1 << " " << t2 << " " << t3 << endl;
	}
	
	return 0;
}



