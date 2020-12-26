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
        printf("Gerarei números da sequência de Fibonacci!\n");
        printf("Quantos números devo gerar? ");
        scanf("%d",&cont);
        if (cont<=0)
            printf("Que burrice cara...\n");
        else{
            if (cont>46)
                printf("Esse número é muito grande, não consigo calcular!\n");
            else{
                system("cls");
                printf("Sequência de Fibonacci\n");
                for (ans=1,prev=0;cont!=0;temp=ans,ans+=prev,cont--,prev=temp)
                    printf("%d\n",ans);
            }
        }
        printf("\nPressione enter para recomeçar ou esc para sair!");
        do{
            sair=getch();
        }while (sair!=13 && sair!=27);
    }while(sair==13);
    return 0;
}
