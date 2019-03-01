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
	char s[60],w[60],temp[60];
	int i,n,m,j,t;

	scanf("%s%s",s,w);
    n=strlen(w);
	m=strlen(s);

	for(i=0;i<n;i++)
	{
		temp[0]='\0';
		t=1;
		for(j=0;j<m;j++)
		  if(s[j]!=w[i+j])
		  {
		      t=0;
			  break;
		  }
		if(t)
			break;
		
	}

	printf("%d",i);

    return 0;
}