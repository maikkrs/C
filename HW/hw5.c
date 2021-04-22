
#include <assert.h>  
#include <ctype.h>
#include <unistd.h>  
#include <stdio.h>   
#include <stdlib.h>



#define COLUMNAS 10
#define FILAS 10
#define cerrado '#'
#define abierto ' '
#define nummin 20 
#define encontrada 1
#define alrdopen 2
#define noerror 3


int minascerc(int fila, int columna, char tablero[FILAS][COLUMNAS]) {
  int conteo = 0, prinfila, finfila, princol, fincol, MINA = -1;
  if (fila <= 0) {
    prinfila = 0;
  } else {
    prinfila = fila - 1;
  }

  if (fila + 1 >= FILAS) {
    finfila = FILAS - 1;
  } else {
    finfila = fila + 1;
  }

  if (columna <= 0) {
    princol = 0;
  } else {
    princol = columna - 1;
  }
  if (columna + 1 >= COLUMNAS) {
    fincol = COLUMNAS - 1;
  } else {
    fincol = columna + 1;
  }
  int m;
  for (m = prinfila; m <= finfila; m++) {
    int l;
    for (l = princol; l <= fincol; l++) {
      if (tablero[m][l] == MINA) {
        conteo++;
      }
    }
  }
  return conteo;
}


int rang(int minimo, int maximo) {
  return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}
void creartab(char tablero[FILAS][COLUMNAS]) {
  int l;
  for (l = 0; l < FILAS; l++) {
    int m;
    for (m = 0; m < COLUMNAS; m++) {
      tablero[l][m] = cerrado;
    }
  }
}

void insertar(int fila, int columna, char tablero[FILAS][COLUMNAS]) {
    int MINA = -1;
  tablero[fila][columna] = MINA;
}

void randmin(char tablero[FILAS][COLUMNAS]) {
  int l;
  for (l = 0; l < nummin; l++) {
    int fila = rang(0, FILAS - 1);
    int columna = rang(0, COLUMNAS - 1);
    insertar(fila, columna, tablero);
  }
}

void top() {
  printf("   ");
  int l;
  for (l = 0; l < COLUMNAS; l++) {
    printf(" %d ", l + 1);
    if (l + 1 == COLUMNAS) {
    }
  }
  printf("\n");
}
char tochar(int numero) {
  return numero + '0';
}

void printtab(char tablero[FILAS][COLUMNAS], int abrir) {
  top();
  char letra = 'A';
  int l;
  int MINA = -1;
  for (l = 0; l < FILAS; l++) {
    int m;
    // Imprimir la letra de la fila
    printf(" %c ", letra);
    letra++;
    for (m = 0; m < COLUMNAS; m++) {
      char letra = cerrado;
      char pos = tablero[l][m];
      if (pos == MINA) {
        letra = cerrado;
      } else if (pos == abierto) {
        int minasCercanas = minascerc(l, m, tablero);
        letra = tochar(minasCercanas);
      }
      if (pos == MINA && (abrir)) {
        letra = MINA;
      }
      printf(" %c ", letra);
      if (m + 1 == COLUMNAS) {
      }
    }
    printf("\n");
  }
}

int mostrar(char filaLetra, int columna, char tablero[FILAS][COLUMNAS]) {
    int MINA = -1;
  filaLetra = toupper(filaLetra);
  columna--;
  int fila = filaLetra - 'A';
  assert(columna < COLUMNAS && columna >= 0);
  assert(fila < FILAS && fila >= 0);
  if (tablero[fila][columna] == MINA) {
    return encontrada;
  }
  if (tablero[fila][columna] == abierto) {
    return alrdopen;
  }
  tablero[fila][columna] = abierto;
  return noerror;
}

int noabiertas(char tablero[FILAS][COLUMNAS]) {
  int l;
  for (l = 0; l < FILAS; l++) {
    int m;
    for (m = 0; m < COLUMNAS; m++) {
      char actual = tablero[l][m];
      if (actual == cerrado) {
        return 0;
      }
    }
  }
  return 1;
}

int main() {
  char tablero[FILAS][COLUMNAS];
  int abrir = 0;
  srand(getpid());
  creartab(tablero);
  randmin(tablero);

  while (1) {
    printtab(tablero, abrir);
    if (abrir) {
      break;
    }
    int columna;
    char fila;
    printf("fila: ");
    scanf(" %c", &fila);
    printf("columna: ");
    scanf("%d", &columna);
    int status = mostrar(fila, columna, tablero);
    if (noabiertas(tablero) || status == encontrada) {
      printf("\n");
      abrir = 1;
    }
  }
  return 0;
}