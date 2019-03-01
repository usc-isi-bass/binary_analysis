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

int main(){

	int i,s,e,n;
	char a[30];
	gets(a);
	n=strlen(a);
	for(s=0;s<n;s++){
		if((s==0&&a[s]<='9'&&a[s]>='0')||(a[s]<='9'&&a[s]>='0')&&(a[s-1]>'9'||a[s-1]<'0')){
		    e=s;
			while(e!=n){
				if(a[e+1]>'9'||a[e+1]<'0')
					break;
				e++;
			}
			for(i=s;i<=e;i++)
				printf("%c",a[i]);
			printf("\n");
		}
	}
	return 0;
}