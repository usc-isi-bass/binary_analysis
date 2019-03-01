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
int n;
char sr[255];
int i,j,len;
scanf("%d",&n);
char k;
scanf("%c",&k);

for(i=0;i<n;i++)
{
gets(sr); 
len=strlen(sr);
for(j=0;j<len;j++)
{
if (sr[j]=='A')
{
sr[j]='T';
}
else if(sr[j]=='T')
{
sr[j]='A';
}
else if(sr[j]=='C')
{
sr[j]='G';
}
else if(sr[j]=='G')
{
sr[j]='C';
} 

}
printf("%s\n",sr);
}
return 0;
}