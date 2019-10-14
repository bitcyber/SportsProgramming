#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int> aa(n);
	for(int i=0;i<n;i++)
	{
		cin>>aa[i];
	}
	sort(aa.begin(),aa.end());
	int m;
	cin>>m;
	vector<int> bb(m);
	for(int i=0;i<m;i++)
	{
		cin>>bb[i];
	}
	sort(bb.begin(),bb.end());

	cout<<aa[n-1]<<" "<<bb[m-1];



}