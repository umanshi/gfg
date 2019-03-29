#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (auto i = (a); i <= (b); i++)
#define NFOR(i,a,b) for(auto i = (a); i >= (b); i++)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(c) (c).begin(),(c).end()
#define allr(c) (c).rbegin(),(c).rend()
#define max3(a,b,c) (max(max(a,b),c))
#define min3(a,b,c) (min(min(a,b),c))
#define pii pair<int,int>
typedef long double ld;
typedef long long int ll;
ll gcd(ll x,ll y){if(!x||!y) return x+y; return x%y==0?y:gcd(y,x%y);}
ll lcm(ll x,ll y){return x*(y/gcd(x,y));}
void printA(ll A[], ll n){for(ll i=0;i<n; i++) cout<<A[i]<<" "; cout<<endl;}

bool comp(pii &p1, pii &p2)
{   // GIVE THE CONDITION WHERE P1 < P2 
	if(p1.S > p2.S) return true;
    else if(p1.S == p2.S) 
	{
	    return ((p1.first) < (p2.first));
	}
	else return false;
    
    /*if (p1.second == p2.second) 
        return p1.first < p2.first; 
    return p1.second > p2.second; 
    */
}
int main()
{
	int T; cin>>T;
	while(T--)
	{
		int n; cin>>n;
		vector<int> A(n);
		for (int i=0; i<n; i++) cin>>A[i];
		
		map<int, int> elt_freq_m;
		for(int i=0; i<n; i++)
		{
		    elt_freq_m[A[i]]++;
		}
		
		// Create an array of pairs and sort it.
		
		vector<pair<int, int> >p(elt_freq_m.size());
	    
	    for( auto i: elt_freq_m)
	    {
	        p.pb(make_pair(i.first, i.second));     
	    }
	    sort(p.begin(), p.end(), comp);
        for(auto it: p)
        {
            for(int i=0; i<it.second; i++)
                cout<<it.first<<" ";
        }
        cout<<endl;
        A.clear(); p.clear();
	}
	return 0;
}
