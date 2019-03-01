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
    char str[8000];
	gets(str);
	int l=strlen(str),i,num=0,len[800]={0},word;
	for(i=0;i<l;i++)
	{
		if(str[i]==' ') word=0;
		else word=1;
		if(word==1) len[num]=len[num]+1;
		else if(word==0&&i>0&&str[i-1]!=' ') num=num+1;
	}
	printf("%d",len[0]);
	int j=1;
	while(len[j]!=0)
	{
		printf(",%d",len[j]);
		j=j+1;
	}
}