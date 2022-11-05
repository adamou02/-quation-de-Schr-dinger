/** Constantes
  * @author Romain DUJOL
  */

#ifndef _CONSTS_H
#define _CONSTS_H

/************************************************/
/* Constantes physiques                         */
/*----------------------------------------------*/
/* Le systeme d'unites utilise est le suivant : */
/*  - longueur : nm                             */
/*  - energie  : eV                             */
/*  - temps    : fs [femtoseconde, 10^(-15) s]  */
/************************************************/

/** Constante de PLANCK reduite */
#define HBARRE  6.582119570e-1 // eV.fs
/** Carré de la constante de PLANCK reduite */
#define HBARRE2 4.332429803e-1 // eV^2.fs^2
/** Masse d'un electron */
#define M_ELEC  5.685390616e+0 // ev.fs/nm^2

/*******************************************/
/* Parametres pour les methodes numeriques */
/*******************************************/

/* Tolerance absolue  pour la resolution de l'equation differentielle */
#define RKF45_ABSTOL 1.0e-12
/* Tolerance relative pour la resolution de l'equation differentielle */
#define RKF45_RELTOL 1.0e-10

/* Tolerance absolue  pour la recherche de racine */
#define HYBRD_TOL    100.0 * RKF45_ABSTOL

#endif // _CONSTS_H
