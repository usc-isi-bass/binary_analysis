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
   int k,m,n,i,j,l,b[101][101],sum[1000];
   cin>>k;
   for(l=1;l<=k;l++)
   {
	   cin>>m>>n;
      for(i=1;i<=m;i++)   
	  {
	     for(j=1;j<=n;j++)
		 {
		 cin>>b[i][j];
		 }
	  }

     sum[l]=0;
     for(j=1;j<=n;j++)
		 sum[l]+=b[1][j];
	 for(j=1;j<=n;j++)
		 sum[l]+=b[m][j];
	 for(i=2;i<m;i++)
		 sum[l]+=b[i][1];
	 for(i=2;i<m;i++)
		 sum[l]+=b[i][n];

   }
 if(k==1)cout<<sum[1];
 else  
 { 
	 cout<<sum[1];
   for(l=2;l<=k;l++)
   {
	   cout<<endl;
   cout<<sum[l];
   }
   }
   return 0;
}