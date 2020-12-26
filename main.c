#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    system("color F0");
    int maior,menor,temp,cont,resto,nenhum;
    char sair;
    do{
        system("cls");
        printf("Irei te dizer os n%cmeros primos entre dois n%cmeros quaisquer!\n",-93,-93);
        printf("Digite o primeiro n%cmero: ",-93);
        scanf("%d",&menor);
        printf("Digite o segundo n%cmero: ",-93);
        scanf("%d",&maior);
        if (menor>maior){
            temp=menor;
            menor=maior;
            maior=temp;
        }
        for (nenhum=0;menor<=maior;menor++){
            for (resto=0,cont=1;cont<=menor;cont++){
                if((menor%cont)==0)
                    resto++;
            }
            if (resto==2){
                printf("%d\n",menor);
                nenhum++;
            }
        }
        if (nenhum==0)
            printf("N%c h%c n%cmeros primos!\n",-58,-96,-93);
        printf("Aperte enter para recome%car ou esc para sair!",-121);
        do{
            sair=getch();
        }while(sair!=13 && sair!=27);
    }while(sair==13);
    return 0;
}
