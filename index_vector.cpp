#include <iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main() 
{
	//code
	int t;
	cin>>t;
	vector<int>v;
	while(t--)
	{
	    int n;
	    cin>>n;
	    for(int i=0;i<n;i++)
	    {
	        int num;
	        cin>>num;
	        v.push_back(num);
	    }
	    int k;
	    cin>>k;
	    sort(v.begin(),v.end());
	    auto it1=lower_bound(v.begin(),v.end(),k);
	    auto it2=upper_bound(v.begin(),v.end(),k);
	    it2--;
	    int x=distance(v.begin(),it1);
	    int y=distance(v.begin(),it2);
	    cout<<x<<" "<<y<<endl;
	}
	return 0;
}
