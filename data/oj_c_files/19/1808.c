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
    char s[100],a[100],b[100],c[100];
    int len1=0,len2=0,len3=0,i,j,n=-1,k,flag;  //flag????s????a?1???
    cin.getline(s,101,'\n');                  //??
    cin.getline(a,101,'\n');
    cin.getline(b,101,'\n');
    
    for(len1=0;s[len1]!='\0';len1++);          //?len1,len2,len3??s,a,b???
    for(len2=0;a[len2]!='\0';len2++);
    for(len3=0;b[len3]!='\0';len3++);
	
     
    for (i=0;i<len1;i++)
    {   
        flag=0;            //??0                  
        if (((i!=0)&&(s[i]==a[0])&&(s[i-1]==' '))||((i==0)&&(s[i]==a[0])))   //??s???????a??,????????????????????(?????),?????
		{ flag=1;          //flag??1
          for (j=1;j<len2;j++)
          if (s[i+j]!=a[j]) flag=0;//??????a??,flag?0
		  if (((i+j)!=len1)&&(s[i+j]!=' ')) flag=0; //???????????????????,?????,??flag=0;
        }
        
         if (flag)             //??s??a,?b????????c
         {
			 k=n+1;             
             while(n<k+len3-1)
			 {n++;c[n]=b[n-k];}
			 i=i+len2-1;         //i??s???a???
		 }
         else
         {n++;c[n]=s[i];}        //??????a,???s????c
    }
    for (i=0;i<=n;i++) cout<<c[i];  //??c
    
    return 0;
 }
