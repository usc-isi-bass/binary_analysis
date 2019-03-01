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
	int a[300]={0},len,num=0,n=0,i,j;
	char s[30000];
	gets(s);
	len=strlen(s);
	for(i=0;i<len;i++){
		if(s[i]!=' '){
			n++;
			if(i==len-1){
				a[num]=n;
			}
		}
		else if((s[i]==' ')&&(s[i-1]!=' ')){
			num++;
			a[num-1]=n;
			n=0;
		}
	}
	printf("%d",a[0]);
	if(num>1){
		for(j=1;j<=num;j++){
			printf(",%d",a[j]);
		}
	}
	return 0;
}