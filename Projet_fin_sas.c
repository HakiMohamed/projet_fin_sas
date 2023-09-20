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
//----------------------------------------declaration-------------------------------------------------------------------------------------------
Typetache ajouter;



//----------------------------------------------------------------------------------------------------------------------------------------------
void menu (){
	
	printf("                       1_Ajouter une nouvelle tache \n");
	printf("                       2_Ajouter plusieurs nouvelles taches \n");
	printf("                       3_Afficher la liste de toutes les taches \n");
	printf("                       4_Modifier une tache \n");
	printf("                       5_Ajouter une nouvelle tache \n");
	printf("                       6_Supprimer une tache par identifiant. \n");
	printf("                       7_Rechercher les Taches \n");
	printf("                       8_Statistiques \n");
	printf("                       9_QUITER \n");	
}

void ajoute(){


		printf("Ajouter une nouvelle tâche :");
	printf("le titre:");
	gets()
	printf("l'idantifiant :");
	scanf()
	
	
}






































int main(){
	
	
	
	return 0;
}
