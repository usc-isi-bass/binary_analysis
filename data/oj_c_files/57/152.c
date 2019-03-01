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
	int n,i,m;
	char str[50] ,s[50][50];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		gets(str);
		m=strlen(str)-2;
		s[i][m]=0;
		strncpy(s[i],str,m);
		
	    if(s[i][m-1]==105)
		{
			s[i][m-1]=0;
			strncpy(s[i],str,m-1);
			
		}
		
	}
	for(i=0;i<n;i++)
		printf("%s\n",s[i]);
	return 0;
	
}