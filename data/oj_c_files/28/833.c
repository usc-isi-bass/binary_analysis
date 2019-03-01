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
char str[1000];
int a[300],b[300];
gets(str);
int len;
len=strlen(str);
int i,k=1,j=0;
a[0]=-1;
for(i=0;i<len;i++)
{
	if(str[i]==' '&&str[i+1]!=' '){a[k]=i;k++;}
	if(str[i]!=' '&&(str[i+1]==' '||str[i+1]=='\0')){b[j]=i;j++;}
}
printf("%d",b[0]-a[0]);
for(i=1;i<k;i++)
{
	printf(",%d",b[i]-a[i]);
}
return 0;
}