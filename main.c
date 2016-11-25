#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include "fonctions.h"
#define TAILLE_MAX 1000
#define FICHIER "dico"


int main()
{
srand(time(NULL));

FILE* fichier = NULL;
int longueur = 0;
char motsecret[TAILLE_MAX] = "";
char motcrypte[TAILLE_MAX] = "";
char lettre[2] = "";
char lettre_tape[TAILLE_MAX] = "";
int coups; // Nombre de coups faisable pour un jeu
int i =0;
int gagner = 1; // utiliser pour savoir si le joueur a gagner ou non une fois la partie finie
long nombre_aleat = 0;
int trouve = 0; // permet de savoir si une lettre a etait trouve ou non
int choix = 0;
long MAX = 0;
int MIN = 1;
int caractereLu = 0;
long memAleat = -1;
int j = 0;
int nombre_aleatCoeff = 0;
long rnd = 0;
int coeff = 0;
int lettreRate = 0;
debut:

do
{

system("cls");
printf("choisissez votre difficulte :\n\n");
printf("1 : Normal    ( 2500 mots courants de la langue francaise.)\n");
printf("2 : Difficile ( 330 000 mots soutenus et courants de la langue francaise.)\n");
printf("\nVotre choix : ");

scanf("%d",&choix);
}
while(choix != 1 && choix != 2);



viderchaine(motcrypte,TAILLE_MAX); // vider le contenue de motcrypte
viderchaine(motsecret,TAILLE_MAX);
viderchaine(lettre_tape,TAILLE_MAX);
coups = 11;
gagner = 1;
trouve = 0;
longueur = 0;
MAX = 0;
caractereLu = 0;


if(choix == 1)
{
	coeff = 2;
fichier = fopen(FICHIER,"r");
}
else
{
	coeff = 3;
fichier = fopen("dicoDiff","r");
}
if(fichier != NULL)
{


 do
    {
        caractereLu = fgetc(fichier); // on compte le nombre de '\n'
        if (caractereLu == '\n')
            MAX++;
    } while(caractereLu != EOF);


MAX--;

rnd = rand()*RAND_MAX + rand(); // génére un nombre entre 0 et RAND_MAX au carré 
nombre_aleat = rnd%MAX; // Génere un nombre entre 0 et MAX





rewind(fichier);

while (nombre_aleat > 0) // On place le curseur devant le mot tirer aleatoirement
    {
        caractereLu = fgetc(fichier);
        if (caractereLu == '\n')
            nombre_aleat--;
    }


fgets(motsecret,TAILLE_MAX,fichier); // on recupere ce mot qu'on stock dans mot secret


motsecret[strlen(motsecret) -1 ] = '\0'; // On remplace le \n de mot secret par un arret (le \n est le saut de ligne du fichier)
}





else
{

printf("\n Le dictionnaire n'a pas pu etre charge.\nFermeture obligatoire..\n");
system("PAUSE");
exit(0);
}

fclose(fichier);




longueur = strlen(motsecret);






for(i = 0; i < longueur; i++) // On met des "*" 
{

motcrypte[i] = '*';	
	
}




for(i = 0; i < longueur; i++) // On met en majuscule le mot secret
{
motsecret[i] = toupper(motsecret[i]);

}


getchar();


while(strcmp(motsecret,motcrypte) != 0 && coups != 0)
{
system("cls");
printf("JEU du Pendu. Version 4.5.5\n");
printf("\n");
bonhomme(coups); // afficher l'animation du bonhomme
printf("Quel est le mot secret ? %s\n", motcrypte);	
printf("\nLettres tapees : %s\n\n",lettre_tape);	
printf("\nProposez une lettre : ");


trouve = 0;


lettre[1] = lireCaractere(); // fonction pour recuperer lettre

lettre_tape[j] = lettre[1];
j++;

for(i = 0; i < longueur; i++)
{

if(lettre[1] == motsecret[i])
{
trouve = 1;
motcrypte[i] = lettre[1];
}
}

if(trouve == 0) { coups--; lettreRate++; } // Si une lettre n'a pas etait trouve, - 1 a coups



if(coups == 0){gagner = 0; }




}


if(gagner == 1)
{

printf("\nGagne ! Le mot secret etait bien : %s\n",motsecret);

int score = 0;
score = longueur * coeff - lettreRate;
printf("Vous avez fait un score de %d point(s) !",score);
}
else
{

printf("_____________\n");
printf(" | /       |\n");
printf(" |/        O\n");
printf(" |        /#\\\n");
printf(" |        / \\\n");
printf(" |\n");
printf("_|____________\n");


printf("\nVous avez perdu(e). Le mot a trouver etait : %s\n",motsecret);
}

system("PAUSE");
system("start JeuduPendu.exe");


}
