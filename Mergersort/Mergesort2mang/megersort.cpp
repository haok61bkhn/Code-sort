#include<bits/stdc++.h>
using namespace std;
list<int> a1,b1,c;
int n,i,j,m,x;

void mergesort(list<int> a,list<int> b)
{  list<int> :: iterator x=a.begin(),y=b.begin();
  
     while(!a.empty() and !b.empty())
        { 
        	if(*x>*y) 
        	  { 
			    c.push_back(*y);
        	    b.pop_front();
        	    y=b.begin();
        	   // cout<<*y<<" ";
			   } 
        	else
        	  { 
        	  	c.push_back(*x);
        	  	a.pop_front();
        	  	x=a.begin();
        	  }
        }
        
    if(!a.empty()) 
        { for(x=a.begin();x!=a.end();x++)
           c.push_back(*x);
        }
     else mergesort(b,a);
}
//======================================== 
main()
{
    srand((unsigned) time(NULL));
	cin>>n;
	for(i=1;i<=n;i++)
	   {
	   	  //cin>>x;
	   	  x=rand()%50;
	   	  cout<<x<<" ";
	   	  a1.push_back(x);
	   }
	   cout<<"\n";
	   a1.sort();
	cin>>m;
	for(i=1;i<=m;i++)
	   {
	   	x=rand()%50;
	   	cout<<x<<" ";
	   	b1.push_back(x);
	   	}
	 b1.sort();

	mergesort(a1,b1);
	cout<<"\n";
   list<int>::iterator x=c.begin();
    for(;x!=c.end();x++)
       cout<<*x<<" ";
}
	   	

