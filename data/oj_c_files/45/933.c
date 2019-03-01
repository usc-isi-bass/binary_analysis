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
	int lens,lenw;
	char s[50],w[50];
	scanf("%s%s",s,w);
	lens=strlen(s);
	lenw=strlen(w);
	int k=0,j=0,i=0;
	for(;;i++)
	{
		if(k==0&&s[j]==w[i])
		{
			if(lens==1)
			{
				printf("0\n");
				break;
			}
			else
			{
				k++;
				j++;}}
		else if(k!=0&&s[j]!=w[i])
		{
			k=0;
			j=0;}
		else if(k!=0&&s[j]==w[i])
		{
			if(j==lens-1)
			{
				printf("%d\n",i-j);
				break;
			}
			else
			{
				k++;
				j++;
			}
		}
	}
	return 0;
}
		
