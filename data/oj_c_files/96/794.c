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

void qu(char *);
int main()
{
char a[110],b[110];
gets(a);
int a1,i,yu=0;
a1=strlen(a);
for(i=0;i<a1;i++)
{
yu=a[i]-'0'+yu*10;
b[i]=yu/13+'0';
yu=yu%13;
}
b[a1]='\0';
qu(b);
puts(b);
printf("%d",yu);
return 0;
}
void qu(char *b)
{
int i;
while(b[0]=='0')
{
	int b1=strlen(b);
	for(i=0;i<b1;i++)
	{
		b[i]=b[i+1];
	}
}
if(b[0]=='\0')
{b[0]='0';
b[1]='\0';}

}