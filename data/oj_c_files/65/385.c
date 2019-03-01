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
{  int a[200],b[200];
   int s=0;
   int n;
   scanf("%d",&n);
   for(int i=0;i<n;i++){scanf("%d %d",&a[i],&b[i]);
                        if(a[i]==b[i]){s=s;}
                        if(a[i]==0&&b[i]==1){s++;}
                        if(a[i]==0&&b[i]==2){s--;}
                        if(a[i]==1&&b[i]==2){s++;}
                        if(a[i]==1&&b[i]==0){s--;}
                        if(a[i]==2&&b[i]==0){s++;}
                        if(a[i]==2&&b[i]==1){s--;}}
      
      if(s>0){printf("A");} 
      if(s==0){printf("Tie");}
      if(s<0){printf("B");}  
      }
