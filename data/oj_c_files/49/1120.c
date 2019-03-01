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
	char str[500]={0},result[500]={0};
	int i,j,sum,p,len,x;
	scanf("%s",str);
	len=strlen(str);
	for(i=1;i<=len;i++){//??
		for(j=0;j<=len-i;j++){//??
			x=-1;
			for(p=0;p<500;p++)
				result[p]='\0';
			for(p=j;p<i+j;p++){//??
				x++;
				result[x]=str[p];
			}
			sum=0;
			for(p=0;p<x+1;p++){
				if(result[p]!=result[x-p])
					break;
				else sum++;
			}
			if(sum==x+1&&strlen(result)!=1)
				printf("%s\n",result);
		}
	}
	return 0;
}

