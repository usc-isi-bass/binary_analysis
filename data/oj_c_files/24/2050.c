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
	char yj[5000];
	gets(yj);

	char a[20],max[20],min[20];
	int i,k;
	int first=0;
	int dx=strlen(yj);
	for(i=0;i<dx+1;i++){
		if(i==0){
			first=1;
		}else{
			first=0;
		}
		for(k=i;;k++){
			
			if((yj[k]!=',')&&(yj[k]!=' ')&&(yj[k]!='\0')){
				a[k-i]=yj[k];	
			}else{
				a[k-i]='\0';
				i=k;
				break;
			}
		}
		if(first==1){
					strcpy(max,a);
					strcpy(min,a);
		}else{
			if(strlen(a)>strlen(max)){
						strcpy(max,a);
					}
			if(strlen(a)<strlen(min)&&strlen(a)!=0){
						strcpy(min,a);
					}
				}
					
		
	}
	printf("%s\n%s",max,min);
	return 0;
}
