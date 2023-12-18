#include<stdio.h>

int main() {
    int goal = 19;
    int liste[] = {1, 10, 19, 20, 85, 100};
    int taille_liste = sizeof(liste) / sizeof(liste[0]);

    int borne_gauche = 0;
    int borne_droite = taille_liste - 1;
    int index = 0;

    while (borne_droite >= borne_gauche) {
        int milieu = (borne_gauche + borne_droite) / 2;

        if (liste[milieu] == goal) {
            index = milieu;
            break;
        } else if (goal < liste[milieu]) {
            borne_droite = milieu - 1;
        } else {
            borne_gauche = milieu + 1;
        }
    }

    if (index != 0) {
        printf("L'élément %d se trouve à la place %dème.\n", goal, index + 1);
    } else {
        printf("L'élément %d n'existe pas dans votre liste.\n", goal);
    }

    return 0;
}

