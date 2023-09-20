#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//---------------------------------------------LES STRUCTURES-----------------------------------------------------------------------------------
typedef struct datecomplet{
	int jour;
	int mois;
	int annee;
}datecomplet;


typedef struct typetache{
	int identifian;
	char titre[50];
	char description[250];
	struct datecomplet deadline;
	char statut[20];
}typetache;
//----------------------------------------declaration-------------------------------------------------------------------------------------------
typetache ajouter	, tache[150];
typetache ajouter_plusieurs;
int i , nombreajoute;



//----------------------------------------------------------------------------------------------------------------------------------------------
void menu (){
	
	printf("\n         1__________________Ajouter une nouvelle tache ____\n");
	printf("\n         2_________Ajouter plusieurs nouvelles taches______\n");
	printf("\n         3_________Afficher la liste de toutes les taches__\n");
	printf("\n         4_________________Modifier une tache_____________ \n");
	printf("\n         5_____________Ajouter une nouvelle tache_________ \n");
	printf("\n         6____________Supprimer une tache par identifiant. \n");
	printf("\n         7________________Rechercher les Taches____________\n");
	printf("\n         8____________________Statistiques________________ \n");
	printf("\n         9_______________________QUITTER ___________________\n");	
}

void ajoute(){
	printf("Ajouter une nouvelle tache : \n");
	printf("le titre: ");
	scanf("  %[^\n]s ",ajouter.titre);
	printf("l'idantifiant :");
	scanf("%d",&ajouter.identifian);
	printf("veuillez saisir la description de votre tache : ");
	scanf("  %[^\n]s ",ajouter.description);
	printf("---------deadline-----------  \n");
	printf("le jour : ");
      scanf("%d", &ajouter.deadline.jour);
	printf("le mois :");
	scanf("%d", &ajouter.deadline.mois);
	printf("l'annee :");
	scanf("%d",&ajouter.deadline.annee);
	printf("veuillez saisir le statut de votre tache : ");
	scanf("  %[^\n]s  ",ajouter.statut);	
}

void ajouter_plusieurs(){
	printf("veuillez saisir nombre des taches a ajouter ");
	scanf("%d",&nombreajoute);

	printf("Ajouter une nouvelle tache : \n");
	printf("le titre: ");
	scanf("  %[^\n]s ",ajouter.titre);
	printf("l'idantifiant :");
	scanf("%d",&ajouter.identifian);
	printf("veuillez saisir la description de votre tache : ");
	scanf("  %[^\n]s ",ajouter.description);
	printf("---------deadline-----------  \n");
	printf("le jour : ");
      scanf("%d", &ajouter.deadline.jour);
	printf("le mois :");
	scanf("%d", &ajouter.deadline.mois);
	printf("l'annee :");
	scanf("%d",&ajouter.deadline.annee);
	printf("veuillez saisir le statut de votre tache : ");
	scanf("  %[^\n]s  ",ajouter.statut);	
}






































int main(){
	int choix;
	menu();
	printf("veuillez entrer votre choix : ");
	scanf("%d",&choix);
	switch(choix){
		case 1 : ajoute();
		break;
		default : printf("error");
		break;
	}
	
	
	return 0;
}
