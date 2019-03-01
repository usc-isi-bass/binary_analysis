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
 int i,a,k,m;
 int good=0; 
 char sz[10000];
 char t;
 int d[300]={0};
 scanf("%s",sz);
 k=strlen(sz)-1;
 for (i=0;sz[i]!='\0';i++){
       int great=0;
       if ((64<sz[i]&&sz[i]<91)||(96<sz[i]&&sz[i]<123)){
            good++;
            for (a=0;a<i;a++){
                if (sz[a]==sz[i]){
                     d[a]++;
                     great++; 
                     break;
				}
			}
            if (great==0){
            d[i]++;
			}
	   }
 }
 if (good==0){
  printf("No");
 }
 else{
	 for(;k>0;k--){
		 for(i=0;i<k;i++){
			 if(sz[i]>sz[i+1]){
				 t=sz[i];
				 sz[i]=sz[i+1];
				 sz[i+1]=t;
				 m=d[i];
				 d[i]=d[i+1];
				 d[i+1]=m;
			 }
		 }
	 }
     for (i=0;sz[i+1]!='\0';i++){
           if (d[i]!=0) 
		   {
               printf("%c=%d\n",sz[i],d[i]);
		   }
     }
	 k=strlen(sz)-1;
	 if(d[k]!=0)
	 printf("%c=%d",sz[k],d[k]);
 }
 return 0;
}

