#include <stdio.h>
#include <math.h>

void ajouterproduit(int *ids, int *qnt, int n) {
    int id, quntite, i;
    printf("ID  : ");
    scanf("%d", &id);
    printf("QUNTITE  : ");
    scanf("%d", &quntite);

    for (i = 0; i < n; i++) {
        if (ids[i] == id) {
            qnt[i] += quntite;
            printf("**************************************\n");
            printf(" La valeur a ete ajoutee a l'ancien  \n");
            printf("**************************************\n");
            return;
        }
    }

    qnt[n] = quntite;
    ids[n] = id;
    printf("---------------------------------------\n");
    printf(" votre nouveau quantite a ete ajoutee \n");
    printf("---------------------------------------\n");
}
int affichag(int *ids,int *qnt,int n){
	int i = 0;
    for (i = 0; i < n; i++)
    {
	if(qnt[i]>0){
	
		printf("---------------------------------------\n");
        printf("  ID %d   	  qunteti %d \n",ids[i],qnt[i]);
        printf("---------------------------------------\n");
    }}
    return 0;
    
}

int retirerproduit(int *ids, int *qnt, int n) {
    int id, i,quntite;

    printf("ID du produit a retirer : ");
    scanf("%d", &id);

    for (i = 0; i < n; i++) {
        if (ids[i] == id) {
        	printf("la quntite : ");
        	scanf("%d",&quntite);
        		if (quntite>qnt[i]){
        		printf("***************************************************\n");
        		printf("La quantite est superieure a ce qui est disponible. ");
        		printf("***************************************************\n");
					}else {
				qnt[i]-=quntite;
				printf("--------------------------------------------\n");
				printf("La quantité specifie a ete retiree du stock \n");
				printf("--------------------------------------------\n");
			}
        
            return 0;
        }
    }
    printf("***************************************\n");
    printf("		produit non trouve \n");
    printf("***************************************\n");
}

int main()
{
	int ids[100];
 	int qnt[100] ;
	int n=0;
	int C;
	C=1;
	while (C>=1) {
printf("=======================================\n");
printf("		menu : \n");
printf("=======================================\n");
printf("	1- Affiche le stock \n");
printf("	2- Ajouter produit \n");
printf("	3- retirer produit \n");
printf("	0- Quite \n");
printf("Votre choix : ");
scanf("%d",&C);
switch(C){
	case 0 :
		printf(" q \n");
		break;
	case 1 :
		affichag(ids,qnt,n);
		break;
	case 2:
		ajouterproduit(ids, qnt, n);
		n++;
		break;
	case 3:
		retirerproduit(ids,qnt,n);
		break;	
	default :
		printf("***********************\n");
		printf(" Le choix n'existe pas \n");
		printf("***********************\n");
		break;
}
}
}
