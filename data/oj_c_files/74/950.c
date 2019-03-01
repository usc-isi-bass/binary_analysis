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
 int m, n;
// int a[100000];//?????????
 int temp, p, q, c, w=0;
 scanf("%d %d", &m, &n);
 //k=n-m;
 //for(i=0;i<=k;i++)
 //{
 // a[i]=m+i;
 //}
 
 for(;m<=n;m++)
 {
  temp=m;
  q=0;  //q??????????????//
  while(temp>0)
	  {
	   p=temp%10;
	   q=q*10+p;
	   temp=temp/10;
	  }
	  if(q==m)
	  {
	//   printf("%d\n", a[i]);
	   for(c=2;c<m;c++)
	   {
		   if(m%c==0)
	        break;   
	   }
	   if(c>=m)
	   {
		   w++;
		   if(w==1)printf("%d", m);
		   else printf(",%d", m);
	   }    
	  }
 }
 if(w==0)  printf("no");
 printf("\n");
 return 0;
}