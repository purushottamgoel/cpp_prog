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
//#define TIMING // comment this to disable all timing measurements
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

string inter1(char* a, char* b){
    string a1="";
    for(int i=0; i<strlen(a); i++){
        for(int j=0; j<strlen(b); j++){
            if(a[i]==b[j]){
                a1+=a[i];
                a[i]='@';
                b[j]='#';
            }
        }
    }
    sort(a1.begin(),a1.end());
    return a1;
}

// from: Papa & Ram
// Accepted
// Dumb logic but Accepted since uses faster C-style i/o
int main1()
{
    std::ios_base::sync_with_stdio(false), cin.tie(0) , cout.tie(0);
    char s1[1001],s2[1001];

	while(gets(s1)){
        gets(s2);
        cout << inter1(s1,s2) << endl;
	}
    return 0;
}

string inter(string a, string b){
    string a1="";
    for(int i=0; i<a.size(); i++){
        for(int j=0; j<b.size(); j++){
            if(a[i]==b[j]){
                a1+=a[i];
                a[i]='@';
                b[j]='#';
            }
        }
    }
    sort(a1.begin(),a1.end());
    return a1;
}

// from: Papa & Ram
// Time limit exceeded
// Dumb logic and Times Out since uses slower C++ style i/o
int main()
{
    std::ios_base::sync_with_stdio(false), cin.tie(0) , cout.tie(0);
    string s1,s2;
    cin >> s1 >> s2;
	while(!s1.empty()){
        cout << inter(s1,s2) << endl;
        cin >> s1 >> s2;
	}
    return 0;
}

// from: https://github.com/esbanarango/Competitive-Programming/blob/master/UVa/10252%20-%20Common%20Permutation.cpp
// Accepted
// Smart logic, passes even though it uses slower C++ style i/o
int main3(){
    string a,b;

    while(getline (cin,a)){
          getline (cin,b);
          int tamA=a.size();
          int tamB=b.size();
          sort(a.begin(), a.end());
          sort(b.begin(), b.end());
          if (a == b){
             cout << a << endl;
             continue;
          }
          string k="";
          for(int i=0, j=0;i<tamA && j<tamB;){
            if(a[i]==b[j]){
                     k+= a[i];
                     i++;
                     j++;
            }else{
                  while (a[i] < b[j]){
                        ++i;
                        if (i == tamA) break;
                  }
                  while (b[j] < a[i]){
                        ++j;
                        if (j == tamB) break;
                  }
            }
          }
          cout<<k<<endl;
    }

 return 0;
}


// from: https://codingstrife.wordpress.com/2013/07/23/solution-uva10252-pc110303-common-permutation/
// Accepted
// Dumb logic but Accepted since uses C-style i/o
int main2()
{
    char a[1001];
    char b[1001];
    while(gets(a))
    {

        gets(b);

        string subSequence="";

        for (int i=0; i < strlen(a); i++)
            for (int j=0; j<strlen(b); j++) if (a[i] == b[j])subSequence += a[i],a[i] = '*', b[j] = '&';

        sort(subSequence.begin(),subSequence.end());
        cout << subSequence << endl;
    }

    return 0;
}


