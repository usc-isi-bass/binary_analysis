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

struct book
{
	int ISBN;
	char name[26];
}b[999];
int main()
{
	int i,j,m,k[26],max=0;
	char a,d='A';
	for(i=0;i<26;i++)
		k[i]=0;
	scanf("%d",&m);
	for(i=0;i<m;i++)
		scanf("%d%s",&b[i].ISBN,b[i].name);
	for(a='A';a<='Z';a++)
		for(i=0;i<m;i++)
			for(j=0;j<26;j++)
				if(b[i].name[j]==a)
					k[a-'A']++;	
	for(i=0;i<26;i++)
		if(k[i]>=max)
			max=k[i];
	for(i=0;i<26;i++)
		if(k[i]==max)
		{
			d+=i;
			printf("%c\n",d);
			printf("%d\n",max);		
		}
	for(i=0;i<m;i++)
		for(j=0;j<26;j++)
			if(b[i].name[j]==d)
				printf("%d\n",b[i].ISBN);
	return 0;
}