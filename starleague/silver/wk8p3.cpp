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
	int x,n,flag;
	string s;
	stack<int> st;

	cin >> x;
	
	for(int j=0;j<x;j++){
		cin >> n >> s;
		flag=0;
		for(int i=0;i<n;i++){
			if(s[i]=='>')st.push(1);
			if(s[i]=='<'){
				if(st.empty()){
					cout << "illegal" << endl;
					flag=1;
					break;
				}
				st.top();st.pop();
			}
		}
		// need to check that stack should be empty for fully legal test case
		if(flag==0 && st.empty()) cout << "legal" << endl;
		if(flag==0 && !st.empty()) cout << "illegal" << endl;
		
		//very important to empty the stack before reusing for next test case
		while(!st.empty())  
			st.pop();
	}
	return 0;
}



