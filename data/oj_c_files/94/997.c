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

//********************************************
//??????
/*???????N????500?????????
?????????????????*/
//********************************************
int main()
{
   int N,a[500]={0},i,j;//a[]??????,i?j????
   int b[500]={0},p;    //b[]????,p????
   cin>>N;
   for(i=0;i<N;i++)
   {
	   cin>>a[i];
	   if(a[i]%2!=0)
		   b[i]=a[i];
   }
   for(j=0;j<N;j++)           //?????????
   {
      for(i=0;i<N-j;i++)      //????
	  {
	     if(b[i]>b[i+1])      //??????
		 {
		    p=b[i];
			b[i]=b[i+1];
			b[i+1]=p;
		 }
	  }
   }
   for(i=0;i<=N;i++)         
   {
      if(b[i]!=0&&i!=N)
		  cout<<b[i]<<',';         //??????b[]
	  else if(b[i]!=0&&i==N)
		  cout<<b[i];              //?????
   }
   return 0;
}