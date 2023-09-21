#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//---------------------------------------------LES STRUCTURES----------------------------------------------------------------------------------------
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
//----------------------------------------[ declaration ] -------------------------------------------------------------------------------------------

typetache ajouter	, tache[300];
typetache ajouter_plusieurs;
int i=0 , nombreajoute, nombretaches=0, N=0, id=0,comparer=0;



//----------------------------------------------------[ menu ]------------------------------------------------------------------------------------------
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
//----------------------------------------------------[fonction pour ajouter une tache ]-------------------------------------------------------------------------------------

void ajoute(){
	
	printf("Ajouter une nouvelle tache : \n");
	printf("le titre: ");
	scanf("  %[^\n]s ",tache[N].titre);
	//printf("l'idantifiant :");
	//scanf("%d",&tache[N].identifian);
	printf("veuillez saisir la description de votre tache : ");
	scanf("  %[^\n]s ",tache[N].description);
	printf("---------deadline-----------  \n");
	printf("le jour : ");
      scanf("%d", &tache[N].deadline.jour);
	printf("le mois :");
	scanf("%d", &tache[N].deadline.mois);
	printf("l'annee :");
	scanf("%d",&tache[N].deadline.annee);
	printf("veuillez saisir le statut de votre tache : ");
	scanf("  %[^\n]s  ",tache[N].statut);
	nombretaches++;
	N++;
	tache[N].identifian=N;
	
	comparer++;	
}
//-----------------------------------------------------[fonctions pour ajouter plusieurs taches ]--------------------------------------------------------------------------

void ajouter_plus(){
	/*if(i==N){
		N++;
	}
	else 
	N=N;*/
	
	printf("\nveuillez saisir nombre des taches a ajouter ");
	scanf("%d",&nombreajoute);
for(i=N;i<nombreajoute+1;i++){
	printf("la tache numero %d \n",N+1);
ajoute();
	
	}	
}
void afficher(){
	for(i=0;i<nombretaches;i++){
		printf(" la tache numero :%d \n\nle titre : %s \n l'idantifiant :%d \n la description :%s \n deadline :\n le jour : %d \n le mois : %d \n l'annee : %d\n\n\n",i+1,tache[i].titre,tache[i].identifian,tache[i].description,tache[i].deadline.jour,tache[i].deadline.mois,tache[i].deadline.annee);
	}
}





































//---------------------------------------------------------------------la fonction principale (MAIN) -----------------------------------------------------------------------
int main(){
	int choix;
	while(1){
	menu();
	printf("veuillez entrer votre choix : ");
	scanf("%d",&choix);
	switch(choix){
		case 1 : ajoute(); system("cls");
		break;
		case 2 : ajouter_plus(); system("cls");
		break;
		case 3 : afficher();
		
	}
	
		
	if(choix == 9)
	break;
	};
	
	return 0;
}
