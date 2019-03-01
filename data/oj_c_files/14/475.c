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

struct Student
{int ID;
int chi;
int math;
int total;
};
int main()
{
struct Student stu[100000];
struct Student temp;
int i,n,j,m;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d %d %d",&stu[i].ID,&stu[i].chi,&stu[i].math);
stu[i].total=stu[i].chi+stu[i].math;
}
for(j=1;j<4;j++){
 for(m=0;m<n-j;m++){
  if(stu[m].total>=stu[m+1].total){
  temp=stu[m];
  stu[m]=stu[m+1];
  stu[m+1]=temp;
  }
 }
       }
for(i=n-1;i>n-4;i--)
printf("%d %d\n",stu[i].ID,stu[i].total);
return 0;
}

