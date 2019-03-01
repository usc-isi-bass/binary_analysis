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
int t,sum[26],i,min,j,b,c;
char a[100001];

scanf("%d",&t);
while(t>0){
scanf("%s",a);

for(j=0;j<26;j++)
sum[j]=0;
for(j=0;j<strlen(a);j++)
sum[a[j]-'a']++;
min=0;
for(j=0;j<strlen(a)+1;j++)
{if(sum[a[j]-'a']==1)
{printf("%c\n",a[j]);
break;}
if(j==strlen(a)) printf("no\n");}
t--;}

}