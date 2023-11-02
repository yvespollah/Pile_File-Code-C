#include<stdio.h>
#include<stdlib.h>

#include "pile.h"
 PILe *sommetd=NULL;
//fonction pour initialise la file
void initFileD(){
sommetd=NULL;
}
int Est_videD(){
if(sommetd==NULL){
    return 1;
}else{
return 0;
}
}

//empiler les element
void PushD(int x){
	PILe *pt;
	pt= (PILe*)malloc(sizeof(PILe));
	pt->value=x;
	if (Est_videD()){
		pt->next=NULL;
		sommetd=pt;
	}
		else{
			pt->next = sommetd;
			sommetd=pt;
		}
		printf("element %d a ete empiler\n",x);
}

//depiler de la pile

void PopD(){
		if (Est_videD()){
		return;
	}
		else{
			printf("element %d a ete depiler\n",sommetd->value);
			PILe *temp=sommetd;
			sommetd=sommetd->next;
			free(temp);
	}

		}

		//fonction pour afficher la pile
	void afficheD(){
			if (Est_videD()){
		printf("la pile est vide\n");
	}else{
     PILe *temp=sommetd;
	 while(temp!=NULL){
	 	printf("%d\n" ,temp->value);
	 	temp=temp->next;
	 }
	}
	}
