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
      int a,b,c,d,e,f,i,m=1,sz[10000];
      while(m!=0)
{ scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0)
break;
else{
sz[m]=12*3600-a*3600-b*60-c+d*3600+e*60+f;
m++;
}

}
for(i=1;i<m;i++)
{
   printf("%d\n",sz[i]);
}
return 0;
}
                   
