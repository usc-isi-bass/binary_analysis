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

int main(){
           int n,i,j,l,s;
           char a[20][21];
           scanf("%d",&n);
           for(i=0;i<n;i++) scanf("%s",a[i]);
           for(i=0;i<n;i++) {l=strlen(a[i]);
		   s=1;
							 for(j=0;j<l;j++) {	                             
								                 if(a[i][j]==95||(a[i][j]>=48&&a[i][j]<=57)||(a[i][j]>=65&&a[i][j]<=90)||(a[i][j]>=97&&a[i][j]<=122))
													 continue;
							                   else {s=0;
												   break;}
											 }
							if(a[i][0]>=48&&a[i][0]<=57) s=0;
							if(s==0) printf("no\n");
		                      else printf("yes\n");
							 }
			   return 0;
		   }

                  
