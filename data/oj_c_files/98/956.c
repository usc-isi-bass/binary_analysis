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
{ char *string,a[100]={'\0'};
  int n=0,i=0,sum=0,t=1; 
  scanf("%d",&n);
  string=a;
  scanf("%s",string);
  sum=sum+strlen(string);
  for(i=1;i<=n;i++)
  {  printf("%s",string);
	 if(i<n) 
	 {scanf("%s",string);}
	 sum=sum+strlen(string)+1;
	 
	  if(sum>80) 
	  {sum=strlen(string);printf("\n");t=0;}
      if(i<n&&t!=0)
	  { printf(" ");
	  	  }
	 t=1;
  
  }

 return(0);
}