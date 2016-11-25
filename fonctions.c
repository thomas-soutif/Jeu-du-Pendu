#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


char lireCaractere()
{
	
char caractere = 0;
caractere = getchar(); // On lit le premier caractère
caractere = toupper(caractere); // On met la lettre en majuscule si elle ne l'est pas déjà
// On lit les autres caractères mémorisés un à un jusqu'au \n (pour les effacer)
while (getchar() != '\n') ;
return caractere; // On retourne le premier caractère qu'on a lu 
	
	
	
}


void viderchaine(char *chaine, int taille)
{
int i;
for(i = 0; i < taille; i++)
{
chaine[i] = '\0';


}


}



void bonhomme(int coup)
{


if(coup == 10)
{

// 1 //

printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("_____________\n");


}

else if(coup == 9)
{



// 2 //

printf("\n");
printf(" |\n");
printf(" |\n");
printf(" |\n");
printf(" |\n");
printf(" |\n");
printf("_|____________\n");




}

else if(coup == 8)
{


// 3 //

printf("_____________\n");
printf(" |\n");
printf(" |\n");
printf(" |\n");
printf(" |\n");
printf(" |\n");
printf("_|____________\n");

}


else if(coup == 7)
{


// 4 // 
printf("_____________\n");
printf(" | /\n");
printf(" |/\n");
printf(" |\n");
printf(" |\n");
printf(" |\n");
printf("_|____________\n");


}

else if(coup == 6)
{


// 5 //

printf("_____________\n");
printf(" | /       |\n");
printf(" |/\n");
printf(" |\n");
printf(" |\n");
printf(" |\n");
printf("_|____________\n");


}



else if(coup == 5)
{


// 6 //

printf("_____________\n");
printf(" | /       |\n");
printf(" |/        O\n");
printf(" |\n");
printf(" |\n");
printf(" |\n");
printf("_|____________\n");


}

else if(coup == 4)
{


// 7 //
printf("_____________\n");
printf(" | /       |\n");
printf(" |/        O\n");
printf(" |         # \n");
printf(" |\n");     
printf(" |\n");
printf("_|____________\n");

}





else if(coup == 3)
{


// 8 //

printf("_____________\n");
printf(" | /       |\n");
printf(" |/        O\n");
printf(" |         #\\\n");
printf(" |\n");
printf(" |\n");
printf("_|____________\n");

}

else if(coup == 2)
{

// 9 //

printf("_____________\n");
printf(" | /       |\n");
printf(" |/        O\n");
printf(" |        /#\\\n");
printf(" |            \n");
printf(" |\n");
printf("_|____________\n");


}

else if(coup == 1)
{


printf("_____________\n");
printf(" | /       |\n");
printf(" |/        O\n");
printf(" |        /#\\\n");
printf(" |          \\\n");
printf(" |\n");
printf("_|____________\n");




}











}







