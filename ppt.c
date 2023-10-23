#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>

int cabecalho(){
    
    int escolha;

    do{
        printf("************************************************************\n");
        printf("************************* PPT EM C *************************\n");
        printf("************************************************************\n");

        printf("⠀⠀⠀⠀⠀⣠⡴⠖⠒⠲⠶⢤⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡴⠖⠒⢶⣄⠀⠀⠀⠀⠀⠀⠀\n");
        printf("⠀⠀⠀⢀⡾⠁⠀⣀⠔⠁⠀⠀⠈⠙⠷⣤⠦⣤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡼⠋⠀⠀⠀⢀⡿⠀⠀⠀⠀⠀⠀⠀\n");
        printf("⣠⠞⠛⠛⠛⠋⠉⠀⠀⠀⠀⠀⠀⠀⠀⠘⢧⠈⢿⡀⢠⡶⠒⠳⠶⣄⠀⠀⠀⠀⠀⣴⠟⠁⠀⠀⠀⣰⠏⠀⢀⣤⣤⣄⡀⠀⠀\n");
        printf("⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠟⠛⠛⠃⠸⡇⠈⣇⠸⡇⠀⠀⠀⠘⣇⠀⠀⣠⡾⠁⠀⠀⠀⢀⣾⣣⡴⠚⠉⠀⠀⠈⠹⡆⠀\n");
        printf("⣹⡷⠤⠤⠤⠄⠀⠀⠀⠀⢠⣤⡤⠶⠖⠛⠀⣿⠀⣿⠀⢻⡄⠀⠀⠀⢻⣠⡾⠋⠀⠀⠀⠀⣠⡾⠋⠁⠀⠀⠀⠀⢀⣠⡾⠃⠀\n");
        printf("⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡤⠖⠋⢀⣿⣠⠏⠀⠀⣿⠀⠀⠀⠘⠉⠀⠀⠀⠀⠀⡰⠋⠀⠀⠀⠀⠀⣠⠶⠋⠁⠀⠀⠀\n");
        printf("⢿⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡾⠋⠁⠀⠀⠠⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠁⠀⠀⠀⢀⣴⡿⠥⠶⠖⠛⠛⢶⡄\n");
        printf("⠀⠉⢿⡋⠉⠉⠁⠀⠀⠀⠀⠀⢀⣠⠾⠋⠀⠀⠀⠀⢀⣰⡇⠀⠀⢀⡄⠀⠀⠀⠀⠀⠀⠀⠀⢀⡴⠋⠀⠀⠀⠀⠀⢀⣠⠼⠃\n");
        printf("⠀⠀⠈⠛⠶⠦⠤⠤⠤⠶⠶⠛⠋⠁⠀⠀⠀⠀⠀⠀⣿⠉⣇⠀⡴⠟⠁⣠⡾⠃⠀⠀⠀⠀⠀⠈⠀⠀⠀⣀⣤⠶⠛⠉⠀⠀⠀\n");
        printf("⠀⠀⠀⠀⢀⣠⣤⣀⣠⣤⠶⠶⠒⠶⠶⣤⣀⠀⠀⠀⢻⡄⠹⣦⠀⠶⠛⢁⣠⡴⠀⠀⠀⠀⠀⠀⣠⡶⠛⠉⠀⠀⠀⠀⠀⠀⠀\n");
        printf("⠀⠀⢀⡴⠋⣠⠞⠋⠁⠀⠀⠀⠀⠙⣄⠀⠙⢷⡀⠀⠀⠻⣄⠈⢷⣄⠈⠉⠁⠀⠀⠀⢀⣠⡴⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
        printf("⠀⢀⡾⠁⣴⠋⠰⣤⣄⡀⠀⠀⠀⠀⠈⠳⢤⣼⣇⣀⣀⠀⠉⠳⢤⣭⡿⠒⠶⠶⠒⠚⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
        printf("⠀⢸⠃⢰⠇⠰⢦⣄⡈⠉⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠉⠉⠛⠛⠓⠲⢦⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
        printf("⠀⠸⣧⣿⠀⠻⣤⡈⠛⠳⠆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
        printf("⠀⠀⠈⠹⣆⠀⠈⠛⠂⠀⠀⠀⠀⠀⠀⠈⠐⠒⠒⠶⣶⣶⠶⠤⠤⣤⣠⡼⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
        printf("⠀⠀⠀⠀⠹⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠳⢦⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
        printf("⠀⠀⠀⠀⠀⠈⠻⣦⣀⠀⠀⠀⠀⠐⠲⠤⣤⣀⡀⠀⠀⠀⠀⠀⠉⢳⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
        printf("⠀⠀⠀⠀⠀⠀⠀⠀⠉⠛⠶⠤⠤⠤⠶⠞⠋⠉⠙⠳⢦⣄⡀⠀⠀⠀⡷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
        printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠳⠦⠾⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");

        printf("Escolha uma das opções do menu:\n");
        printf("1 - Pedra\n");
        printf("2 - Papel\n");
        printf("3 - Tesoura\n");
        printf("4 - Sair\n\n");
        printf("Decida sua jogada: ");
        scanf("%d",&escolha);

        if(escolha < 1 || escolha >4){
            system("cls");
            printf("Opção invalida!!!!");
            getch();
            system("cls");
        }

    }while (escolha < 1 || escolha >4);

    return escolha;

}

int main(){
    // Deixando cmd receber acentuação
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    int opcao;
    int aleatorio;

    srand(time(NULL));   

    while(opcao != 4){

        system("cls");
        aleatorio = rand() % 3 + 1;
        opcao = cabecalho();
        system("cls");

        switch (opcao){
        case 1:

            if(aleatorio == 1){
                printf("Computador escolheu Pedra:\n    _______\n---'   ____)\n      (_____)\n      (_____)\n      (____)\n---.__(___)\n");
                printf("--------------- X ---------------\n");
                printf("Sua escolha foi Pedra:\n    _______\n---'   ____)\n      (_____)\n      (_____)\n      (____)\n---.__(___)\n");
                printf("----------------RESULTADO----------------\n");
                printf("\nPedra x Pedra = Empate!!!\n");
                getch();
                break;
            }else if(aleatorio == 2){
                printf("Computador escolheu Papel:\n     _______\n---'    ____)____\n           ______)\n          _______)\n         _______)\n---.__________)\n");
                printf("--------------- X ---------------\n");
                printf("Sua escolha foi Pedra:\n    _______\n---'   ____)\n      (_____)\n      (_____)\n      (____)\n---.__(___)\n");
                printf("----------------RESULTADO----------------\n");
                printf("\nPapel x Pedra = Derrota!!!\n");
                getch();
                break;
            }else{
                printf("Computador escolheu Tesoura:\n    _______\n---'   ____)____\n          ______)\n       __________)\n      (____)\n---.__(___)\n");
                printf("--------------- X ---------------\n");
                printf("Sua escolha foi Pedra:\n    _______\n---'   ____)\n      (_____)\n      (_____)\n      (____)\n---.__(___)\n");
                printf("---------------- RESULTADO ----------------\n");
                printf("\nTesoura x Pedra = Vitoria!!!\n");
                getch();
                break;
            }
            system("cls");
            break;
        
        case 2:
            if(aleatorio == 1){
                printf("Computador escolheu Pedra:\n    _______\n---'   ____)\n      (_____)\n      (_____)\n      (____)\n---.__(___)\n");
                printf("--------------- X ---------------\n");
                printf("Sua escolha foi Papel:\n     _______\n---'    ____)____\n           ______)\n          _______)\n         _______)\n---.__________)\n");
                printf("----------------RESULTADO----------------\n");
                printf("\nPedra x Papel = Vitoria!!!\n");
                getch();
                break;
            }else if(aleatorio == 2){
                printf("Computador escolheu Papel:\n     _______\n---'    ____)____\n           ______)\n          _______)\n         _______)\n---.__________)\n");
                printf("--------------- X ---------------\n");
                printf("Sua escolha foi Papel:\n     _______\n---'    ____)____\n           ______)\n          _______)\n         _______)\n---.__________)\n");
                printf("---------------- RESULTADO ----------------\n");
                printf("\nPapel x Papel = Empate!!!\n");
                getch();
                break;
            }else{
                printf("Computador escolheu Tesoura:\n    _______\n---'   ____)____\n          ______)\n       __________)\n      (____)\n---.__(___)\n");
                printf("--------------- X ---------------\n");
                printf("Sua escolha foi Papel:\n     _______\n---'    ____)____\n           ______)\n          _______)\n         _______)\n---.__________)\n");
                printf("---------------- RESULTADO ----------------\n");
                printf("\nTesoura x Papel = Derrota!!!\n");
                getch();
                break;
            }
            system("cls");
            break;
        case 3:
            if(aleatorio == 1){
                printf("Computador escolheu Pedra:\n    _______\n---'   ____)\n      (_____)\n      (_____)\n      (____)\n---.__(___)\n");
                printf("--------------- X ---------------\n");
                printf("Sua escolha foi Tesoura:\n    _______\n---'   ____)____\n          ______)\n       __________)\n      (____)\n---.__(___)\n");
                printf("----------------RESULTADO----------------\n");
                printf("\nPedra x Tesoura = Derrota!!!\n");
                getch();
                break;
            }else if(aleatorio == 2){
                printf("Computador escolheu Papel:\n     _______\n---'    ____)____\n           ______)\n          _______)\n         _______)\n---.__________)\n");
                printf("--------------- X ---------------\n");
                printf("Sua escolha foi Tesoura:\n    _______\n---'   ____)____\n          ______)\n       __________)\n      (____)\n---.__(___)\n");
                printf("----------------RESULTADO----------------\n");
                printf("\nPapel x Tesoura = Vitoria!!!\n");
                getch();
                break;
            }else{
                printf("Computador escolheu Tesoura:\n    _______\n---'   ____)____\n          ______)\n       __________)\n      (____)\n---.__(___)\n");
                printf("--------------- X ---------------\n");
                printf("Sua escolha foi Tesoura:\n    _______\n---'   ____)____\n          ______)\n       __________)\n      (____)\n---.__(___)\n");
                printf("----------------RESULTADO----------------\n");
                printf("\nTesoura x Tesoura = Empate!!!\n");
                getch();
                break;
            }
        }
    }
    system("cls");
    printf("Obrigado por jogar!!!");
    getch();
    system("cls");
}