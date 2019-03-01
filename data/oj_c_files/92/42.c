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

int T[1001],K[1001];   
  
int cmp(const void* a,const void *b)   
{   
    return *(int *)b-*(int *)a;   
}   
  
  
int main()   
{   
    int n,i,sum;   
    int flag;   
    int t_tail,t_head,k_tail,k_head;   
    while (scanf("%d",&n)!=EOF && n)   
    {   
        for(i=0;i<n;i++)   
            scanf("%d",&T[i]);   
        for(i=0;i<n;i++)   
            scanf("%d",&K[i]);   
           
        qsort(T,n,sizeof(T[0]),cmp);   
        qsort(K,n,sizeof(K[0]),cmp);   
        sum=0;   
        flag=1;   
        k_head=t_head=0;   
        k_tail=t_tail=n-1;   
           
        while(t_head<=t_tail && k_head<=k_tail)   
        {   
            if(T[t_head]>K[k_head])   
            {      
                sum+=200;   
                t_head++;   
                k_head++;   
            }   
//?????else?   
            else if(T[t_head]<K[k_head])   
            {   
                sum-=200;   
                t_tail--;   
                k_head++;   
            }   
            else    
            {   
                while(t_head<=t_tail && k_head<=k_tail)   
                {      
                    if(T[t_tail]>K[k_tail])   
                    {   
                        sum+=200;   
                        t_tail--;   
                        k_tail--;   
                    }   
                    else  
                    {   
                        if(T[t_tail] <K[k_head])   
                            sum-=200;   
                        t_tail--;   
                        k_head++;   
                        break;   
                    }   
                }   
            }   
            if(T[t_tail]>K[k_head])   
            {   
                flag=1;   
                break;   
            }              
        }   
        if(flag==1)   
            sum+=(t_tail-t_head+1)*200;   
        printf("%d\n",sum);   
    }   
    return 0;   
}  
