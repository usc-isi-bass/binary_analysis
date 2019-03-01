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

int sushu(int a)
{ 
 int i;
 for(i = 2;i <= sqrt(a)+1;i ++)
 {if(a%i == 0) {a = 1; break;}}
 return a;
}
int main()
{  
  int n,s1,s2,j,k;
  scanf("%d",&n);
  for(j = 2;j <= n/2; j++){
  s1=sushu(j);
  if(s1 != 1){
    k=n-s1;
    s2=sushu(k);
	if(s2 != 1)
	printf("%d %d\n",s1,s2);
  }
 }
 return 0;
}