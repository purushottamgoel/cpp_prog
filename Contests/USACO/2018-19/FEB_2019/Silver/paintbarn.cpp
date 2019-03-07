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

int v[1002][1002], w[1002][1002];

int main ()
{
//    std::ios_base::sync_with_stdio(false), cin.tie(0) , cout.tie(0);
    freopen("paintbarn.in", "r", stdin);
    freopen("paintbarn.out", "w", stdout);
	int n,k,x1,y1,x2,y2,c=0,ii;
	
	cin >> n >> k;
	for(int nn=0;nn<n;nn++)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		for(int i=y1;i<y2;i++)
		{
			v[x1][i]++;
			v[x2][i]--;
		}
	}
	
	for(int j=0;j<1001;j++){
		for(int i=0;i<1001;i++){
			if(i==0)
				ii=0;
			else
				ii=w[i-1][j];
			w[i][j] = ii+v[i][j];
		}
	}
	for(int i=0;i<1001;i++)
		for(int j=0;j<1001;j++)
			if(w[i][j] == k) c++;
	
	cout << c << endl;
    return 0;
}


