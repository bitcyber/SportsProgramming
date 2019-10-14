#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int> aa(n);
	int c_z,c_n,c_p;
	c_z=0;
	c_n=0;
	c_p=0;
	long int total_n=0;
	long int total_p=0;
	for(int i=0;i<n;i++)
	{
		cin>>aa[i];
		if(aa[i]==0)
			{
				c_z++;
				}
		else if(aa[i]<0)
			{
				c_n++;
				total_n+=(aa[i]+1);
				}
		else
			{
				c_p++;
				total_p+=(aa[i]-1);
				}
	}

long int final_ans=0;
	if(c_n%2==0)
	{
		final_ans=(-1)*total_n + total_p+ c_z;
	}
	else
	{
		if(c_z>=1 && total_n<-1)
			{final_ans=(-1)*total_n + total_p+ c_z+1;}
		else
		{
			final_ans=(-1)*total_n + total_p+ c_z+2;
		}
	}

cout<<final_ans;


}