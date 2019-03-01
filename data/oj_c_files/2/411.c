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
	int no;
	char author[26];
}ji[1000];

main()
{
	int n,i,j,len,a[26][1000],e,b[26]={0},max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%s",&ji[i].no,ji[i].author);
		len=strlen(ji[i].author);
		for(j=0;j<len;j++)
		{
			e=ji[i].author[j];
			e=e-65;
			a[e][b[e]]=ji[i].no;
			b[e]=b[e]+1;
		}
	}
	for(i=0;i<26;i++)
		if(b[max]<b[i])
			max=i;
	printf("%c\n%d\n",max+65,b[max]);
	for(i=0;i<b[max];i++)
		printf("%d\n",a[max][i]);
	return 0;
}