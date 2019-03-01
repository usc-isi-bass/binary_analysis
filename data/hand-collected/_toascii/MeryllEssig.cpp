#include <stdio.h>


int pow2(int a, int b)
{
    int c = 1, i=0;
    for(i = 0; i<b; i++)
    {
        c*=a;
    }
    return c;
}

char* itoaLeRetour(int nb)
{
    int i = 0, nb2 = nb, tailleNb = 0, chiffreActuel=0;
    while(nb2 > 0)
    {
        nb2 =nb;
        nb2 /= pow2(10,i);
        i++;
    }
    if (nb == 0) 
        tailleNb = i-1 ; 
    else
        tailleNb = 1;

    printf("Taille nombre : %d\n", tailleNb);
    char intConverted[tailleNb+1];
    for(i = 0;i<tailleNb; i++)
        intConverted[i] = 48;

    for(i = 0; i<tailleNb;i++)
    {
        nb2 = nb;
        chiffreActuel = nb2%pow2(10,tailleNb-i);
        while(chiffreActuel/10 != 0)
        {
            chiffreActuel/=10;
        }
        //chiffeActuel /= pow2(10,i);
        printf("Chiffre : %d\n", chiffreActuel);
        intConverted[i] += chiffreActuel;
    }
    intConverted[tailleNb] = '\0';

    return intConverted;
}

int main(int argc, char** argv)
{
    int nb = 100;
    scanf("%d", &nb);

    char* res = itoaLeRetour(nb);
        
    printf("%s\n", res);    
    return 0;
}