#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Question {
    char question[100];
    char options[3][50];
    int reponsecorrect;
};

int main() {
	int i,j;
	int score = 0;
	char prenom[30];
	printf("veuillez saisir votre prenom :\n");
	gets(prenom);
	printf("*********salut %s et bienvenue dans ce quizz de culture generale!*********\n",prenom);

    struct Question questions[12] = {
        {"Quelle est la capitale de danemark ?", {"venice", "copenhague", "quebec"}, 2},
        {"Qui traite les maladies de la peau ?", {"Dermatologue", "Endocrinologue", "Unologue"}, 1},
        {"Quel celebre scientifique a formule la theorie de la relativite ?", {"isaac Newton", "Albert Einstein", "galilee"}, 2},
        {"Quelle planete est surnommee 'la planete rouge' ?", {"venus", "jupiter", "mars"}, 3},
        {"Quel est le plus grand ocean du monde ?", {"Atlantique", "Indien", "Pacifique"}, 3},
        {"Ou se trouve florence ?", {"italie", "paraguay", "venezuela"}, 1},
        {"Quelle est la duree d un jour sur mars?", {"12h", "24h et 37min", "24h"}, 2},
        {"Quelle est la monnaie officielle du canada ?", {"Dollar americain", "Dollar canadien", "Livre sterling"}, 2},
        {"Quel est le plus grand organe du corps humain ?", {"coeur", "cerveau", "Peau"}, 3},
        {"Quel est le symbole chimique de l'or ?", {"Fe", "Au", "Ag"}, 2},
        {"Quelle est la planete la plus eloignee de notre systeme solaire ?", {"Neptune", "Uranus", "Pluton"}, 1},
        {"Quelle ville est surnommee 'la ville Eternelle' ?", {"Rome", "Athenes", "Paris"}, 1}
        
     };

    for ( i = 0; i < 12; i++) {
        printf("%s\n", questions[i].question);
        for ( j = 0; j < 3; j++) {
            printf("%d. %s\n", j + 1, questions[i].options[j]);
        }
        int reponse;
        printf("Votre reponse (1-3) : ");
        scanf("%d", &reponse);
        if (reponse == questions[i].reponsecorrect) {
            printf("Bonne reponse !\n");
            score++;
        } else {
            printf("Mauvaise reponse. La reponse correcte est : %d\n", questions[i].reponsecorrect);
        }
    }
    printf("Score final : %d/12\n", score);
    if(score>=6){
    	printf("bravo!vous etes le meilleur! ");
    	}else {
		printf("oups!vous devez travailler a votre culture generale ! ");
		}


    return 0;
}
