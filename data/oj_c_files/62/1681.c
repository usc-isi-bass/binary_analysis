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
	char a[200],c[200];
	int i,j=0,n;
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++){
		if((a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122)){
			j++;
			c[j]=a[i];
		}
		else if(a[i]==' '){
			if(a[i+1]!=' '){
				j++;
				c[j]=a[i];
			}
		}
		else{
			j++;
			c[j]=a[i];
		}
	}
	for(i=1;i<=j;i++)
	printf("%c",c[i]);
}

