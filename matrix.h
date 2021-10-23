/*
 * matrix.h
 *
 * Copyright 2016 Le KiWi <jean@antix1>
 *
 */

#ifndef _MATRIX_H_
#define _MATRIX_H_

#include "peg.h"
#include "memento.h"


/*
 * Constants
 */
#define HOR_MAX 11 /* nb rows    */
#define VER_MAX 11 /* nb columns */

/*
 *	Types & Vars
 */
typedef char Matrix[HOR_MAX][VER_MAX];
char ( * pMatrixLoad)[VER_MAX]; //pointeur sur le tableau Matrix multidimensionnel
Matrix matrixCopy;

/**
 * @name typedef struct s_matrixOfBoard
 * @brief structure de la matrice du jeu (shape)
 * @id identifiant unique
 * @char nom humain(!)
 * @pShape pointeur sur un tableau de type Matrix (schema du shape)
 */
typedef struct s_matrixOfBoard {
    int id;
    char *name;
    Matrix *pShape;
} matrixOfBoard;
/**
 * @brief structure qui contient la matrice (shape) en cours du jeu
 *        de type matrixOfBoard
 */
matrixOfBoard currentMatrixOfBoard;

/*
 *	Functions
 */
int matrixLoad(int);
int matrixSelectPeg(int, int);
int matrixUpdate();
int matrixCanMovePeg();
int matrixCountRemainPeg();

#endif
