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
	char a[10000];
	int b[400],c,i,k,tag[10000]={0};
	gets(a);
	i=0;
	while(a[i]!='\0')
	{
		if(a[i]==' ') tag[i]=1;
		i++;
	}
	tag[i]=1;
	i=0;c=-1;k=0;
	while(a[i])
	{
		if(tag[i]==1&&tag[i+1]==0) c=i;
		if(tag[i]==0&&tag[i+1]==1) {b[k]=i-c;k++;}
		i++;
	}
	printf("%d",b[0]);
	for(i=1;i<k;i++)
		printf(",%d",b[i]);
	printf("\n");
}