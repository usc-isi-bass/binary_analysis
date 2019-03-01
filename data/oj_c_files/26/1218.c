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
	int i,k=0,n,p=1;
	char a[101],b[101];
	gets(a);
	for(i=0;a[i]!='\0';i++){
		if(a[i]!=' '){
			b[k]=a[i];
			k++;
			p=1;
		}else if(p!=0){
			b[k]=' ';
			k++;
			p=0;
		}
	}
	b[k]=0;
	printf("%s",b);
	return 0;
}