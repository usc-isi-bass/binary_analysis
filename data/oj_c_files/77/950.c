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
	char s[101];
	char temp[101][2];
	char t;
	int len,i,j,top=-1;
	memset(temp,0,sizeof(temp));
	gets(s);
	len = strlen(s);
	i=0;
	do
	{
		while(s[i]==s[0]&&s[i])
		{
			top++;
			temp[top][1] = s[i];
			temp[top][2] = i;
			i++;
		}
		printf("%d %d\n",temp[top][2],i);
		top--;
		i++;
	
	}while(top!=-1&&s[i]);

	return 0;
}
