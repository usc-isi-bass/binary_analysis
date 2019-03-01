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

    char s[30000];char yc[30000];char tc[30000];int tag=1;int u=0;
gets(s);gets(yc);gets(tc);
for(int i=0;i<strlen(s);i++)
{
if(s[i]==yc[0]) {tag=2;     for(int j=0;j<strlen(yc);j++)
     {
     if(s[i+j]!=yc[j]){tag=0;break;}}

     }
     if(tag==2){printf("%s",tc);u=i+strlen(yc);break;}


if(tag!=2){printf("%c",s[i]);}

}
if(tag==2){for(int k=u;k<strlen(s);k++){printf("%c",s[k]);}}
    
	return 0;
}