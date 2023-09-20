#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//---------------------------------------------LES STRUCTURES-----------------------------------------------------------------------------------
typedef struct {
	int jour;
	int mois;
	int annee;
}datecomplet;


typedef struct {
	int identifan;
	char titre[]={};
	char description[]={};
	struct datecomplet deadline;
	char statut[]={};
}Typetache;



void menu (){
	
	printf("                       1_Ajouter une nouvelle tâche \n");
	printf("                       2_Ajouter plusieurs nouvelles tâches \n");
	printf("                       3_Afficher la liste de toutes les tâches \n");
	printf("                       4_Modifier une tâche \n");
	printf("                       5_Ajouter une nouvelle tâche \n");
	printf("                       6_Supprimer une tâche par identifiant. \n");
	printf("                       7_Rechercher les Tâches \n");
	printf("                       8_Statistiques \n");
	printf("                       9_QUITER \n");	
}

void(){
	
}






































int main(){
	
	
	
	return 0;
}
