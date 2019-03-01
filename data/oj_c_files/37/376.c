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
	int i,j,k,n,l,o;
	char (*s)[100],m;
	scanf("%d",&n);
	scanf("%d",&n);
	s=(char (*)[100])malloc(sizeof(char)*n);
	for(i=0;i<n;i++) gets(*(s+i));
	for(i=0;i<n;i++)
	{
		o=0;
		for(j=0;*(*(s+i)+j)!='\0';j++)
		{
			l=0;
			m=*(*(s+i)+j);
			for(k=0;*(*(s+i)+k)!='\0';k++)
			{
				if(m!=*(*(s+i)+k)||k==j) l=0;
				else {l=1;break;}
			}
			if(l==0) {printf("%c\n",m);o=1;break;}
		}
		if(o==0) printf("no\n");
	}
}
