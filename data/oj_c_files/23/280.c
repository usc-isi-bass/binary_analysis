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
	char st[100],swst[20][20];//st is the sentence(without commar and period)
	int i,j,k=1,t;
	gets(st);
	for(i=1;;i++){
		for(j=1;;j++)
		{
            if(st[k-1]!=' '&&st[k-1]!='\0')
			{
				swst[i-1][j-1]=st[k-1];
				k++;
			}
			if(st[k-1]==' '||st[k-1]=='\0')
			{
				swst[i-1][j]='\0';
				k++;
				break;
			}
		}
		if(st[k-2]=='\0')break;
	}
	printf("%s",swst[i-1]);

	for(t=i-2;t>=0;t--)
		printf(" %s",swst[t]);
	printf("\n");
	return 0;
}