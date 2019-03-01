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

//#include <string.h>
char * strrev(char * a){
     char *end;
	 char *beg = a ;
	 char temp;
	 for(end = a; *end; end++);
	 for(end--;beg < end;)
	{
		temp = *beg;
		*beg = *end;
		*end = temp;
		beg++;
        end--;
	}
	return a;
}
int main()
{
	char a[500],b[500] ;
	char *p;
	scanf("%s",a);
	scanf("%s",b);
	
	strrev(a);
	strrev(b);
	
	for(p = a; *p; p++)
		*p = *p - '0';
	for(;p<a+500;p++)
		*p = 0;
	for(p = b; *p; p++)
		*p = *p - '0';
	for(;p<b+500;p++)
		*p = 0;
	int i;
	for(i = 0; i < 500; i++)
	{
		a[i] = a[i] + b[i];
		a[i+1] += a[i]/10;
		a[i] = a[i] % 10;
	}
	
	for(p = a + 400; *p == 0 && p>=a; p--);
	if(p < a)
	printf("0");
	for(;p>=a; p--)
		printf("%d",(int)*p);
	printf("\n");
	//scanf("%s",a);
	return 0; 
}
