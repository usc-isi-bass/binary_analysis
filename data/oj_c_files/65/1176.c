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
  int a[200],b[200],i,j,k,n;
  j=0; k=0;
  scanf("%d\n",&n);
  for(i=0;i<n;i++) {scanf("%d %d",&a[i],&b[i]);}
  for(i=0;i<n;i++)
  {
     if(a[i]==0)
     {
       if(b[i]==1)  {j++;}
       else { if(b[i]==2)  {k++;}}
     } 
     if(a[i]==1)
     {
       if(b[i]==2)  {j++;}
       else { if(b[i]==0)  {k++;}}
     } 
     if(a[i]==2)
     {
       if(b[i]==0)  {j++;}
       else { if(b[i]==1)  {k++;}}
     } 
   }
   if(j==k) {printf("Tie");}
   else
   {
     if(j>k)  {printf("A");}
     else    {printf("B");} 
   }
return 0;
}

