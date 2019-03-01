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
	int n,i=0,j,m,good;
	char a[50];
	char b[50];
	scanf("%s%s",a,b);
	n=strlen(a);
	while (b[i]!='\0'){
        good=0;
		for (j=i,m=0;m<n;j++,m++){
			if (a[m]!=b[j]){
				good++;
			}
		}
		if (good==0){
			printf("%d",j-m);
			break;
		}
		i++;
	}
	return 0;
}
