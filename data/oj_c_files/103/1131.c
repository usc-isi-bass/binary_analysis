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
	int i,len,sum;
	char temp,str[1000]={0};
	gets(str);
	len=strlen(str);
	for(i=0;i<len;i++)
		if(str[i]>=97)
			str[i]=str[i]-32;
	temp=str[0];
	sum=0;
	for(i=1;i<len;i++){
		if(str[i]!=temp){
			printf("(%c,%d)",str[i-1],sum+1);
			sum=0;
			temp=str[i];
		}
		else
			sum++;
	}
	printf("(%c,%d)",temp,sum+1);
	return 0;
}
