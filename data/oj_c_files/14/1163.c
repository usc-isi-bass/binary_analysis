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
int name;
int ch;
int math;
};
struct student stu[100000];
int main()
{
int n; int sum[100000];int max[3];int i,j,k,m,o;int s;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d %d %d",&stu[i].name,&stu[i].ch,&stu[i].math);
for(i=0;i<n;i++)
{
               sum[i]=stu[i].ch+stu[i].math;
}
//for(i=0;i<n;i++)
{
                max[0]=0;
                for(j=0,k=0;j<n;j++)
                {if(sum[j]>max[0])
                {max[0]=sum[j];
                k=j;}
                }
}
//for(i=0;i<n;i++)
{
                max[1]=0;
                for(j=1,m=0;j<n;j++)
                {if((sum[j]>max[1])&&(j!=k))
                {max[1]=sum[j];
                m=j;}
                }
}
//for(i=0;i<n;i++)
{
                max[2]=0;
                for(j=1,o=0;j<n;j++)
                {if((sum[j]>max[2])&&(j!=k)&&(j!=m))
                {max[2]=sum[j];
                o=j;}
               
                }
               
               
              
}
printf("%d %d\n",stu[k].name,sum[k]);
printf("%d %d\n",stu[m].name,sum[m]);
printf("%d %d\n",stu[o].name,sum[o]);
return 0;
}