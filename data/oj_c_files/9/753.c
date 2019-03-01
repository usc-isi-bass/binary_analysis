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
  struct pa
  { char m[10];
  int a;
  };
  struct pa p[100],t,s={"0",0},pp[100];
  int n,i,j=0,m=0,k;
  scanf("%d",&n);
  for(i=0;i<n;i++)
	  scanf("%s%d",&p[i].m,&p[i].a);
	for(i=0;i<n;i++)
  {if(p[i].a>=60)m++;}
for(j=0;j<m;j++)
{t=s;k=100;
	for(i=0;i<n;i++)
	{if(p[i].a>=60&&p[i].a>t.a){t=p[i];k=i;}}
            pp[j]=t;p[k]=s;
			}


for(i=0;i<n;i++)
if(p[i].a<60&&p[i].a>0){pp[j]=p[i];j++;}

for(i=0;i<n;i++)
printf("%s\n",pp[i].m);


}