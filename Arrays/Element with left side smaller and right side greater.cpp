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
void printA(int A[], int n){for(int i=0;i<n; i++) cout<<A[i]<<" "; cout<<endl;}

int main()
{
	int T; cin>>T;
	while(T--)
	{
		int n; cin>>n; int A[n];
		FOR(i,0,n-1) cin>>A[i];
		int leftMax[n]; int rightMin[n];
		int lm = A[0];
		FOR(i,0,n-1) 
		{
		    if(lm<A[i])
		        lm = A[i];
		    leftMax[i] = lm;
		}
		int rm = A[n-1];
		for(int i=n-1; i>=0; i--)
		{
		    if(A[i]<=rm)
		        rm = A[i];
		    rightMin[i] = rm;      
		}
		int ans = -1;
		
		FOR(i,1,n-2)
		{   if(leftMax[i] == rightMin[i])
	               {     ans = i;
	                    break;
	               }
		}            
	    if(ans == -1) cout<<ans<<endl;
	    else
	   cout<<A[ans]<<endl;
	}
	return 0;
}
