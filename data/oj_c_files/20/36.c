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

void str(char a[10],char b[3])/*???????*/
{
	int i,l,c=a[0],k;
	l=strlen(a);
	for(i=1;i<l;i++)
 		if(c<a[i])
		{
			c=a[i];
			k=i;
		}
 	for(i=0;i<k+1;i++) printf("%c",a[i]);
	for(i=0;i<3;i++) printf("%c",b[i]);
	for(i=k+1;i<l;i++) printf("%c",a[i]);
	printf("\n");
}
void main()
{
	char a[10],b[3];
	while(scanf("%s%s",a,b)!=EOF)
		str(a,b);
}