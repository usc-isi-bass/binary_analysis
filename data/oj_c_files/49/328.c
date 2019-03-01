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
	char s[501];
	int i,j,k,p,len;
	scanf("%s",s);
	len=strlen(s);
	for(k=2;k<len;k++)
	for(i=0;i<=len-k;i++)
	{
		for(j=i;j<i+k/2;j++)
		if(s[j]!=s[2*i+k-1-j])break;
		if(j==i+k/2)
		{
			for(p=i;p<i+k;p++)
			printf("%c",s[p]);
			printf("\n");
		}
	}
	return 0;
}
		
