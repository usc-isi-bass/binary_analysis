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
    int a,b,x,m,l,g,i,j,k,y,z;
    char c[40];
    scanf("%d %s %d",&a,c,&b);
    l=strlen(c);
    if (c[0]=='0') printf("0\n");
    else
    {
     for (i=0;i<l;i++)     //�?0?9?0?7�?0?4?0?3?0?4?0?7 
         if (c[i]>='A'&&c[i]<='Z') c[i]=c[i]-'A'+'a';   
     x=0;
     int d[40];
     for (i=0;i<l;i++)  //�?0?9?0?3?0?4?0?6?0?7?0?8?0?3?0?5?0?3?0?0?0?4x 
     {
        if (c[i]>='a') 
             c[i]=c[i]-'a'+10;  
        else 
             c[i]=c[i]-'0';
        d[i]=1;
        for (j=l-i;j>1;j--) 
             d[i]=d[i]*a;
        x=x+d[i]*c[i];
     }
     char e[40];
     for (k=0;x!=0;k++)    //�?0?9?0?3?0?4?0?6?0?7b?0?5?0?3?0?0?0?4 
     {
        e[k]=x%b;            //?0?5?0?0?0?1?0?6?0?5�?0?8?0?2?0?3?0?8?0?8?0?5?0?7?0?3?0?8?0?5e �?0?7?0?4� 
        x=x/b;
     } 
      e[k]='\0'; 
        
      char f[40];          //?0?5?0?0e�?0?9?0?3?0?4?0?6?0?7asc?0?0?0?5 �?0?7?0?4�?0?7?0?3?0?6?0?5f 
      for (y=0;y<k;y++)
      {
       if (e[y]<10) 
           f[k-1-y]=e[y]+'0';
       else 
           f[k-1-y]=e[y]-10+'A';
      }
      f[k]='\0';
      printf("%s",f);
   }
}
