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

int main()
{
	int T; cin>>T;
	while(T--)
	{
	    int n; cin>>n;
	    int A[n];
	    for(int i=0; i<n; i++) cin>>A[i];
	    int i; int ansPos;
	    for(i=0; i<n; )
	    {
	        while(A[i]!=i+1)
	        {
	            int rightPos = A[i]-1;
	            int currPos = i;
	            int temp = A[rightPos];
	            A[rightPos] = A[currPos];
	            A[currPos] = temp; // swapped
	            if(A[rightPos] == A[currPos])
	            {
	                ansPos = currPos;
	                break;
	            }
	        }
	        i++;
	    }
	    
        cout<<A[ansPos]<<" "<<ansPos+1<<endl;    	    
    }
	return 0;
}
