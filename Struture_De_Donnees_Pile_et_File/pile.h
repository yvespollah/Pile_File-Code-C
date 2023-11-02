#ifndef PILE_H
#define PILE_H
#define n 5

//structure de la pile statique
struct pileS{
int tab[n];
int sommet;
};
typedef struct pileS PILE;
PILE p;

//structure de la pile dynamique
typedef struct pile{
	int value;
	struct pile *next;
} PILe;
extern PILe *sommetd;


void initPileS();
int Est_videS();
int verifierPilePleinS();
void PushS(int x);
 void PopS();
 void afficheS();


//fonction pour initialise la file
void initFileD();
int Est_videD();
void PushD(int x);
void PopD();
void afficheD();

#endif // PILE_STATIC

