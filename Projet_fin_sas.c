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
      printf("\n        ====================================================== ");
	printf("\n        |1__________________Ajouter une nouvelle tache ______| ");
	printf("\n        |2_________Ajouter plusieurs nouvelles taches________| ");
	printf("\n        |3_________Afficher la liste de toutes les taches____| ");
	printf("\n        |4_________________Modifier une tache________________| ");
	printf("\n        |5____________Supprimer une tache par identifiant____| ");
	printf("\n        |6________________Rechercher les Taches______________| ");
	printf("\n        |7____________________Statistiques___________________| ");
	printf("\n        |8_______________________QUITTER ____________________| ");	
	printf("\n        ====================================================== \n");
}
//----------------------------------------------------[fonction pour ajouter une tache ]-------------------------------------------------------------------------------------

void ajoute(){
	
	printf("\nAjouter une nouvelle tache : \n");
	printf("le titre: ");
	scanf("  %[^\n]s ",tache[N].titre);
	//printf("l'idantifiant :");
	//scanf("%d",&tache[N].identifian);
	printf("veuillez saisir la description de votre tache : ");
	scanf("  %[^\n]s ",tache[N].description);
	printf("---------date limite-----------  \n");
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
int debutboucle;
if(N==0){
	debutboucle=0;
}
else {
	debutboucle=N;
}

	printf("\nveuillez saisir nombre des taches a ajouter ");
	scanf("%d",&nombreajoute);
	if(N!=0){
		NBR=nombreajoute+N;
	}
	else{
		NBR=nombreajoute;
	}

for(i=debutboucle;i<NBR;i++){
	printf("la tache numero %d \n",N+1);
ajoute();
	
	}	
}

//------------------------------------------------[ fonction d'affichage ]-------------------------------------------------------------

void afficher(){
	for(i=0;i<nombretaches;i++){
		printf(" la tache numero :%d \n\nle titre : %s \n l'idantifiant :%d \n la description :%s \n date limite  \n le jour : %d \n le mois : %d \n l'annee : %d\n statut : %s \n\n\n",i+1,tache[i].titre,tache[i].identifian,tache[i].description,tache[i].deadline.jour,tache[i].deadline.mois,tache[i].deadline.annee,tache[i].statut);
	}
}

//------------------------------------------------------finction de trie par alphabetique -----------------------------------------------------------------------------


void triTitres() {
    typetache temp;
int i;
int j;
    for (i = 0; i < nombretaches-1; i++) {
    	
		for (j = 1; j < nombretaches; j++) {
            if (strcmp(tache[i].titre, tache[j].titre) > 0) {
                temp = tache[i];
                tache[i] = tache[j];
                tache[j] = temp;
                }
          }  
     }
}
//------------------------------------------------------finction de trie par date  -----------------------------------------------------------------------------

void tridate() {
    typetache temp;
int i;
int j;
    for (i = 0; i < nombretaches-1; i++) {
    	
    	
    	
        for (j = 1; j < nombretaches; j++) {
            if (tache[i].deadline.annee > tache[j].deadline.annee || tache[i].deadline.mois > tache[j].deadline.mois || tache[i].deadline.jour > tache[j].deadline.jour) {
                temp = tache[i];
                tache[i] = tache[j];
                tache[j] = temp; 
            }
        }  
    }  
}
//----------------------------------------------fonction de modification---------------------------------------------------------------
void modifierTache(){
    int identifiant;
    int trouve = 0;

    printf("Entrez l'identifiant de la tache a modifier : ");
    scanf("%d", &identifiant);
    for (i = 0; i < nombretaches; i++) {
        if (tache[i].identifian == identifiant) {
            printf("Modification de la tache numero %d :\n", identifiant);
            printf("Nouveau titre : ");
            scanf(" %[^\n]s", tache[i].titre);
            printf("Nouvelle description : ");
            scanf(" %[^\n]s", tache[i].description);
            printf("Nouveau jour de la date limite : ");
            scanf("%d", &tache[i].deadline.jour);
            printf("Nouveau mois de la date limite : ");
            scanf("%d", &tache[i].deadline.mois);
            printf("Nouvelle annee de la date limite : ");
            scanf("%d", &tache[i].deadline.annee);
            printf("Nouveau statut : ");
            scanf(" %[^\n]s", tache[i].statut);
            trouve = 1;
            break; 
        }
    }

    if (!trouve) {
        printf("Tache avec l'identifiant %d non trouvee.\n", identifiant);
    } else {
        printf("Tache numero %d modifiee avec succes.\n", identifiant);
    }
}
//---------------------------------------------------------fonction de supprimer une tache ------------------------------------------
void supprimerTache() {
    int identifiant;
    int trouve = 0;

    printf("entrez l'identifiant de la tâche a suprimer : ");
    scanf("%d", &identifiant);

    
    for (i = 0; i < nombretaches; i++) {
        if (tache[i].identifian == identifiant) {
          
            for (j = i; j < nombretaches - 1; j++) {
                tache[j] = tache[j + 1];
            }
            nombretaches--;
            trouve = 1;
            break; 
        }
    }

    if (trouve!=0) {
        printf("Tache avec l'identifiant %d non trouvee.\n", identifiant);
    } else {
        printf("Tache numero %d supprimee avec succes.\n", identifiant);
    }
}



//------------------------------------------------------fonction de sous menu d'affichage  -----------------------------------------------------------------------------

void sousmenuAffich(){
	system("cls");
	printf("\n************___1__Trier les taches par ordre alphabetique__**************************\n");
	printf("\n**********____2__Trier les taches par deadline___************************************\n");
	printf("\n***********____3__Afficher les taches dont le deadline est dans 3 jours ou moins___****\n");
	printf("\n***********___4__ENTRER 0 pour reterner au menu principale*************************\n");
	
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
			sousmenuAffich();
		printf("\nveuillez entrer un de ces choix  : ");
		scanf("%d",&choixdeux);
		switch(choixdeux) {
			
			case 1 : triTitres();printf("Les taches ont ete triees par titre.\n");
                 afficher();
                 break;
                 case 2 : tridate(); printf("Les taches ont ete triees par date limite .\n");
                 afficher();
			break;
			case 3 :afficher();
			break;	
		}
		break;
		
        case 4 : modifierTache();
        afficher();
        break;
		
	}
	
		
	if(choix == 8){
	system("cls");
	break;}
	};
	
	return 0;
}
