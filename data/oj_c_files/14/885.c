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

struct student
{int math;
 int chi;
 int num;
 int sum;
};
void main()
{
  int i,j,k,n,t,m;
  struct student stu[100000];
  scanf("%d",&n);
  for(i=0;i<n;i++)
   scanf("%d %d %d",&stu[i].num,&stu[i].math,&stu[i].chi);
  for(i=0;i<n;i++)
   stu[i].sum=stu[i].math+stu[i].chi;
  for(i=0;i<3;i++)
    {for(j=i+1,k=i;j<n;j++)
      {
      if(stu[j].sum>stu[k].sum)
       k=j;
       }
     t=stu[i].sum;stu[i].sum=stu[k].sum;stu[k].sum=t;
     m=stu[i].num;stu[i].num=stu[k].num;stu[k].num=m;
    }
   for(i=0;i<3;i++)
     printf("%d %d\n",stu[i].num,stu[i].sum);
}