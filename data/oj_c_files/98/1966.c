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
	int n,i,l[1000],t=0;
	char word[1000][41];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",&word[i]);
		l[i]=(int)strlen(word[i]);
	}
	for(i=0;i<n-1;i++)
	{
		t+=l[i];
		if(t<80) 
		{
			printf("%s",word[i]);
			t+=1;
		}
		else if(t==80) 
		{
			printf("%s\n",word[i]);
			t=0;
		}
		else
		{
			printf("\n");
			t=0;
			i-=1;
		}
		if(t+l[i+1]<=80 && t!=0) printf(" ");
	}
	printf("%s",word[i]);
	return 0;
}



