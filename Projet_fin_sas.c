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

typetache tache[300], k;
typetache ajouter_plusieurs;
int i=0 , nombreajoute, nombretaches=0, N=0, Nbrtacheajoute=0,NBR=0,comparer, j ;



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
	tache[N].identifian=nombretaches+1;
	nombretaches++;
	N++;
	
	
		
}
//-----------------------------------------------------[fonctions pour ajouter plusieurs taches ]--------------------------------------------------------------------------

void ajouter_plus(){
int Nn;
if(N==0){
	Nn=0;
}
else {
	Nn=N;
}

	printf("\nveuillez saisir nombre des taches a ajouter ");
	scanf("%d",&nombreajoute);
	if(N!=0){
		NBR=nombreajoute+N;
	}
	else{
		NBR=nombreajoute;
	}

for(i=Nn;i<NBR;i++){
	printf("la tache numero %d \n",N+1);
ajoute();
	
	}	
}

//------------------------------------------------[ fonction d'affichage ]-------------------------------------------------------------

void afficher(){
	for(i=0;i<nombretaches;i++){
		printf(" la tache numero :%d \n\nle titre : %s \n l'idantifiant :%d \n la description :%s \n deadline :\n le jour : %d \n le mois : %d \n l'annee : %d\n statut : %s \n\n\n",i+1,tache[i].titre,tache[i].identifian,tache[i].description,tache[i].deadline.jour,tache[i].deadline.mois,tache[i].deadline.annee,tache[i].statut);
	}
}

//------------------------------------------------------


void triTitres() {
    typetache temp;
int i;
int j;
    for (i = 0; i < nombretaches; i++) {
    	
    	
    	
        for (j = 1; j < nombretaches; j++) {
            if (strcmp(tache[i].titre, tache[j].titre) > 0) {
                temp = tache[i];
                tache[i] = tache[j];
                tache[j] = temp;
                
            }
        }
        
        
        
    }
    
}






void sousmenuAffich(){
	system("cls");
	printf("\n************1__Trier les taches par ordre alphabetique**************************\n");
	printf("\n************2__Trier les taches par deadline************************************\n");
	printf("\n***********3__Afficher les taches dont le deadline est dans 3 jours ou moins****\n");
	printf("\n***********3__ENTRER 0 pour reterner au menu principale*************************\n");
	
}

























//---------------------------------------------------------------------la fonction principale (MAIN) -----------------------------------------------------------------------
int main(){
	int choix ,choixdeux;
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
		break;
		case 4 :
			sousmenuAffich();
		printf("\nveuillez entrer un de ces choix  : ");
		scanf("%d",&choixdeux);
		switch(choixdeux) {
			
			case 1 : triTitres();printf("Les taches ont ete triees par titre.\n");
                 afficher();
			break;
		       
			
			
		}
        
        break;
		
	}
	
		
	if(choix == 9){
	system("cls");
	break;}
	};
	
	return 0;
}
