#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main()
{
    system("color F0");
    setlocale(LC_ALL,"Portuguese");
    int ans,prev,cont,temp;
    char sair;
    do{
        system("cls");
        printf("Gerarei n�meros da sequ�ncia de Fibonacci!\n");
        printf("Quantos n�meros devo gerar? ");
        scanf("%d",&cont);
        if (cont<=0)
            printf("Que burrice cara...\n");
        else{
            if (cont>46)
                printf("Esse n�mero � muito grande, n�o consigo calcular!\n");
            else{
                system("cls");
                printf("Sequ�ncia de Fibonacci\n");
                for (ans=1,prev=0;cont!=0;temp=ans,ans+=prev,cont--,prev=temp)
                    printf("%d\n",ans);
            }
        }
        printf("\nPressione enter para recome�ar ou esc para sair!");
        do{
            sair=getch();
        }while (sair!=13 && sair!=27);
    }while(sair==13);
    return 0;
}
