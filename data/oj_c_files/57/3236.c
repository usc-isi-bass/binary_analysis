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
int n,i,j;
    scanf("%d",&n);
char*lab=(char*)malloc(n*32*sizeof(char));
for(i=0;i<n;i++)
    scanf("%s",lab+i*32);
for(i=0;i<n;i++)
{

    for(j=0;*(lab+32*i+j)!='\0';j++)
        {
    if(strcmp(lab+32*i+j,"er")==0||strcmp(lab+32*i+j,"ly")==0||strcmp(lab+32*i+j,"ing")==0)
    {*(lab+32*i+j)='\0';break;}
        }}
for(i=0;i<n;i++) puts(lab+32*i);
return 0;
}
