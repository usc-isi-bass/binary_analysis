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
int a,b,i,n;
int c=0;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d %d",&a,&b);
if(a==0&&b==1||a==1&&b==2||a==2&&b==0){c=c+1;}
else if(a==0&&b==2||a==1&&b==0||a==2&&b==1){c=c-1;}
}
if(c==0){printf("Tie");}
else if(c>0){printf("A");}
else if(c<0){printf("B");}
return 0;
}

