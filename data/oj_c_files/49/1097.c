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



void main()
{
	char str[MAX],sub1[MAX],sub2[MAX];
	int	len,i,j,k,l;//i length of substring, j head of substring

	gets(str);
	len=strlen(str);

	for(i=2;i<=len;i++){
		for(j=0;j<=len-i;j++){
			for(k=j,l=0;k<=i+j-1;k++,l++){
				sub1[l]=str[k];
				sub2[l]=str[i+2*j-1-k];
			}
			sub1[i]='\0';
			sub2[i]='\0';
			if(strcmp(sub1,sub2)==0)
				printf("%s\n",sub1);
		}
	}
}