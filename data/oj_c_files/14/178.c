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

struct marks
{
    long ID;
    int Chinese;
    int Maths;
    int total;
}student[100000],first,second,third;

void main()
{
   first.total=0;
   second.total=0;
   third.total=0;
   int student_num,i,count=0;
   scanf("%ld",&student_num);
   for(i=0;i<student_num;i++)
   {
       scanf("%ld%d%d",&student[i].ID,&student[i].Chinese,&student[i].Maths);
   }
   for(i=0;i<student_num;i++)
  {
      student[i].total=(student[i].Chinese+student[i].Maths);
   }
    for(i=0;i<student_num;i++)
   {
       if(student[i].total>first.total)
       {
             first=student[i];
       }
   }
  for(i=0;i<student_num;i++)
  {
         if(student[i].total==first.total)
         {count++;printf("%ld %d\n",student[i].ID,student[i].total);}
         if(count>3) break;
   }
   for(i=0;i<student_num;i++)
  {
     if(student[i].total>second.total&&student[i].total<first.total)
     {
                 second=student[i];
     }
   }
  for(i=0;i<student_num;i++)
  {
         if(count>=3) break;
         if(student[i].total==second.total)
         {count++;printf("%ld %d\n",student[i].ID,student[i].total);}
   }
   for(i=0;i<student_num;i++)
  {
     if(student[i].total>third.total&&student[i].total<second.total)
     {
                 third=student[i];
     }
   }
   for(i=0;i<student_num;i++)
  {
         if(count>=3) break;
         if(student[i].total==third.total)
         {count++;printf("%ld %d\n",student[i].ID,student[i].total);}
   }
}