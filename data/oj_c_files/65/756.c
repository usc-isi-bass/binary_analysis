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
int n,i,j,A=0,B=0,Tie=0;
scanf("%d",&n);
int* lun=(int*)malloc(n*2*sizeof(int));
int* result=(int*)malloc(n*sizeof(int));
for(i=0;i<n*2;i++)
scanf("%d",lun+i);
for(i=0;i<n;i++)
for(j=0;j<1;j++)
if(*(lun+i*2+j)-*(lun+i*2+j+1)==-1||*(lun+i*2+j)-*(lun+i*2+j+1)==2)
  *(result+i)=1;
else if(*(lun+i*2+j)==*(lun+i*2+j+1)) *(result+i)=0;
else  *(result+i)=-1;
  for(i=0;i<n;i++)
{if(*(result+i)==1)A++;
if(*(result+i)==0)Tie++;
if(*(result+i)==-1)B++;}
if(A>B)printf("A");
if(B>A)printf("B");
if(A==B)printf("Tie");
return 0;
}



   


