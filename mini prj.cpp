#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    const int max = 100 ;
char titre [max] [50];
char auteur [max] [50];
float prix[max];
int quantite [max] , opt=0;
int stock = 0;
int quit = 0;

while(true){
	int found0 = 0;
	int fg = 0;
    printf ("1.Ajouter un livre au stock.\n");
    printf ("2.Afficher tous les livres disponibles.\n");
     printf ("3.Rechercher un livre par son titre.\n");
      printf ("4.Mettre à jour la quantité d'un livre.\n");
        printf ("5.Supprimer un livre du stock.\n");
      printf ("6.Afficher le nombre total de livres en stock\n.");
      printf("7.quitter\n");
      printf("Opttion\n");
      scanf("%d" ,&opt);
      switch (opt)
      {
      case 1:
      	
      	if (stock < max){
		  
         printf("Ajouter un Livre au Stock:");
         scanf ("%s",titre[stock]);
         printf("Entrer l'auteur du livre: ");
         scanf("%s", auteur[stock]);
         printf("Entrer le prix du livre: ");
         scanf("%f", &prix[stock]);
         printf("Entrer la quantité en stock: ");
         scanf("%d", &quantite[stock]);
      	
        stock++;
       } else {
                    printf("Stock plein, impossible d'ajouter plus de livres.\n");
              }
        break;
      
      
      
     case 2:
     	
                printf("\tliste disponible de livre:\n\n");
                for(int i = 0; i < stock; i++ ) {
                printf("\tlivre %d :\n",i+1);
                printf("le titre de livre est : %s\n",titre[i]);
                printf("l'auteur est          : %s\n" ,auteur[i]);
                printf("Prix  est             : %.2f\n", prix[i]);
                printf("Quantite              : %d\n\n", quantite[i]);
                    } 
                    
        		break;

                  
     case 3:     
     			char rch[99];
     			
     	        printf("donnez-moi le titre de livre:\n\n");
     	        scanf("\n");
     	        scanf("%s",rch); 
     	        for(int i=0;i<stock;i++){
     	        	if(strcmp(titre[i],rch)==0){
     	        	found0=1;
     	        	printf("\tlivre %d :\n",i+1);
	                printf("le titre de livre est : %s\n",titre[i]);
	                printf("l'auteur est          : %s\n" ,auteur[i]);
	                printf("Prix  est             : %.2f\n", prix[i]);
	                printf("Quantite              : %d\n\n", quantite[i]);
				 }
				 }if(found0==0){
				 	printf("\tlivre pas disponible!!\n");
				 }       
				break;               
    case 4:
	 	     	char rch1[99];
     			
     	        printf("donnez-moi le titre de livre:\n\n");
     	        scanf("\n");
     	        scanf("%s",rch1); 
     	        for(int i=0;i<stock;i++){
     	        	if(strcmp(titre[i],rch1)==0){
     	        	fg=1;
					printf("\nEntrez la nouvelle quantity : ");
					scanf("%d",&quantite[i]);
				 }
				 }if(fg==0){
				 	printf("\tlivre pas disponible!!\n");
				 }
				 break;  
	case 7:
		quit = 1;
		break;
    case 5:
	                           


}
if(quit==1){break;}
}}

      
       
    
