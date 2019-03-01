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
int n,i,j,max=0,seq=0;
int a[26]={0};

scanf("%d",&n);
struct book
{
int num;
char str[26];
}book[999];

for(i=0;i<n;i++)
scanf("%d %s",&book[i].num,&book[i].str);

for(i=0;i<n;i++)
{
	for(j=0;j<26;j++)
	a[(book[i].str[j]-65)]++;
}

for(i=0;i<26;i++)
	if (a[i]>max) {max=a[i];seq=i;}

printf("%c\n",seq+65);
printf("%d\n",max);

for(i=0;i<n;i++)
{
for(j=0;j<26;j++)
if (book[i].str[j]==seq+65) {printf("%d\n",book[i].num); break;}
}


}
