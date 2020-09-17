// But: Écrire un programme pour calculer le montant qu’un individu devra débourser pour faire un voyage dans une
// automobile louée.L’algorithme tient compte du kilométrage parcouru et de la durée du voyage qui sont
// soumises par le requérant.
// Auteur: Benjamin Lemire
// Date: 2020-09-14

#include<iostream>;
using namespace std;

int main()
{
   //initialisation de la variable PrixParJour qui est de 45$ par jour
   int PrixParJour = 45;
   //initialisation de la variable qui defini le nombre de jour de la location
   int nbJour;
   //initialisation de la variable qui est celle du nombre de kilometre parcouru pour une journée
   float nbKm ;
   
   
   //Le programme demande à l'utilisateur pour combien de jour la location est prevu
   cout << "Veuilez entrez le nombre de jour pour votre location : ";
   //une fois le nombre de jour prevu inscrit par l'utilisateur, le programme lit sa reponse
   cin >> nbJour;

   //le programme demande à l'utilisateur d'inscrire le nombre de kilometrage utiliser
   cout << "Veuillez entrez le nombre de kilometre parcouru : ";
   //le programme lit la reponse entrée par l'utilisateur
   cin >> nbKm;

   //si le nombre de de jour est de 1 jour
   if (nbJour == 1)
   {
      //la console affiche le prix pour une journée
      cout << "tarif pour le nombre de jour de location : " << PrixParJour << endl;

      //initiation de la variable concommation qui est égal au calcul de la consommation qui est de 7.6 pour 100km
      float consommation = (nbKm / 100) * 7.6;
      //La console affiche le resultat du calcul de la consommation d'essence
      cout << "Le prix de l'essence est de : " << consommation * 1.25 << endl;

      //si le nombre de km parcouru est plus grand que le nombre de km gratuit par jour qui est de 250 km
      if (nbKm > 250)
      {
         //initialisation de la variable KmTarif qui est le nbKm - le nombre de km gratuit par jour afin de déterminer de combien de km le client à dépassée
         int KmTarif = nbKm - 250;
         //initialisation de la variable calculKM qui est égal au KmTarif * le tarif pour le kilometrage dépasser qui est de 0.05$ pour chaque km dépassée
         float calculKM = KmTarif * 0.05;
         //La console affiche les frais qu'il doit rembourser pour le nombre de kilometrage qu'il a dépassée
         cout << "Frais pour le nombre de kilometrage depasse : " << calculKM;
      }
      //si le kilometrage ne dépasse pas le nombre de kilometrage gratuit par jour
      else
      {
         //La console affiche comme quoi le kilometrage est respectée
         cout << "aucun tarif, kilometrage gratuit respecter !";
      }
   }
   //si le nombre de jour est plus elever que 1 jour, faire nbJour*PrixParJour
   else
   {
      //La console affiche le tarrif pour le nombre de jour total de la location 
      cout << "tarif pour le nombre de jour de location : " << PrixParJour * nbJour << endl;

      //initiation de la variable concommation qui est égal au calcul de la consommation qui est de 7.6 pour 100km
      float consommation = (nbKm / 100) * 7.6;
      //La console affiche le resultat du calcul de la consommation d'essence
      cout << "Le prix de l'essence est de : " << consommation * 1.25 << endl;

      if (nbKm > 250)
      {
         //initialisation de la variable KmTarif qui est le nbKm - le nombre de km gratuit par jour afin de déterminer de combien de km le client à dépassée
         int KmTarif = nbKm - 250;
         //initialisation de la variable calculKM qui est égal au KmTarif * le tarif pour le kilometrage dépasser qui est de 0.05$ pour chaque km dépassée
         float calculKM = KmTarif * 0.05;
         //La console affiche les frais qu'il doit rembourser pour le nombre de kilometrage qu'il a dépassée
         cout << "Frais pour le nombre de kilometrage depasse : " << calculKM;
      }
      //si le nombre de jour est plus elever que 1 jour, faire nbJour*PrixParJour
      else
      {
         //La console affiche comme quoi le kilometrage est respectée
         cout << "aucun tarif, kilometrage gratuit respecter !";
      }

   }

   return 0;
}

/*commentaire:

   - l'utilisation de fonction aurait été utile pour éviter la répetition dans le code ! mais comme la matiere n'est pas encore apprise, je l'ai fait comme demander


   PLAN TEST:
   Veuilez entrez le nombre de jour pour votre location : 1                   tarif pour le nombre de jour de location : 45
   Veuillez entrez le nombre de kilometre parcouru : 210                      Le prix de l'essence est de : 19.95
                                                                              kilometrage gratuit respecter

   Veuilez entrez le nombre de jour pour votre location : 5                   tarif pour le nombre de jour de location : 225
   Veuillez entrez le nombre de kilometre parcouru : 1556                     Le prix de l'essence est de : 147.82
                                                                              Frais pour le nombre de kilometrage depasse : 65.3

   Veuilez entrez le nombre de jour pour votre location : 1                   tarif pour le nombre de jour de location : 45
   Veuillez entrez le nombre de kilometre parcouru : 250                      Le prix de l'essence est de : 23.75
                                                                              kilometrage gratuit respecter

   Veuilez entrez le nombre de jour pour votre location : 1                   tarif pour le nombre de jour de location : 45
   Veuillez entrez le nombre de kilometre parcouru : 258                      Le prix de l'essence est de : 24.51
                                                                              Frais pour le nombre de kilometrage depasse : 0.4
                                                                              
   Veuilez entrez le nombre de jour pour votre location : 7                   tarif pour le nombre de jour de location : 315
   Veuillez entrez le nombre de kilometre parcouru : 250                      Le prix de l'essence est de : 23.75
                                                                              kilometrage gratuit respecter

*/