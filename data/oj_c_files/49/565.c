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
   char a[1000];
   cin.getline(a,1000);
   int len=strlen(a);
   int i,j,k,l;
   for(j=2;j<=len;j++)
   {
       for(i=0;i<=len-j;i++)
       {
           int k;
           for(k=i;k<i+j&&a[k]==a[i+j-(k-i)-1];k++);
           if(k==i+j) {for(int t=i;t<i+j;t++) cout<<a[t];
           cout<<endl;
           }
       }
   }
   return 0;
}
