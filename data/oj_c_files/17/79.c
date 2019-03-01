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


int main(){
	int n,i,j,k,l;
	char as[110],bs[110],cs[110];
	for(k=0;;k++)
	{
		scanf("%s",as);
		int len=strlen(as);
		if(strcmp(as,bs)==0)
			break;
		strcpy(bs,as);
		for(i=0;i<len;i++)
		cs[i]=' ';
		cs[len]=0;
		for(l=0;l<len;l++)
		{
		for(i=l;i<len;i++)
		{
			if(as[i]==')')
			{
				for(j=i;j>=0;j--)
				{
					if(as[j]=='(')
					{
						as[i]=' ';
						as[j]=' ';
						j=0;
						i=0;
					}
				}
			}
		}
		}
		for(i=0;i<len;i++)
		{
			if(as[i]=='(')
				cs[i]='$';
			else if(as[i]==')')
				cs[i]='?';
		}
		printf("%s\n%s\n",bs,cs);
		strcpy(bs,as);
	}
	return 0;
}