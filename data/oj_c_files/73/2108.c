#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
  int i,j,x,r,row,colum,k,p=0,a[5][5];
  for (i=0;i<=4;i++)
  {
	  for(j=0;j<=4;j++)
	  {
		  cin>>x;
	      a[i][j]=x;
	  }
  }
 // cout<<"1";
  for (i=0;i<=4;i++)
  {
		r = a[i][0];
		row = i;
		colum = 0;
	  for (j=0;j<=4;j++)
      {
		  if (a[i][j]>r)
		  {
			  r=a[i][j];
			  row=i;
			  colum=j;
			  
		  }
	  }
	  //cout<<"r:"<<r<<endl;
		  k=a[0][colum];
       for (int z=0;z<=4;z++)
		 {
		   if(a[z][colum]<k)
		   k=a[z][colum];
		 }
		// cout<<"k:"<<k<<endl;
	 if(k==r)
		   { 
		 cout<<row+1<<" "<<colum+1<<" "<<k;
		   p=1;
		   }
	 
  }
  if (p==0)
  {  cout<<"not found"; }
  cin>>i;
 return 0;
}