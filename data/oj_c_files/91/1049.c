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
    int i,n=0;
	char a[100],b[100];
    gets(a);
	for(i=0;i<100;i++){
		if(a[i]!='\0')
			n++;
		else
			break;
	}
	for(i=0;i<n;i++){
		if(i!=n-1){
             b[i]=a[i]+a[i+1];
			 printf("%c",b[i]);
		}
		else{
			b[i]=a[i]+a[0];
            printf("%c\n",b[i]);
		}
	}
	return 0;
}