#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int T; cin>>T;
	while(T--)
	{
	    int n,m; cin>>n>>m;
	    int A1[n]; int A2[m];
	    for(int i=0; i<n; i++) cin>>A1[i];
	    for(int i=0; i<m; i++) cin>>A2[i];
	    
	    map<int, int> mp;
	    vector<int> v;
	    for(int i=0; i<n; i++)
	        mp[A1[i]]++;
	        
	    for(int i=0; i<m; i++)
	    {
	        if(mp.find(A2[i])!=mp.end())
	        { 
	            for(int j=0; j<mp[A2[i]]; j++)
	                v.push_back(A2[i]);
	                
	            mp.erase(A2[i]);
	        }
	    }
	    for(auto x: mp)
	    {
	         for(int i=0; i<x.second; i++)
	                v.push_back(x.first);
	    }
	    for(int i: v)
	    {
	        cout<<i<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
