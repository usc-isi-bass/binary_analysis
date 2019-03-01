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


int turn(int *pt,int p,int q)
{int y,*t,j;
 if(p>=0 && p<=4  && q>=0 && q<=4)
 {for(j=0;j<5;j++)
 {t=*(pt+p*5+j);
 *(pt+p*5+j)=*(pt+q*5+j);
 *(pt+q*5+j)=t;
 y=1;
 }}
 else y=0;
 return y;
}
void main()
{int a[5][5],m,n,i,*pa=a;
 for(i=0;i<25;i++)
 {scanf("%d",pa++);
 }
 pa=a;
 scanf("%d%d",&n,&m);
 if(turn(pa,n,m))
 {for(i=1;i<=25;i++)
 {
	 printf("%d",*(pa++));
     if(i%5==0)printf("\n");
	 else printf(" ");
 }}
 else printf("error");
}
