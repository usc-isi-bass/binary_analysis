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

int fun(int m,int n,int j);
int main(void)
{ int n,m,s,t;
scanf("%d\n",&t);
while(t>0){
scanf("%d %d\n",&m,&n);
if(n>m) n=m;
s=fun(m,n,0);
printf("%d\n",s);
t--;
}
}
int fun(int m,int n,int j)
{ int i,s=0;
if(n==1) return m>=j;
for(i=j;i<m;i++) s+=fun(m-i,n-1,i);

return s;
}