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
	char a[100];
	int b[100],c[100];
	int i,n,j=0,k=0;
	scanf("%s",a);
	for(i=0;i<strlen(a);i++){
		if((a[i]=='(')||(a[i]=='{')||(a[i]=='[')||(a[i]=='<'))
			b[j++]=i;
		else if((a[i]==')')||(a[i]==']')||(a[i]=='}')||(a[i]=='>')){
			c[k++]=b[j-1];
			c[k++]=i;
			j--;
		}
	}
	for(i=0;i<strlen(a);i++){
		if(!(i%2))
			printf("%d ",c[i]);
		else
			printf("%d\n",c[i]);
	}
	return 0;
}