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
{int a[5],as[5];
for(a[0]=1;a[0]<=5;a[0]++){
	for(a[1]=1;a[1]<=5;a[1]++){
    if(a[1]==a[0])continue;
	 for(a[2]=1;a[2]<=5;a[2]++){
	 if((a[0]==a[2])||(a[1]==a[2]))continue;
	   for(a[3]=1;a[3]<=5;a[3]++){
	   if((a[0]==a[3])||(a[1]==a[3])||(a[2]==a[3]))continue;
	   for(a[4]=1;a[4]<=5;a[4]++){
       if((a[0]==a[4])||(a[1]==a[4])||(a[2]==a[4])||(a[3]==a[4]))continue;
	   if((a[4]==2)||(a[4]==3))
		   break;
	   as[0]=(a[4]==1);
	   as[1]=(a[1]==2);
	   as[2]=(a[0]==5);
	   as[3]=(a[2]!=1);
	   as[4]=(a[3]==1);
	   if((as[0]+as[1]+as[2]+as[3]+as[4])==2){
		   for(int i=0;i<5;i++){
			   if((a[i]==1)&&(as[i]==1)){
				   for(int j=0;j<5;j++){
					   if((a[j]==2)&&(as[j]==1))
						   cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4]<<endl;
				   }}}}}}}}}
return 0;
}