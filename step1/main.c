#include <stdio.h>
#include <string.h>

int main(int ac, char **av) {

    if (ac != 2) {
        printf("Nombre incorrect d'arguments\n");
        return 1;
    }

    if (strcmp(av[1], "MLH{Epitech_F90N4SL9}") == 0) {
        printf("Flag trouvé ! Bien joué ;)\n");
        return 0;
    } else {
        printf("Cherche encore !\n");
        return 1;
    }
}