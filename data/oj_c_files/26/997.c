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
	int i,j,n,k=0;
	int e;
	char a[101];
	char b[101];
	gets(a);
	b[0]=a[0];
	for(n=0;a[n]!='\0';n++);
	for(i=1;i<n+1;i++){
		if(a[i]!=' '&&a[i]!='\0'){
			k++;
			b[k]=a[i];
		}
		if((a[i]==' '&&a[i+1]!=' '&&a[i-1]!=' ')||(a[i]==' '&&a[i+1]==' '&&a[i-1]!=' ')){
			k++;
			b[k]=a[i];
		}
		if(a[i]=='\0'){
			k++;
			b[k]=a[i];
		}
	}
	printf("%s",b);
	return 0;
}

