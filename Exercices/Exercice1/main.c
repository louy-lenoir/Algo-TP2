#include <stdio.h>

/*
========================================================================
Concepts : struct, enum, passage par adresse, printf / scanf
========================================================================
*/


// 1. Définis une énumération enum Classe pour représenter les classes d’un jeu : GUERRIER, MAGE, ARCHER, ASSASSIN

enum Classe{
    GUERRIER,
    MAGE,
    ARCHER,
    ASSASSIN
};

struct Joueur {
    char nom[30];
    int niveau;
    enum Classe classe;
    float pointsDeVie;
};

void afficherJoueur(const struct Joueur *j);

void monterNiveau(struct Joueur *j);

int main(void) {
  // 4. crée un tableau de 3 joueurs, initialise-les avec scanf et affiche-les après montée de niveau.

    struct Joueur Tableau[3];
    int i=0;
    printf("%s %s %s");
    for (i=0;i<3;i++){
        printf("QUEL EST TON NOM ? ");
        scanf("%s",Tableau[i].nom);
        printf("QUEL EST TON NIVEAU ? ");
        scanf("%d",&Tableau[i].niveau);
        printf("\nQUEL EST TA CLASSE ? ");
        scanf("%d",&Tableau[i].classe);
        printf("QUEL EST TON NOMBRE DE POINTS DE VIE ? ");
        scanf("%f",&Tableau[i].pointsDeVie);
        fflush(stdin);
    }
    for (i=0;i<3;i++){
        monterNiveau(&Tableau[i]);
        afficherJoueur(&Tableau[i]);
    }
    return 0;
};

// 2. Ecrir une fonction void afficherJoueur(const struct Joueur *j) qui affiche toutes ses infos.

void afficherJoueur(const struct Joueur *j){
    printf("\nNom : %s\n Niveau : %d \n Classe : %d \nPoints de vie : %.2f",j->nom,j->niveau,j->classe,j->pointsDeVie);
};

//void afficherJoueur(const struct Joueur *j){
//    printf("\nNom : %s\n Niveau : %d \nPoints de vie : %.2f",j->nom,j->niveau,j->pointsDeVie);
//};

// 3. Ecrir Une fonction void monterNiveau(struct Joueur *j) qui augmente le niveau et les points de vie.

void monterNiveau(struct Joueur *j){
    j->niveau=j->niveau+1;
    j->pointsDeVie=j->pointsDeVie+1;
};
