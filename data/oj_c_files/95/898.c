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
int i,A,B,min;
char a[100],b[100];
gets(a);gets(b);
for(i=0;i<100;i++) {if(a[i]>='a'&&a[i]<='z') a[i]-=32;
if(b[i]>='a'&&b[i]<='z') b[i]-=32;}
A=strlen(a);B=strlen(b);min=(A>B)?B:A;
for(i=0;i<min;i++)
{if(a[i]>b[i]) {printf(">");break;}
else if(a[i]<b[i]) {printf("<");break;}}
if(i>=min) {if(B>A) printf("<");
else if(B<A) printf(">");
else printf("=");}
return 0;
} 