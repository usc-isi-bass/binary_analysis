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
   int x=0;
   char s1[100],s2[100],s3[100],s4[100];
   while (scanf("%s %s",s1,s2)!=EOF){
        char max='0';
        int maxi=0;
        int len1=strlen(s1);
      //  printf("%s\n",s1);
      //  printf("%d\n",len1);
        for (int i=0;i<len1;i++)
            if (s1[i]>max){
                max=s1[i];
                maxi=i;
            }
        strcpy(s3,s1);
       // printf("%s\n",s3);
        s3[maxi+1]='\0';
        strcat(s3,s2);
      //  printf("%s\n",s3);
        s4[0]='\0';
        for (int i=maxi+1;i<len1;i++){
            s4[i-maxi]=s4[i-maxi-1];
            s4[i-maxi-1]=s1[i];
        }
      //  printf("%s\n",s4);
        strcat(s3,s4);
        printf("%s\n",s3);
   }
   return 0;
}
