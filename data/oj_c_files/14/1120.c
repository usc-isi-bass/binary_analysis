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


struct student{
  int num;
  int chin;
  int math;
  int sum;
};
int main()
{
 int n,i;
 scanf("%d",&n);
 struct student *stu;
 stu=(struct student*)malloc(n*sizeof(int)*4);
 for(i=0;i<n;i++){
  scanf("%d%d%d",&stu[i].num,&stu[i].chin,&stu[i].math);
  stu[i].sum=stu[i].chin+stu[i].math;
 }
 int j,e1,e2;
 for(j=1;j<4;j++){
  for(i=0;i<n-j;i++){
   if(stu[i].sum>=stu[i+1].sum){
         e1=stu[i+1].sum;
	e2=stu[i+1].num;
         stu[i+1].sum=stu[i].sum;
	stu[i+1].num=stu[i].num;
	stu[i].sum=e1;
         stu[i].num=e2;
   }
  }
 }
 
 printf("%d %d\n",stu[n-1].num,stu[n-1].sum);
 printf("%d %d\n",stu[n-2].num,stu[n-2].sum);
 printf("%d %d\n",stu[n-3].num,stu[n-3].sum);
 free(stu);
 return 0;
}	