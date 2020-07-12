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
	
	int n,x,qs;
	cin >> n;
	
	queue<int> q;
	
	q.push(1);
	for(int i=0;i<n;i++){
		qs=q.size();
		for(int j=0;j<qs;j++){
			x=q.front();q.pop();
			if(x==1){
				q.push(1);
				q.push(2);
			}
			if(x==2){
				q.push(2);
				q.push(2);
				q.push(1);
			}
		}
	}
	
	qs=q.size();
	string s;
	
	for(int i=0;i<qs;i++){
		x=q.front();q.pop();
		if(x==1) s = s+"B";
		if(x==2) s = s+"R";
	}
	cout << s << endl;
	return 0;
}



