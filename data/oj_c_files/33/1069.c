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

int main(){
char s[MAX+1];
int i,j,n,l;
char A,T,G,C;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%s",s);
l=strlen(s);
for(j=0;j<l;j++)
{
if (s[j]=='T')     printf("A");
if (s[j]=='A')     printf("T");
if (s[j]=='G')     printf("C");
if (s[j]=='C')     printf("G");
}
printf("\n");
}
return 0;
}
