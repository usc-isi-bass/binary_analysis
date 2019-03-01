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
 { 
	char s[50],w[50];
	int i,j,m,k,ls,lw;
	scanf("%s %s",s,w);
	ls=strlen(s);
    lw=strlen(w);
    for(i=0;i<lw;i++)
	{
		m=i;
		if (s[0]!=w[i]) continue;
		for(j=0;j<ls;j++,i++)
		{
			if(s[j]!=w[i]) break;
			k=1;
		}
		if(k=1) break; 
	}
	printf("%d",m);
  return 0; 
} 


