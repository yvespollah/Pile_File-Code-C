
#include<stdio.h>
#include<stdlib.h>

#include "file.h"

//fonction pour initialiser la file

void initFile(){
pt.debut=-1;
pt.fins=-1;
}

//fonction pour verifier si la file est  vide

int Est_vide(){
if(pt.debut==-1){
    return 1;
}else{
return 0;
}
}

int verifierFilePlein(){
if(((pt.debut-pt.fins)%5)==1){
    printf("La file est plein\n");
    return 1;
}else{
    return 0;
}
}

//fonction pour Emfiler dans une file

void Enfiler_S(int x){
     
    if(verifierFilePlein()){
    return;
    }else 
      printf("lelement %d a ete emfiler\n",x);
      if(Est_vide()){
    pt.debut=0;
        pt.fins=0;
        pt.array[pt.debut]=x;
      // printf("%d\n",pt.debut);
      }else{
        pt.array[((pt.fins)+1)%5]=x;
        pt.fins=((pt.fins)+1)%5;
      }
   
}
    //fonction pour defiler dans une file
void  Defiler_S(){
if(Est_vide()){
    printf("la file est vide\n");
    return;
}else{
    
        printf("lelement defiler de la file est:%d\n",pt.array[pt.debut]);
        if(pt.debut==pt.fins){
            pt.debut=-1;
            pt.fins=-1;
        }else    
        pt.debut=(pt.debut+1)%5;
}  
}


void affiche_S(){
    int i;
if(Est_vide()){
    printf("rien a afficher\n");
    return;
}else{
    printf("la file est:\n");
    for(i=pt.debut;i!=pt.fins ;i=(i+1)%5){
        printf("%d\n",pt.array[i]);
    }   
         printf("%d\n",pt.array[pt.fins]);
    }
}

