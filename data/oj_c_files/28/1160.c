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

main()
{
    char s[10000];
    int n=0,i,j,wn[300]={0},wd=0,t=0;
    gets(s);
    strcat(s," ");
    for(i=0;s[i]!='\0';i++)
    {  if(s[i]==' ')
	 {
	  wd=0;
	  if(s[i-1]!=' '&&i>=1)wn[n]=i-t;
	 }
       else
	 {  if(wd==0)
	    { n++;
	      wd=1;
	      t=i;
	    }

	 }
    }
    for(i=1;i<n;i++)printf("%d,",wn[i]);
    printf("%d",wn[n]);
}