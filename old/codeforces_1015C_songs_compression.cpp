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

int main ()
{
    std::ios_base::sync_with_stdio(false), cin.tie(0) , cout.tie(0);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    int n,s,a,b,suma=0,sumb=0;
    vector<pair<int,int>> vp;
    cin >> n >> s;
    for(int i=0;i<n;i++)
    {
        cin >> a >> b;
        vp.push_back(make_pair(a,b));
        suma+=a;
        sumb+=b;
    }

    //check if it will fit without any compression
    //sum all a's - already done
    if(suma<=s)
    {
        cout << 0;
        return 0;
    }


    //check if it won't fit even if we compress everything
    //sum all b's
    if(sumb>s)
    {
        cout << -1;
        return 0;
    }

    // compressed size of all files exactly fits into flash drive
    if(sumb==s)
    {
        cout << n;
        return 0;
    }

    int d = suma - s; //difference to be covered by compression
    int rs=0; //running sum

    vector<int> dv;  // difference vector
    for(int i=0;i<n;i++)
        dv.push_back(vp[i].first - vp[i].second);

    sort(dv.begin(),dv.end());

    for(int i=0;i<n;i++)
    {
        rs+=dv[n-i-1];
        if(rs>=d)
        {
            cout << i+1;
            return 0;
        }
    }
    cout << "something wrong" << endl;

    return 0;
}
