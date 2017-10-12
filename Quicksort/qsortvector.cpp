#include<bits/stdc++.h>
using namespace std;
int n,i,x;
vector<int> a;
int main()
{ freopen("int.txt","r",stdin);
	cin>>n;
	for(i=0;i<n;i++)
	{
	   cin>>x;
	   a.push_back(x);
	}
	vector<int>::iterator x=a.begin(); 
	sort(x,a.end());

	x=a.begin();

	for(;x<a.end();x++)
	  cout<<*x<<" ";
	  	return 0;

}

