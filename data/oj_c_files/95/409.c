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
{ char s[80];
  char q[80];
  int i;
  gets(s);
  gets(q);
 for( i=0;i<=80;i++)
 {
	 if(s[i]>=65&&s[i]<=90)
	 {
		 s[i]=s[i]+32;
	 }
	
	 else if(s[i]==0)
	 {
		 break;
	 }
 }
  for( i=0;i<=80;i++)
 {
	 if(q[i]>=65&&q[i]<=90)
	 {
		 q[i]=q[i]+32;
	 }
	
	 else if(q[i]==0)
	 {
		 break;
	 }
 }

  for( i=0;i<=80;i++)
  {
	
	   if(s[i]>q[i])
	  {printf(">"); 
	   break;

	  }
	  else if(s[i]<q[i])
	  {printf("<");	 
	  break;
	  }
	  else if(s[i]==q[i]&&s[i]==0)
	  {
		  printf("=");
		  break;
	  }
  }

   return 0;


}