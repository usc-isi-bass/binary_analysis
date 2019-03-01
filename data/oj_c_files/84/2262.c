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
	int a,i,c,b[100];
    scanf("%d",&a);
    for(i=0;i<a;i++)
      scanf("%d\n",&b[i]); 
    for(i=1;i<a;i++)
		if(b[i]>b[0]){
			c=b[i];
			b[i]=b[0];
			b[0]=c;
		}
			
	for(i=2;i<a;i++)
		if(b[i]>b[1]){
			b[1]=b[i];
		}
	printf("%d\n",b[0]);
	printf("%d",b[1]);
return 0;
}
	