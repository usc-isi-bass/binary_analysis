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
int max(int x,int y);
int min(int x,int y);
 int i=1,n,a,s,d,f,g;
 scanf("%d",&n);
 while(i<=n){
  scanf("%d\n",&a);
  if(i==1) { s=a;d=a;}
  else  { f=d;g=s;
        s=max(s,a);d=min(g,a);d=max(d,f); 
    }
  i++;
 }
 
  printf("%d\n%d\n",s,d);
 return 0;
}
int max(int x,int y){
int z; 
z=x>y? x:y;
return(z);
}
  int min(int x,int y){
 int z; 
z=x<y? x:y;
return(z);
}    



