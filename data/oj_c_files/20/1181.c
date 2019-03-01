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

main()
{
	char str[11]={'\0'},sub[4];
		while (scanf("%s %s",str,sub)!=EOF) 
		{
		char fi[15]={'\0'},a[10]={'\0'};
		int i,j,k,n=strlen(str);
		char c=str[0];
		for (i=1;i<n;i++)
		if (str[i]>c) c=str[i];
		for (j=0;;j++)
        {
			fi[j]=str[j];
		    if(str[j]==c) break;
		}
		for (k=j+1;k<n;k++)
		a[k-j-1]=str[k];
		strcat(fi,sub);
		strcat(fi,a);
		printf("%s\n",fi);
		}
	return 0;
}