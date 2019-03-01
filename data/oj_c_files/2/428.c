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
{char ma='A';
int cnt[128]={0};
int i,j,n;
struct s
{int id;
char au[27];
}bk[1000];

scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d%s",&bk[i].id,bk[i].au);
for(j=0;bk[i].au[j]!='\0';j++)
{cnt[bk[i].au[j]]++;
if(cnt[bk[i].au[j]]>cnt[ma]){ma=bk[i].au[j];}
}
}
printf("%c\n%d\n",ma,cnt[ma]);
for(i=0;i<n;i++)
{
	if(strchr(bk[i].au,ma)){printf("%d\n",bk[i].id);}
}
return 0;

}