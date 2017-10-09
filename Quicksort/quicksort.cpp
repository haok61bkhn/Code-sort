#include<bits/stdc++.h>
using namespace std;
int n,b[100];
void quicksort(int *a,int x,int y)
{  
   int i=x,j=y;
      	int Mid=a[(x+y)/2];
   while(i<=j)
     {
     	while(a[i]<Mid) i++;
     	while(a[j]>Mid) j--;
     	  if(i<=j)
     	    { swap(a[i],a[j]);
     	      i++;
     	      j--;
     	    }
      }
 if(i<y) quicksort(a,i,y);
 if(j>x) quicksort(a,x,j);
}
main()
{   freopen("int.txt","r",stdin);
	cin>>n;
	stack s;
	for(int i=1;i<=n;i++)
	  cin>>b[i];
	quicksort(b,1,n);
}
	
