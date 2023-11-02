#include<stdio.h>
#include<stdlib.h>

#include "pile.h"

void initPileS(){
    p.sommet=-1;
}
int Est_videS(){
if(p.sommet==-1){
    return 1;
}else{
return 0;
}
}

//fonction pour verifier si la pile est plein

int verifierPilePleinS(){
if(p.sommet==(n-1)){
     printf("la pile est plein\n");
    return 1;
}else{
return 0;
}
}

//fonction pour push(pour ajouter un element dans une pile)

void PushS(int x){
if(verifierPilePleinS()){
        printf("pile plein impossible dajouter\n");
    return;
}else{
    printf("empiler\n");
p.sommet++;
p.tab[p.sommet]=x;
}
}

//fonction pop(pour retirer un element dans la pile

void PopS(){
if(Est_videS()){
   printf("la pile est vide\n");

}else{
printf("la valeur depiler est:%d\n",p.tab[p.sommet]);

p.sommet--;

}
}
//fonction pour afficher les element dune pile
void afficheS(){
    int i;
if(Est_videS()){
        printf("rien a afficher\n");
}else{
	//p.sommet=n-1;
for(i=p.sommet;i>=0;i--){
    printf("%d\n",p.tab[i]);
}
}
}
