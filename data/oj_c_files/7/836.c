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
	char a[300],b[300],c[300];
	int i,j,f,d,k=0;
	scanf("%s%s%s",a,b,c);
	d=strlen(a);
	f=strlen(c);
	for(i=0;i<d;i++){
		if(a[i]==b[0]&&a[i+1]==b[1]&&a[i+2]==b[2]&&a[i+3]==b[3]){
			for(j=i;j<i+f;j++){
				a[j]=c[k];
				k++;
			}
			break;
		}
	}
	printf("%s",a);
	return 0;
}
