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

struct student{ int num;int a;int b;int c;};
void main()
{
	  int n,i,j,m,t;
      struct student stu[100000];
	  scanf("%d",&n);
	  for(i=0;i<n;i++)
	  {scanf("%d %d %d",&stu[i].num,&stu[i].a,&stu[i].b);
	  stu[i].c=stu[i].a+stu[i].b;}
	  for(i=0;i<3;i++)
		  for(j=i+1;j<n;j++)
		  {
			  if(stu[i].c<stu[j].c){
				  t=stu[i].c;stu[i].c=stu[j].c;stu[j].c=t;
				  m=stu[i].num;stu[i].num=stu[j].num;stu[j].num=m;}
		  }
		  for(i=0;i<3;i++)
			  printf("%d %d\n",stu[i].num,stu[i].c);
}