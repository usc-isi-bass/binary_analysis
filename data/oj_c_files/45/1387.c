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
	char s[50],w[50];
	scanf("%s %s",s,w);
	int sl,wl,i,j,p;
	sl=strlen(s);
	wl=strlen(w);
	for(i=0,j=0;i<wl,j<sl;)
	{
		if(s[j]!=w[i])
		{
			i++;
			continue;
		}
		if(s[j]==w[i])
		{
			p=i;
			j++;
			i++;
			
		}
	}
	p=p-sl+1;
	if(j==sl) printf("%d",p);
}