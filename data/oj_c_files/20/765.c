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

void main()
{
char s1[100],s2[100],s3[100];
int m;
while (scanf("%s %s",s1,s2)!=EOF)
{
m=strlen(s1);
int k=0;
int j;
for(j=1;j<m;j++)
if(s1[j]>s1[k]) k=j;
for(j=0;j<=k;j++)
s3[j]=s1[j];
s3[k+1]=s2[0];
s3[k+2]=s2[1];
s3[k+3]=s2[2];
for(j=k+4;j<m+3;j++)
s3[j]=s1[j-3];
for(j=0;j<m+3;j++)
printf("%c",s3[j]);
printf("\n");
}
}
