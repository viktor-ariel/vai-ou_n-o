#include <stdio.h>
#include <conio.h>
#include <math.h>

main() {
    char viagem, pais;

    system("cls");

    printf("Voce tem dinheiro pra ir na viagem? (s/n) ");
    scanf("%c", &viagem);

    printf("Seus pais deixam voce participar do evento? (s/n) ");
    fflush(stdin);
    scanf("%c", &pais);

    system("cls");

    if(viagem=='s' && pais=='s') {
    printf("Voce vai participar do evento!!\n");
    }
    else {
    printf("Voce NAO PODE participar do evento.\n\n");
    }

    system("pause");


}

