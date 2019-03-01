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

void main()
{
     int rearrange(char s1[],char s2[]);
     int result;
     char s1[N],s2[N];
     scanf("%s %s",s1,s2);
     result=rearrange(s1,s2);
     if(1==result)
            printf("YES\n");
     else if(0==result)
            printf("NO\n");
}
int rearrange(char s1[], char s2[])
{ 
        int count1[128]={0}, count2[128]={0};
        int len1,temp;
        len1=strlen(s1); temp=strlen(s2);
        if( len1!=temp) return 0;
        for(temp=0; temp<len1; ++temp)
       { count1[s1[temp]]++; count2[s2[temp]]++;}
        for(temp=0;temp<128; ++temp)
               if(count1[temp]!=count2[temp]) 
                         return 0;
        return 1;
}