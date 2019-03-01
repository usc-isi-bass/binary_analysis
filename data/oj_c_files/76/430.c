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
	int n;
	int a,b;
	int r[10001];
	int i;                                  
	for(i=0;i<=10000;i++){                  
		r[i]=0;
	}	
	int head,tail,max=0;
	char d='y';
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a,&b);             
		if(b>r[a])
		{
			r[a]=b;
		}
	}
	for(i=0;i<=10000;i++){
		if(r[i]!=0){                       
			head=i;
			tail=r[i];                     
			break;
		}
	}
	for(i=0;i<=10000;i++){
		if(r[i]>max){max=r[i];}             
	}

	for(i=head;i<=max;i++){
		if(r[i]!=0)
		{			
			if(i>tail)
			{
				d='n';                     
				break;
			}
		        if(tail<r[i]){tail=r[i];}
		}
	}
	if(d=='y'){printf("%d %d",head,tail);}  
	if(d=='n'){printf("no");}
	return 0;
}
