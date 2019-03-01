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
char s[50], w[50];

int i,n,j,flag= 0;
scanf("%s %s",w,s);


for (i=0; i<=(strlen(s)); i++,flag=0) {
	for(n=0,j=i;w[n];n++,j++){
		if(s[j]!=w[n]){
		flag=1;
		break;
		}
	}
	if(flag) 
		continue;
	else{
		printf("%d",i);
		break;
		}
}
return 0;
}