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
	char sz[301],s[26]={0},z[26]={0},flag=0;
	gets(sz);
	for(int i=0;sz[i]!='\0';i++)
	{
            if(sz[i]>='a'&&sz[i]<='z'){
            s[sz[i]-'a']++;
            flag++;
            }
            if(sz[i]>='A'&&sz[i]<='Z'){
                                       z[sz[i]-'A']++;
                                       flag++;
                                       }
     }
     for(int i=0;i<26;i++)
     {
             if(z[i]!=0)
             printf("%c=%d\n",i+'A',z[i]);
             }
     for(int i=0;i<26;i++){
             if(s[i]!=0)
             printf("%c=%d\n",i+'a',s[i]);
     }
     if(flag==0)
     printf("No");
     gets(sz);
	return 0;
}

