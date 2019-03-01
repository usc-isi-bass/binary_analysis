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
	int m,n,temp,k,l,p,i,j,s,r,num;
	scanf("%d%d",&m,&n);
	s=0;
	for(i=m;i<=n;i++)
	{ 
	   
	   k=sqrt(i);
	   for(j=2;j<i;j++)
		   if(i%j==0) break;
		   if(j>k) 
		   {
		       num=0; 
               j=i; 
          while(j!=0) 
		  { 
          num=num*10+j%10; 
            j/=10; 
		  } 
           if(num==i) 
		   {  s++;
		   printf("%d",num);break;}
		   }

	}
	
	for(i=i+1;i<=n;i++)
	{ 
	   
	   k=sqrt(i);
	   for(j=2;j<i;j++)
		  if(i%j==0) break;
		  if(j>k) 
		  {
		       num=0; 
               j=i; 
             while(j!=0) 
			 { 
            num=num*10+j%10; 
            j/=10; 
			 } 
           if(num==i) 
		   {s++;
		   printf(",%d",num);}

		  }
 
    }


	if(s==0) printf("no");
}

