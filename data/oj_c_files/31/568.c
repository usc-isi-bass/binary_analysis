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
{char num[20];
char name[20];
char sex;
int age;
char score[20];
char add[20];
};
int main()
{int i=0,s=0;
int t=0;
struct student stu[1000];
scanf("%s",stu[0].num);
while(stu[i].num[0]!='e'){
scanf("%s %c %d %s %s",stu[i].name,&stu[i].sex,&stu[i].age,stu[i].score,stu[i].add);
i++;
s++;
scanf("%s",stu[i].num);
}
for(i=s-1;i>=0;i--){
printf("%s %s %c %d %s %s\n",stu[i].num,stu[i].name,stu[i].sex,stu[i].age,stu[i].score,stu[i].add);
}
return 0;
}
