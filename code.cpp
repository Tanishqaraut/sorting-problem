#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	int n,packet=0;
	vector<long>v;
	int x;
	int ans;
	
	cout<<"\nEnter number of test cases:";
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cout<<"\n******************* Testcase "<<(i+1)<<" **************************";
	    cout<<"\nEnter the number of packets : ";
		cin>>n;
		cout<<"\nEnter the size of each packets : ";
		for(int i=0;i<n;i++)
		{
		    
			cin>>x;
			v.push_back(x);
		}
		//sort the size of packets
		sort(v.begin(),v.end());
		for(int i=0;i<n;i++)
		{
		    //Find occurence of similar size of packets
			ans=count(v.begin(),v.end(),v[i]);
			if(ans>packet)
			{
				packet=ans;
			}
		}
		cout<<"________________________________________"<<endl;
		cout<<"\nMinimum number of packets will be : ";
		cout<<packet<<"\n";
		cout<<"________________________________________"<<endl;
		packet=0;
		v.clear();
	}
	return 0;
}
