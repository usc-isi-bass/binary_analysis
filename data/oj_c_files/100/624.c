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

int main(int argc, char* argv[])
{
	char a[301]={'0'},b[26]={'a'};
	int i,n=0,j,t=0,s=0;
	
	for(i=0;;i++){
		
           	scanf("%c",&a[i]);
	           t++;
			   
            if(a[i]=='\n')
		      break;
	   }
	for(i=0;i<t;i++){
		if(a[i]>='a'&&a[i]<='z'){
			s=s+1;
		}
	}
	if(s==0)
		printf("No");
	
	
	for(j=0;j<26;j++){
		n=0;
		b[0]='a';
		b[j+1]=b[j]+1;

	   
	   for(i=0;i<t;i++){
           	if(a[i]==b[j]){
				n++;
			}
			
	   }
	   if(n!=0){         
		 printf("%c=%d\n",b[j],n);
	   }
	   
	}
	
	
	



	return 0;
}

