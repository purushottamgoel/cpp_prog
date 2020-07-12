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


void printv(vector<int> vec, int nnn)
{
	for(int i=0;i<nnn;i++)
		cout << vec[i] << " ";
	cout << endl;
}

int main ()
{
//    std::ios_base::sync_with_stdio(false), cin.tie(0) , cout.tie(0);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
	
	string t;
	int l,x;
	stack<int> s;
	vector<int> v;
	cin >> t;
	l = t.length();
	for(int i=0;i<l;i++){
		x=t[i];
//		cout << x << endl;
		if(x==40) v.push_back(1);
		if(x==123) v.push_back(2);
		if(x==91) v.push_back(3);
		if(x==41) v.push_back(10);
		if(x==125) v.push_back(20);
		if(x==93) v.push_back(30);
	}
//	printv(v,l);
	
	for(int i=0;i<l;i++){
		if(v[i]<5) s.push(v[i]);
		if(v[i]>5){
			if(s.empty()==true){
				cout << "Not Valid" << endl;
				return 0;
			}
			x=s.top(); s.pop();
			if(v[i]!=x*10){
				cout << "Not Valid" << endl;
				return 0;
			}
		}
	}
	cout << "Valid" << endl;
	return 0;
}



