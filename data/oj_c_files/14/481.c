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
{
	int num;
    int chinese;
	int maths;
	int sum;};
int main()
{ struct student stu[4]={0,0,0,0};
  struct student temp[4]={0,0,0,0};
  int n,i;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
	  scanf("%d%d%d",&stu[3].num,&stu[3].chinese,&stu[3].maths);
	  stu[3].sum=stu[3].chinese+stu[3].maths;
	  //printf("%d",stu[3].chinese);
	  if(stu[3].sum>stu[0].sum)
	  {stu[2]=stu[1];stu[1]=stu[0];stu[0]=stu[3];}
	  else if(stu[3].sum>stu[1].sum)
	  {stu[2]=stu[1];stu[1]=stu[3];}
	  else if(stu[3].sum>stu[2].sum)
	  {stu[2]=stu[3];}
  }
  for(i=0;i<3;i++)
  {
	  printf("%d %d\n",stu[i].num,stu[i].sum);
  }
  return 0;
}