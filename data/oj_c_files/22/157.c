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
	char s[1500];
	int i,j,k,l,m,n;
	scanf("%s",s);n=0;j=0;k=0;l=0;
	for(i=0;s[i];i++)
	{
		if( s[i]>='0' && s[i]<='9') j=j*10+s[i]-'0';
			else 
			{ 
				n++;
				if( j>k) {l=k;k=j;}
				else if(j<k && j>l) l=j;
				j=0;
			}
	}
	if( j>k) {l=k;k=j;}
				else if(j<k && j>l) l=j;
	if(l==0) printf("No");
	else printf("%d",l);
}