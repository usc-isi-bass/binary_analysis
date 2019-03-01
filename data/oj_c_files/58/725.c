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
	int i,j=0,t,n,r;
    char str[100]={0};
    scanf("%d",&n);
	getchar();
	do{
		r=0;
		gets(str);
        t=strlen(str);
		for(i=0;i<t;i++)
		{
			if(i==0)
			{
				if(str[i]=='_')
					r++;
				if(str[i]>96&&str[i]<123)
					r++;
				if(str[i]>64&&str[i]<91)
					r++;
			}
			else
			{
				if(str[i]=='_')
					r++;
				if(str[i]>96&&str[i]<123)
					r++;
				if(str[i]>64&&str[i]<91)
					r++;
				if(str[i]>47&&str[i]<58)
					r++;
			}
		}
		if(r==t)
			printf("1\n");
		else
			printf("0\n");
		j++;
	}while(j<n);
	return 0;
}




