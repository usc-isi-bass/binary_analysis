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
  struct student
  {
    int num,sum;
  } stu[100000];
  int n,i,j,k,a,b,t;
  scanf("%d",&n);
  for (i=0;i<n;i++) 
  { 
    scanf("%d %d %d",&stu[i].num,&a,&b);
	stu[i].sum=a+b;
  }
  for (i=0;i<3;i++)
  for (j=n-i-1;j>0;j--)
    if (stu[j].sum>stu[j-1].sum) 
	{
	  t=stu[j].sum;stu[j].sum=stu[j-1].sum;stu[j-1].sum=t;
	  t=stu[j].num;stu[j].num=stu[j-1].num;stu[j-1].num=t;
    }
  for (i=0;i<3;i++) printf("%d %d\n",stu[i].num,stu[i].sum);
}