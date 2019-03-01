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

void main()
{
 char a[101];
 int i,j,k,c,d=0,e=0,f=1;
 gets(a);
 c=strlen(a);
 for(i=0;a[i]!=' ';i++)
	 d=d+1;
 
 for(e==0,j=d+2;j<c;j++)
  {  if(a[0]=a[j])
	{ for(k=j,i=0;i<=d-1;k++,i++)
	    {
	     if(a[k]==a[i])e=1;
		 else e=0;
        }
 if(e==1&&f==1) {printf("%d\n",j-d-1);f++;}
    }
  }
  }  