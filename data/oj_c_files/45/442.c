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
{char a[100],b[100],*p1,*p2;
int i,j,n,check=0;
scanf("%s",a);p1=a;
scanf("%s",b);p2=b;
  for(i=0;b[i]!='\0';i++)
    {
	  if(a[0]==b[i])
		{for(j=0;a[j]!='\0';j++)
			if(b[i+j]!=a[j]) break;
		if(a[j]=='\0') {check=1;n=i;break;}
		}
        
    }
  if(check==1) printf("%d",n);
	return 0;
}