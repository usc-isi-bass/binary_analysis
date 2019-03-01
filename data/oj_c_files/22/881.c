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

int main()
{
int a,b,f,g,i,c[300];
char d[300];
scanf("%d",&c[0]);


a=c[0];b=-100;
f=0;
g=0;
for(i=1;i<300;i++)
 {scanf("%c%d",&d[i],&c[i]);
  if(d[i]=='\n')  {break;}
  else
    {f=f+1;
   if(c[i]>a){b=a;a=c[i];g=g+1;}
   else if(c[i]<a&&c[i]>b) {b=c[i];g=g+1;}
    }
  }
if(f==0||g==0) printf("No");
else
 printf("%d",b);
return 0;
}
