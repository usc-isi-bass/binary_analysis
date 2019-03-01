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
	int n,i,len,j;
	char s[1000][255];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",s[i]);
		len=strlen(s[i]);
		for(j=0;j<len-1;j++)
		{
			if(s[i][j]=='A') printf("T");
            else if(s[i][j]=='T') printf("A");
            else if(s[i][j]=='G') printf("C");
            else if(s[i][j]=='C') printf("G");
		}
            if(s[i][len-1]=='A') printf("T\n");
            else if(s[i][len-1]=='T') printf("A\n");
            else if(s[i][len-1]=='G') printf("C\n");
            else if(s[i][len-1]=='C') printf("G\n");

	}
	return 0;
}
