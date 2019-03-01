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
         char word[50][100]={0};
         char max[100],min[100];
	int len[50];
	int n;
	int da=0,xiao=100;
	for(int i=0;i<100;i++){
		scanf("%s",word[i]);
                  len[i]=strlen(word[i]);
                  n=i;
                  if(len[i]==0){break;}
	}
         for(int j=0;j<n;j++){
                  if(len[j]<xiao){
                       xiao=len[j];
                       strcpy(min,word[j]);
                  }
                  if(len[j]>da){
                       da=len[j];
                       strcpy(max,word[j]);
                  }
         }
         printf("%s\n",max);
         printf("%s\n",min);
      	return 0;
}
