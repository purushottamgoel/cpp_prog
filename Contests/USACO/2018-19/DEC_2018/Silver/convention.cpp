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


using namespace std;

vector<int> v;

int main ()
{
//    std::ios_base::sync_with_stdio(false), cin.tie(0) , cout.tie(0);
//    freopen("convention.in", "r", stdin);
//    freopen("convention.out", "w", stdout);
  int n,m,c,r;
  cin >> n >> m >> c;
  for(int i=0;i<n;i++){
    cin >> x;
    v.push_back(x);
  }
  sort(v.begin(),v.end());
  r=v.back()-v[0];
  cout << r;
  
  
    

  return 0;
}

