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
	int a[300]={0};
	int m1=0;
	int m2=0;
	int i;
	for(i=0;i<300;i++){
		scanf("%d,",&a[i]);
	}
	m1=a[0];
	for(i=1;i<300;i++){
		if(a[i]==m1) continue;
		else if(a[i]>m2){
			if(a[i]>m1){
				m2=m1;
				m1=a[i];
			}
			else m2=a[i];
		}
	}
	if(m2==0)
		printf("No");
	else
		printf("%d",m2);
	return 0;
}