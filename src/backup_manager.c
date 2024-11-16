#include "backup_manager.h"

void create_backup(const char *source, const char *destination) {
    /*backup commence par effectuer une copie complète de la dernière sauvegarde, par liens durs, avec la date et l'heure actuelles comme nom, sous le format "YYYY-MM-DD-hh:mm:ss.sss"*/
}

void restore_backup(const char *backup_id, const char *destination) {
    /*L'option --restore permet de restaurer une sauvegarde à partir d'un chemin spécifié, que ce soit localement ou depuis un serveur distant.
    La restauration peut être effectuée en utilisant les informations sur la sauvegarde disponible dans le répertoire de destination ou à travers une connexion réseau.*/
}

void list_backup(const char *directory) {
    /*L'option --list-backups permet d'afficher toutes les sauvegardes existantes, 
    que ce soit localement ou sur un serveur distant. Cette fonctionnalité est utile pour que l'utilisateur puisse voir toutes les sauvegardes disponibles et décider laquelle restaurer.*/
}

