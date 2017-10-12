#include<bits/stdc++.h>
using namespace std;
int y,n,i;
list<int>a;
main()
{
	cin>>n;
	for(i=1;i<=n;i++)
	   {
	   	cin>>y;
	   	a.push_back(y);
	   }
	a.sort();
	list<int>::iterator x=a.begin();
	  for(;x!=a.end();x++)
	     cout<<*x<<" ";
}
