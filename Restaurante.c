#include <stdio.h>
#include <conio.h>
#include "stdlib.h"
#include <locale.h>


int cabecalho (){

    int escolha;

    printf("***************************\n");
    printf("******* BISTRO EM C *******\n");
    printf("***************************\n");

    printf("Escolha uma das opcoes do menu: \n");
    printf("1 - Reservar mesa\n");
    printf("2 - Liberar mesa\n");
    printf("3 - Alocar cliente\n");
    printf("4 - Listar mesas ocupadas\n");
    printf("5 - Listar mesas livres\n");
    printf("6 - Listar todas as mesas\n");
    printf("7 - Sair\n");
    scanf("%d",&escolha);

    return escolha;

}

int main(){

    setlocale(LC_ALL,"");

    int resultado;
    int mesa[11] = {0};
    int mesa_escolhida;
    int i;
    int contador = 0;

    if(mesa[0] ==0){
        mesa[0] = 1;
    }

    while(resultado != 7){

        resultado = cabecalho();

        while (resultado < 0 || resultado > 7){
        printf("Opcao invalida!!!\n");
        getch();
        system("cls");
        resultado = cabecalho();
        }

        system("cls");

        switch (resultado)
        {
        case 1:
            printf("Digite a mesa desejada de 1 a 10: \n");
            scanf("%d",&mesa_escolhida);

            while(mesa_escolhida < 1 || mesa_escolhida > 10){
                printf("Opção invalida!!!\n");
                getch();
                system("cls");
                printf("Digite a mesa desejada de 1 a 10: \n");
                scanf("%d",&mesa_escolhida);
            }

            if(mesa[mesa_escolhida] == 1){
                printf("Mesa já está ocupada!!!\n");
            }else{
                printf("Mesa ocupada com sucesso!!!\n");
                mesa[mesa_escolhida] = 1;
            }

            getch();
            system("cls");
            break;

        case 2:
            printf("Digite a mesa desejada de 1 a 10: \n");
            scanf("%d",&mesa_escolhida);

            while(mesa_escolhida < 1 || mesa_escolhida > 10){
                printf("Opção invalida!!!\n");
                getch();
                system("cls");
                printf("Digite a mesa desejada de 1 a 10: \n");
                scanf("%d",&mesa_escolhida);
            }

            if(mesa[mesa_escolhida] == 1){
                printf("Mesa Liberada!!!\n");
                mesa[mesa_escolhida] = 0;
            }else{
                printf("Mesa já se encontra livre!!!\n");
            }
            getch();
            system("cls");
            break;

        case 3:
            
            for(i = 1 ; i <=10 ; i++){
                if(mesa[i] == 0){
                    printf("Cliente alocado na mesa: %d", i);
                    mesa[i] = 1;
                    contador = 0;
                    break;
                    
                }
                if (i==10)
                    {
                        contador = 1;
                    }
                }
                if(contador == 1){
                    printf("Restaurante cheio");
                }
            getch();
            system("cls");
            break;
        
        case 4:
        contador = 0;
            for (i = 1; i <=10; i++)
            {
                if (mesa[i] == 1){
                    printf("Mesa %d:   Ocupada\n",i);
                    contador++;
                }        
            }
            if (contador == 0){
                printf("Todas as mesas estão livres\n");
            }
            getch();
            system("cls");
            break;

        case 5:
        contador = 0;
            for (i = 1; i <=10; i++)
            {
                if (mesa[i] !=1){
                    printf("Mesa %d:   Livre\n",i);
                    contador++;
                }        
            }
            if (contador == 0){
                printf("Todas as mesas estão ocupadas\n");
            }
            getch();
            system("cls");
            break;
        case 6:
            for (i = 1; i <=10; i++)
            {
                if (mesa[i] !=1){
                    printf("Mesa %d:   Livre\n",i);
                }else if(mesa[i] == 1){
                    printf("Mesa %d:   Ocupada\n",i);
                } 
            }
            getch();
            system("cls");
            break;

        }

    }
    printf("Obrigado por utilizar o programa!!!!");
    
    getch();
    system("cls");
    return 0;
    

}