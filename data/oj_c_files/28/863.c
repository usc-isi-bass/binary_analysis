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
	char zfc[3000];
	int board[300];
	int len=0;
	int count=0,i,j,l,k=0;
	gets(zfc);
	for(i=0;zfc[i]!='\0';i++)
	{
		for(l=0;l<32;l++)
		{
			if(zfc[i]==' '&&zfc[i+1]==' ')
			{
				for(j=i+1;zfc[j]!='\0';j++)
				{
					zfc[j]=zfc[j+1];
				}
			}
		}
	}
	len=strlen(zfc);
	for(i=0;zfc[i]!='\0';i++)
	{
		if(zfc[i]==' '&&zfc[i+1]!=' ')
		{
			count++;
		}
	}
	for(j=0;zfc[j]!='\0';j++)
	{
		if(zfc[j]==' '&&zfc[j+1]!=' ')
		{
			board[k]=j;
			k++;
		}
	}
	if(count==0)
	{
		printf("%d",len);
	}
	if(count>0)
	{
	printf("%d,",board[0]);
	for(i=0;i<count-1;i++)
	{
		printf("%d,",board[i+1]-board[i]-1);
	}
	printf("%d",len-board[count-1]-1);
	}
	return 0;
}