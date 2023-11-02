#ifndef FILE_H
#define FILE_H

//STRCTURE DUNE FILE Static
 struct file{
int fins,debut;
int array[5];
};
typedef struct file File;
File pt;

//STRCTURE DUNE FILE Static
typedef struct file_d{
	int value;
	struct file_d *next;
} LISTE;
extern LISTE *debut,*fin;

void initFile();
int Est_vide();
int verifierFilePlein();
void Enfiler_S(int x);
void  Defiler_S();
void affiche_S();


void initFile_d();
int Est_vide_d();
//fonction pour emfiler dans la file
void Enfiler_d(int x);
//fonction pour defiler dans une file
void Defiler_d();
//fonction de laffichage de la file
void affiche_d();

#endif // FILE_H
