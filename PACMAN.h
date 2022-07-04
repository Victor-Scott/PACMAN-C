#ifndef _PACMAN_H_
#define _PACMAN_H_

#define CIMA 'w'
#define ESQUERDA 'a'
#define DIREITA 'd'
#define BAIXO 's'

int praondeofantasmavai(int xatual,int yatual, int* xdestino, int* ydestino);
int direcionamento (char direcao);
int acabou(void);
void fantasmas (void);
void movimento(char direcao);
void explodepilula(void);
void explodepilula2(int x, int y, int somax, int somay, int qtd);

#endif
