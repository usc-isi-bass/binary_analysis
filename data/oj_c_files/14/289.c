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
       int id;
       int math;
       int chinese;
       int zongfen;
};
main()
{
      int n,i=1,j;
      int a[100001];
      struct student stu[100001];
      scanf("%d",&n);
      for (i=1;i<=n;i++)
      {
          scanf("%d %d %d",&stu[i].id,&stu[i].math,&stu[i].chinese);
          stu[i].zongfen=stu[i].math+stu[i].chinese;
          if (i<4)
          j=i;
          else
          j=4; 
          {
                for(;j>1&&stu[i].zongfen>stu[a[j-1]].zongfen;j--)
                a[j]=a[j-1];
          }
          a[j]=i;       
      }
      for(i=1;i<=3;i++)
      printf("%d %d\n",stu[a[i]].id,stu[a[i]].zongfen);
      getchar();
      getchar();
      scanf("%d",&n);
      return 0;
      }
            
      
