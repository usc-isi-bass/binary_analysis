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
{char s[1000];
int i,j,p,q;
scanf("%s",s);
for(i=0;;i++)
{if(s[i]=='\0')
break;

 else if(s[i]>='a')
	s[i]=s[i]-32;}
for(q=0;q<i;)
{j=q;p=1;
for(;;j++)
{if(s[j+1]==s[j])
{p=p+1;
continue;}
else
	break;}
q=q+p;
printf("(%c,%d)",s[j],p);}}
		
	
