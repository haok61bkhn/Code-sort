#include<bits/stdc++.h>
int a1[100],i,j,n,mid,k,b[100];
using namespace std;
//======================================
void Rsort(int a[],int x,int mid,int y)
{   
	i=x;j=mid+1;k=0;
	while(i<=mid and j<=y)
	   { k++;
	   	 if(a[i]<a[j]){b[k]=a[i];i++;} else{ b[k]=a[j];j++;	}
	   	}
	for(;i<=mid;i++) {k++;b[k]=a[i];}
	for(;j<=y;j++) {k++;b[k]=a[j];}	
	for(i=x;i<=y;i++) a[i]=b[i-x+1];
}	   	 
	
//=====================================
void Mergesort(int a[],int x,int y)
{
   if(x<y)
	 { 
	  int	mid=(x+y)/2;
	 	Mergesort(a,x,mid);
	 	Mergesort(a,mid+1,y);
  	 	Rsort(a,x,mid,y);
	 }
}
//=================================
main()
{
	cin>>n;
	srand((unsigned) time(NULL));
	for(i=1;i<=n;i++)
	  {
	  	a1[i]=rand()%100;
	  	cout<<a1[i]<<" ";
	  }
	  cout<<"\n";
	  
	Mergesort(a1,1,n);
	for(i=1;i<=n;i++)
	  cout<<a1[i]<<" ";
}
	  	
