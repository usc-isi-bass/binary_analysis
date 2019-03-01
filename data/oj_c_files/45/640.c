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
	int slen,wlen,total,i,j,k;
	scanf("%s",s);
	scanf("%s",w);
	slen=strlen(s);
	wlen=strlen(w);
	for(i=0;i<=wlen-slen;i++)
	{
		if(s[0]==w[i])
		{
			total=0;
			for(j=i,k=0;j<=slen+i-1;j++,k++)
			{
				if(s[k]==w[j])
					total++;
			}
			if(total==slen)
			{
				printf("%d",i);
				break;
			}
		}
	}
}







