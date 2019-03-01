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
	int x[16],a,b,i,k;
    
	while (1) 
	{


    for (i=0;i<16;i++) 
	{
	 scanf ("%d",&x[i]);
	  if (x[i]==0) 
	  {
	   a=i;
	   break;
	 
	  }
	 
	}
    if (x[0]==-1)
	 {
	 
	 break;
	 
	 }
    int s=0;
    for (k=0;k<a;k++) 
	{
	  for (i=0;i<a;i++) 
	  {
	  if (x[k]==2*x[i]) 
	  {
	  s++;
	  }
	  
	  }
	
	} 
    printf ("%d\n",s);
    }

	return 0;
}
