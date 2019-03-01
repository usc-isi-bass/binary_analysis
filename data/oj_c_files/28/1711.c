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
	char *str;
	int n,num[128]={0},i=0,j,k=1;
	char *p;
	
	str = (char *)malloc(1000*sizeof(char));
	gets(str);
	
	for(p=str;*p!='\0';p++){
		if(*(p-1)==' '&&*p!=' ') k++;
	}
	
	for(p=str;*p!='\0';p++){
		if (*p!=' '&&i==0) {
			num[0]++;
			continue;
		}
		if (*p!=' ') num[i]++;
		if (*p==' '&&*(p+1)!=' '){
			i++;
		}
	}
	
	for (j=0;j<k-1;j++){
		printf("%d,",num[j]);
	}
	printf("%d",num[j]);

}
	
