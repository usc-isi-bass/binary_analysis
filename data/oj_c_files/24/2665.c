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

/*?????????(???500???????????150)????????????? 

???????????????????????????????????????????????????????????? NO ??? 
????????????????????????????????????????????????????????????????????????????????? 


??????6??? 
6,2,4,2,3,3 
2?3??????????2??????2???????????2????????????3????????(3+3)/2? 
????? 
1,2,4,2,5,3,6 
????2?????3? 
????? 
2,2,2,2,2,2,2 
???? NO?????2 

 
???? 
?1????????????? 
?????????????????????????????? 

 
???? 
????????????????????????????????????NO??? 
?????????????????????(x1+x2)/2????x1 <= x2 

void bubble (int b[][501],int num[],int n)
{
	int i,j,mid,k;
	for(k=0;k<n;k++)
	{
		for(i=1;i<num[k];i++)
		{  
			for(j=1;j<=num[k]-i;j++)
			{  
				if(b[k][j-1]>b[k][j])
				{
					
					mid=b[k][j-1];
					b[k][j-1]=b[k][j];
					b[k][j]=mid;
				}
			}
		}
	}
	

}
int main()
{int n=0,i,j,k,max;
int a[50][501]={0},num[100]={0},c[500]={0};
int zhong[100]={0};
char c1;
scanf("%d",&n);
for(i=0;i<n;i++)
{
	for(;;)
	{
		scanf("%d", &a[i][num[i]++]);
		scanf("%c", &c1);
		if(c1!= ',')
			break;
	}

}
for(i=0;i<n;i++)
{
	for(k=0;k<num[i];k++)
	{
		
				c[k]=0;
	
	}
	for(k=0;k<num[i];k++)
	{
		for(j=k+1;j<num[i];j++)
		{
			if(a[i][j]==a[i][k])
				c[k]++;
		}
	}
	if(c[0]!=num[i]-1)
	{
		max=c[0];
		zhong[i]=a[i][0];
		for(k=1;k<num[i]-2;k++)
		{
			if(c[k]>max)
			{
				max=c[k];
				zhong[i]=a[i][k];
			}
		}
	}



}


	bubble(a,num,n);

for(i=0;i<n;i++)
{
	if(zhong[i]==0)
	{
		if(num[i]%2==0)
			printf("mode=NO,median=(%d+%d)/2\n",a[i][(num[i]-1)/2],a[i][(num[i]+1)/2]);
		else
					printf("mode=NO,median=%d\n",a[i][num[i]/2]);

	}
	else
		{
		if(num[i]%2==0)
			printf("mode=%d,median=(%d+%d)/2\n",zhong[i],a[i][(num[i]-1)/2],a[i][(num[i]+1)/2]);
		else
					printf("mode=%d,median=%d\n",zhong[i],a[i][num[i]/2]);

	}
	
}






return 0;
}
*/

int main()
{char a[200][50],*p;
int length[200]={0};
int i,j,n,max=0,min=100,n1,n2;


scanf("%d\n",&n);
for(i=0;i<n;i++)
{
	for(j=0;;j++)
	{scanf("%c",*(a+i)+j);
	if(*(*(a+i)+j)==' '||*(*(a+i)+j)=='\n')
	{*(*(a+i)+j)='\0';
		break;}
	else 
		(*(length+i))++;
	}

}
for(i=0;i<n;i++)
{
		if((*(length+i))>max)
		{
			max=*(length+i);
			n1=i;
		}
				
			if((*(length+i))<min)
		{
			min=*(length+i);
			n2=i;
			}
}
  printf("%s\n%s",a+n1,a+n2);

  return 0;
}