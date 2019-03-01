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
   int m,i=3,n=2,j;
   cin>>m;
   while(i<=m/2){
	     while(n<i){
	      if (i%n!=0)  {
                 if (n>=i-1){
			            j=m-i;
						n=2;
			         while(n<j){
	                               if (j%n!=0){
						                                if(n>=j-1){
											cout<<i<<" "<<j<<"\n";}
									       n++;}
				                      else n=j;
					           }
				      n=i-1; }
				   n++;}
		    else n=i;}
		 i++;
		 n=2;}

	return 0;
}