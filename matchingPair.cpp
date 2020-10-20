#include <bits/stdc++.h>
using namespace std;
int match_pair(int arr[],int n)
{ 
	int pair=0,k;
    unordered_map<int, int> mp; 
    for (int i = 0; i < n; i++) 
        mp[arr[i]]++; 
        
    for (auto x : mp) 
        {
        	k=x.second;
        	if(k%2==0)
        	pair+=k/2;
        	if(k%2!=0&&k!=1)
        		pair+=(k-1)/2;
         }
       return pair;
}
int main() {
	int arr[1000];
	int n,pair;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>arr[i];
	cout<<"matching pair is "<<match_pair(arr,n);
	return 0;
}
