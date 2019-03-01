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
struct books
{
int num;
char author[26];
}books[999];
int n,a[26]={0},max,i,j,u,lenth,temp;
scanf ("%d",&n);
for (i=0;i<n;i++)
scanf("%d %s",&books[i].num,books[i].author);
for (i=0;i<n;i++)
{
lenth=strlen(books[i].author);
for (j=0;j<lenth;j++)
{
for (u=0;u<26;u++)
{
if (books[i].author[j]=='A'+u)
a[u]++;
}
}
}
temp=a[0];
for (u=0;u<26;u++)
if (a[u]>=temp)
{
max=u;
temp=a[u];
}
printf ("%c\n%d\n",'A'+max,a[max]);
for (i=0;i<n;i++)
{
lenth=strlen(books[i].author);
for (j=0;j<lenth;j++)
{
if (books[i].author[j]=='A'+max)
printf("%d\n",books[i].num);
}
}
}

