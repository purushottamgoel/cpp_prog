#include<iostream>
#include<fstream>
#include<sstream>
#include<cmath>
#include<cstdlib>
#include<string>
#include<list>
#include<vector>
#include<algorithm>
#include<stdexcept>

using namespace std;

class place
{
public:
    string city;
	int id;
};

// fn output (bool) basically tells us whether the passed “first” argument should be placed before the passed “second” argument or not
bool compare_city(place p1, place p2)
{
    return (p1.city < p2.city);
	
	// alternate "easy" code
	// if(p1.city < p2.city)
	// 	 return true;
	// else
	// 	 return false;
}

bool compare_id(place p1, place p2)
{
    return (p1.id < p2.id);
}

int main()
{
    vector<place> v;
    int n,ans;
    place p,p1,px;

	cout << "enter # of places, and then those places each represented as as string and int" << endl;
	cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> p.city >>  p.id;
        v.push_back(p);
    }

    // compare by city
	sort(v.begin(),v.end(),compare_city);

	cout << endl << "sorted by city" << endl;
    for(int i=0; i<n; i++)
    {
        p1=v[i];
		cout << p1.city << " " << " " << p1.id << endl;
    }

    sort(v.begin(),v.end(),compare_id);

	cout << endl << "sorted by id" << endl;
    for(int i=0; i<n; i++)
    {
        p1=v[i];
        cout << p1.city << " " << " " << p1.id << endl;
    }


    return 0;
}
