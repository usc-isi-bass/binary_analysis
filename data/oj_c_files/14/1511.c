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

struct stu
{
int num;
int chinese;
int maths;
}stu[100000];

void main()
{
int i,j,n,sum[100000],max=0,m;
scanf("%d\n",&n);
for(i=0;i<n;i++)
{
scanf("%d %d %d\n",&stu[i].num,&stu[i].chinese,&stu[i].maths);
}
for(i=0;i<n;i++)
{
sum[i]=stu[i].chinese+stu[i].maths;
}
for(j=0;j<3;j++)
{
for(i=0;i<n;i++)
{
if(sum[i]>max)
{max=sum[i];
m=i;}
}
printf("%d %d\n",stu[m].num,sum[m]);
sum[m]=0;
max=0;
}
}