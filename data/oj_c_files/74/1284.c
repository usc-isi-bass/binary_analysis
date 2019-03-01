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


 main ()
{
	int a,b,i,j=0,k=0,h=1,v,l,c=0,leap=1,q;
	int m[22];
	scanf("%d%d",&a,&b);
	for(i=a;i<b+1;i++)
	{c=i;
	j=0;
	leap=1;
while(c!=0)
    
{ 
	m[j]=c%10;
	c=c/10;
	j=j+1;
	}
   
  for(k=0;k<(j/2);k++)
    {
	  if(m[k]!=m[j-k-1])
    {leap=0;
    break;}}
  v=(int)(sqrt(i));
   for(l=2;l<v+1;l++)
   {if(i%l==0)
	   {leap=0;
	   break;}}
	if(leap==1)
	{	if(h==1)
	printf("%d",i),h=h+1;
	else printf(",%d",i);
	}
    
	}
   if(leap==0&&h==1)
	   printf("no");
 }