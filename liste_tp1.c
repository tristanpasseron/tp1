#include<stdio.h>

int main()
{
	int goal = 100;
	int compteur = 0;
	int index = 0;
	int liste[] = {1, 10, 100};
	int taille_liste = sizeof(liste)/sizeof(liste[0]);
	for (int i = 0; i <= taille_liste; i++){
		if(liste[i] == goal){
			int compteur = 0;
			index = i;
			break;
		}
		
	}
	if(compteur == 0){
		printf("la valeure goal se trouve en ");
		printf("%d", index);
		printf("ème place");
		printf("\n");
	}
	else{
		printf("la valeure goal n'existe pas dans votre liste");
		printf("\n");	
	}
	return 0;
}
