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

int main (){
	char a[300],b[300];
	int i,j,n;
	gets(a);
	n=strlen(a);
	j=0;
		for(i=0;i<=n;i++){
		if(a[i]!=' '){
			b[j]=a[i];
			j++;
		}
		else if(a[i]==' '&&a[i+1]!=' '){
			b[j]=a[i];
			j++;
		}
		else if(a[i]=='\0')
                            b[j]=a[i];
	}
	printf("%s",b);

	return 0;
}
