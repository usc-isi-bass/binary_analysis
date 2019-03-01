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
	int n,i,j,k,len,time=0;
	char str[100000],*p=str;

	int cs[100000]={0};

	scanf("%d",&n);

	for(i=0;i<n;i++){
		scanf("%s",str);

		len=strlen(str);

		for(j=0;j<len;j++){
			for(k=0;k<len;k++){
				if(*(p+k)==*(p+j))
					cs[j]++;
			}
		}

		for(j=0;j<len;j++){
			if(cs[j]==1){
				printf("%c\n",*(p+j));
				break;
			}
		}

		time=0;

		for(j=0;j<len;j++){
			if(cs[j]>1)
				time++;
		}

		if(time==len)
			printf("no\n");

		for(j=0;j<len;j++)
			cs[j]=0;
		
	}

	return 0;
}
