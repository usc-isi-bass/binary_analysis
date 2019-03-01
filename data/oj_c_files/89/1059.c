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

main()
{
      int i,j,n,m=0;
      scanf("%d",&n);
      int a[2][n];
      for(i=0;i<n;i++){a[0][i]=0;a[1][i]=0;}
      for(;;){
      scanf("%d %d",&i,&j);
      if(i==0&&j==0){break;}
      else
      a[0][i]++;
      a[1][j]++;}
      for(i=0;i<n;i++){
      if(a[0][i]==0&&a[1][i]==(n-1)){
      printf("%d",i);m++;}}
      if(m==0)printf("NOT FOUND");
}
