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
	char str[100],word[100]={'0'},change[100],chafor[100];//word?????????????,change?????????,chafor????????
	char a[100][100]={{'0'},{'0'}};
	int i,j,len,m,start=0,num=1;//num?????????

	gets(str);
	gets(change);
	gets(chafor);
	len=strlen(str);
	for(i=0;i<len;i++)//??????????????
	{
		if(str[i]==' ')
			num+=1;

	}
	for(i=0;i<num;i++)
	{
		m=0;
		for(j=start;j<len;j++)//start????????????
		{
			if(str[j]!=' ')
			{
				a[i][m]=str[j];
				m+=1;
			}
			else
			{
				start=j+1;
				break;
			}
		}	
	}
	for(i=0;i<num;i++)
	{
		if(strcmp(a[i],change)==0)
			strcpy(a[i],chafor);
	}
	printf("%s",a[0]);
	for(i=1;i<num;i++)
		printf(" %s",a[i]);
	return 0;
}
