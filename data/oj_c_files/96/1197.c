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
     char s[100];
     int i,n;
     int a[100],b[100];
     scanf("%s",s);
     n= strlen(s);
     if(n>2)
     {
     a[0]=(s[0]-'0')*10+(s[1]-'0');
     if(a[0] >= 13)
     {
      printf("%d",a[0]/13);
     }
      b[0]=a[0]%13;
      for(i=1;i<n-1;i++)
      {
       a[i]=b[i-1]*10+(s[i+1]-'0');
       printf("%d",a[i]/13);
       b[i]=a[i]%13;
       }
       printf("\n");
       printf("%d",b[n-2]);
      }
      else if(n==2)
      {
        a[0]=(s[0]-'0')*10+(s[1]-'0');
        printf("%d\n",a[0]/13);  
        printf("%d",a[0]%13); 
      }
      else
      {
       printf("0\n") ;
       printf("%c",s[0]); 
      } 
}
