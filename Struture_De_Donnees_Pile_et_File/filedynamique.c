#include<stdio.h>
#include<stdlib.h>

#include "file.h"
LISTE *debut,*fin=NULL;
//fonction pour initialise la file
void initFile_d(){
debut=NULL;
fin=NULL;
}
int Est_vide_d(){
if(debut==NULL){
    return 1;
}else{
return 0;
}
}

//fonction pour emfiler dans la file
void Enfiler_d(int x){
	LISTE *pt;
	pt= (LISTE*)malloc(sizeof(LISTE));
	pt->value=x;
	if (Est_vide_d()){
		debut=pt;
		fin=pt;
		pt->next=NULL;
	}else{
	    fin->next=pt;
	    pt->next=NULL;
	    fin=fin->next;
		}
		printf("element %d a ete enfiler\n",x);
}

//fonction pour defiler dans une file
void Defiler_d(){
		if (Est_vide_d()){
		printf("rien a defiler\n");
	}
		else{
			printf("element %d a ete depiler\n",debut->value);
			LISTE *temp=debut;
			debut=debut->next;
			
			free(temp);
	}
		}
//fonction de laffichage de la file
	void affiche_d(){
			if (Est_vide_d()){
				return;
	}else{
     LISTE *temp=debut;
     while(temp!=NULL){
        printf("%d\n" ,temp->value);
	 	temp=temp->next;
     }
	}

	}

