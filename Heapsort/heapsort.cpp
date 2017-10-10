#include<bits/stdc++.h>
using namespace std;
int heap[1000],n,i,x,nheap;
void Downheap(int m)
{
  int k=m*2;
     if(k<=nheap)
       {
       	 if(heap[k+1]<heap[k] and k+1<=nheap) k++;
       	   if(heap[m]>heap[k])
       	      {
       	      	swap(heap[k],heap[m]);
       	      	Downheap(k);
       	      }
       	}
}
//============================
void Upheap(int m)
{
	if(m>1 and heap[m]<heap[m/2])
	  {
	  	swap(heap[m],heap[m/2]);
	  	Upheap(m/2);
	   }
}

//===========================
void Update(int m)
{
	nheap++;
	heap[nheap]=m;
	Upheap(nheap);
}

//===============================
void Init()
{ freopen("int.txt","r",stdin);
	cin>>n;
	for(i=1;i<=n;i++)
	  {
	  	cin>>x;
	  	Update(x);
	  }
	while(nheap>0)
	  {
	  	cout<<heap[1]<<" ";
	  	swap(heap[nheap],heap[1]);
	  	nheap--;
	    Downheap(1);
	  }
}
main()
{
	Init();
}
