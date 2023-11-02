#include <stdio.h>
#include <stdlib.h>
#define n 5

#include "pile.h"
#include "file.h"

int main(){

printf("########:LES PILE STATIC##########\n\n");
 initPileS();
    PopS();
    afficheS();
    PopS();
     afficheS();
    PushS(1);
     afficheS();
    PushS(2);
     afficheS();
    PushS(3);
     afficheS();
    PopS();
     afficheS();
    PushS(4);
     afficheS();
    PushS(5);
     afficheS();
    PopS();
     afficheS();
    PushS(6);
     afficheS();
    PushS(7);
     afficheS();
    PushS(8);
     afficheS();
    PushS(9);
     afficheS();
    PushS(10);
     afficheS();
    PopS();
     afficheS();


    printf("#######:LES PILE DYANAMIQUE############\n\n");
         PopD();
    afficheD();
    PopD();
     afficheD();
    PushD(1);
     afficheD();
    PushD(2);
     afficheD();
    PushD(3);
     afficheD();
    PopD();
     afficheD();
    PushD(4);
     afficheD();
    PushD(5);
     afficheD();
    PopD();
     afficheD();
    PushD(6);
     afficheD();
    PushD(7);
     afficheD();
    PushD(8);
     afficheD();
    PushD(9);
     afficheD();
    PushD(10);
     afficheD();
    PopD();
     afficheD();

     printf("A-Les pile(static et dynamique\n\n");
     printf("Q2-pour la pile static,nous avos 6 au sommet de la pile\n\n");
     printf("et pour la pile dynamique,nous avos 9 au sommet de la pile\n\n");
     printf("Q3  la fonction  depile ne sexecute pa 2 fois dans\n le code puisque il ya rien a depiler\n\n");
     printf("Q4  la fonction  empile ne sexecute pa 3 fois avec la pile static\n  puisque la pile est plein\n\n");
printf("########:LES FILE STATIC##########\n\n");
 initFile(); 
    Defiler_S();
    affiche_S();
    Defiler_S();
     affiche_S();
    Enfiler_S(1);
     affiche_S();
    Enfiler_S(2);
     affiche_S();
    Enfiler_S(3);
     affiche_S();
    Defiler_S();
     affiche_S();
    Enfiler_S(4);
     affiche_S();
    Enfiler_S(5);
     affiche_S();
    Defiler_S();
     affiche_S();
    Enfiler_S(6);
     affiche_S();
    Enfiler_S(7);
     affiche_S();
    Enfiler_S(8);
     affiche_S();
    Enfiler_S(9);
     affiche_S();
    Enfiler_S(10);
     affiche_S();
    Defiler_S();
     affiche_S();


    printf("#######:LES FILE DYANAMIQUE############\n\n");
         Defiler_d();
    affiche_d();
    Defiler_d();
     affiche_d();
    Enfiler_d(1);
     affiche_d();
    Enfiler_d(2);
     affiche_d();
    Enfiler_d(3);
     affiche_d();
    Defiler_d();
     affiche_d();
    Enfiler_d(4);
     affiche_d();
    Enfiler_d(5);
     affiche_d();
    Defiler_d();
     affiche_d();
    Enfiler_d(6);
     affiche_d();
    Enfiler_d(7);
     affiche_d();
    Enfiler_d(8);
     affiche_d();
    Enfiler_d(9);
     affiche_d();
    Enfiler_d(10);
     affiche_d();
    Defiler_d();
     affiche_d();     

      printf("B-Les file(static et dynamique\n\n");
      printf("Q2-pour la file static,nous avos 7 au sommet de la file\n");
     printf("et pour la file dynamique,nous avos 10 au sommet de la file\n\n");
     printf("Q3-pour la file static,nous avos 4 en queue de la file\n");
     printf("et pour la file dynamique,nous avos 10 au sommet de la file\n\n");

      printf("Q4  la fonction  defile ne sexecute pa 2 fois dans\n le code puisque il ya rien a defiler\n\n");
     printf("Q5  la fonction  emfile ne sexecute pa 3 fois avec la file static\n  puisque la file est plein\n\n");
printf("Q6 dans la file static,lindice de debut est: 3 et lindice de fin est: 1   \n\n");
}
