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
	int s[100][100]={0},re[100][100]={0},h=0,l=0,dh=0,dl=0,i=0,j=0,k=0,x[4]={0,1,0,-1},y[4]={1,0,-1,0};//h�&#199;DD�y l�&#199;�D�y ij&#182;&#188;�&#199;&#209;-&#187;�&#191;&#216;&#214;&#198;�&#228;�&#191;   s�&#199;?&#230;�&#197;&#213;aD&#169;�y�&#214;?&#196;�y��  re�&#199;&#188;&#199;&#194;&#188;&#213;aD&#169;�y�&#214;�D&#195;&#187;�D�&#187;�&#223;?&#189;?&#196;�y�� x[4]�&#199;?&#227;�&#198;&#182;??&#196;�o�DD�y?&#196;�&#228;&#187;??&#196;&#207;��&#191;y[4]�&#199;?&#227;�&#198;&#182;??&#196;�o��D�y�&#228;&#187;??&#196;&#207;��&#191; 
	  cin>>h>>l;
	  for(i=1;i<=h;i++)
	     for(j=1;j<=l;j++)
	         {cin>>s[i][j];re[i][j]=1;}
	  dh=1;
	  dl=1;
	  k=0;
	  cout<<s[1][1]<<endl;
	  re[1][1]=0;
	  for(i=1;i<=h*l-1;i++)//&#191;a�&#188;����
	    {
		    if(re[dh+x[k]][dl+y[k]]==1)
		    {
			    re[dh+x[k]][dl+y[k]]=0;
				dh+=x[k];
				dl+=y[k];
				cout<<s[dh][dl]<<endl;	
				continue;
			}
			if(re[dh+x[k]][dl+y[k]]==0)
			{
			   k=(k+1)%4;//&#187;&#187;�&#189;&#207;�
			    re[dh+x[k]][dl+y[k]]=0;
				dh+=x[k];
				dl+=y[k];
				cout<<s[dh][dl]<<endl;	
				continue;  
			}
		} 
	  return 0;
}