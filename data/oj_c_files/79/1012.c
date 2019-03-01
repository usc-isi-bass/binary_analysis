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

int main(int argc, char* argv[])
{
	int n,m,i,p,s;
	int x[300];
	while (1)
	{
	 scanf ("%d%d",&n,&m);
	 if (n==0) 
	 {break;}
     if (m==1) {printf ("%d\n",n);}
	 for (i=0;i<n;i++)
	 {
      x[i]=1;
	 }
	 s=0;
	 p=n;
	 while (p>1) 
	 {  
	   
	    for (i=0;i<n;i++)
		{
	     s=s+x[i];
	     if (s==m) 
		 {
	      s=0;
	      x[i]=0;
	   
		 }
	   
		}
		p=0;
	    for (i=0;i<n;i++)
		{
	    p=p+x[i];
	 
	 
		}
	 
	 
	  }
	
	   
	 
	
	 	for (i=0;i<n;i++)
		{
		if (x[i]==1) {i++;printf ("%d\n",i);}
	
	
		}
	
	
	
	 
	}
	
	return 0;
}
