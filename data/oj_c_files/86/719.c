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

void main()
{
 int n, i, j, m, a[100],  num[100];
 scanf("%d",&n);
 for(i=0;i<n;i++){
     scanf("%d", &m);
     for(j=1;j<=m;j++){
       scanf("%d", &a[j]);
	 }
     if(3*m+a[m]<=60)
	 {
     num[i]=60-3*m;
	 }
	 else
	 {
         for(j=m;j>=0;j--)
		 {
		    if(3*j+a[j]<=63&&3*j+a[j]>60)
			{             
		    	num[i]=a[j];
		    	break;
			} 
		 
            else if(3*j+a[j]<=60)
			{
		    	num[i]=60-3*j;
                break;
			}
		 }
	 }
 }
 for(i=0;i<n;i++){
  printf("%d\n",num[i]);
 }
}
