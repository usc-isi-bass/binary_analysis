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

main()
{
      int n;
      int max=0;
      struct xinxi
      {
            char name[21];
            int average;
            int evaluate;
            char ganbu;
            char xibu;
            int amount;
      };
      long sum=0;
      struct xinxi stu[100];
      char most[21];
      int scholarship;
      int i,j,k,s,p,q;
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
          scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].average,&stu[i].evaluate,&stu[i].ganbu,&stu[i].xibu,&stu[i].amount);
          scholarship=0;
          if((stu[i].average>80)&&(stu[i].amount>0)) {scholarship+=8000;}
          if((stu[i].average>85)&&(stu[i].evaluate>80)) {scholarship+=4000;}
          if(stu[i].average>90) {scholarship+=2000;}
          if((stu[i].average>85)&&(stu[i].xibu=='Y')) {scholarship+=1000;}
          if((stu[i].evaluate>80)&&(stu[i].ganbu=='Y')) {scholarship+=850;}
          sum+=scholarship;
          if(scholarship>max)
          {
              strcpy(most,stu[i].name);
              max=scholarship;
          }
      }
      printf("%s\n%d\n%ld",most,max,sum);
      getchar();
      getchar();
}

