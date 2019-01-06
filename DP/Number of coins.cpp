/*https://practice.geeksforgeeks.org/problems/number-of-coins/0
Given a value V. You have to make change for V cents, given that you have infinite supply of each of C{ C1, C2, .. , Cm} valued coins. Find the minimum number of coins to make the change.

Input:
The first line of input contains an integer T denoting the number of test cases. The first line of each test case is V and N, V is the value of cents and N is the number of coins. The second line of each test case contains N input C[i], value of available coins.

Output:
Print the minimum number of coins to make the change, if not possible print "-1".

Constraints:
1 ≤ T ≤ 100
1 ≤ V ≤ 106
1 ≤ N ≤ 106
1 ≤ C[i] ≤ 106

Example:
Input:
1
7 2
2 1

Output:
4

Explanation :
Testcase 1: We can use coin with value 2 three times, and coin with value 1 one times to change a total of 7.
*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int t,v,n;

    cin>>t;
    while(t--)
    {
        cin>>v>>n; 
        int c[n]; 
        for(int i=0;i<n;i++) cin>>c[i];
        int num[v+1] ; 
        for(int i=0; i<v+1; i++) num[i] = INT_MAX;
        num[0] = 0; 
        for(int i=1; i<=v; i++)
        {   for(int j=0; j<n; j++)
            {   int val;
                if(i>=c[j] && num[i-c[j]]!=INT_MAX)
                {   val = num[i-c[j]];
                    if(1+val<num[i])
                        num[i] = 1+val;
                }
            }
        }
        if(num[v]==INT_MAX) cout<<"-1"<<endl;
        else
        cout<<num[v]<<endl;
    }
	return 0;
}
