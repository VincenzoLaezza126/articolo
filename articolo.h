#ifndef ARTICOLO_H
#define ARTICOLO_H

#define SET_MAX_TITLE 90
#define SET_MAX_TEXT 1024

struct articolo{
    char title[SET_MAX_TITLE];
    char text[SET_MAX_TEXT];
};
typedef struct articolo Articolo;

void articolo_init(Articolo *a);
void articolo_setTitle(Articolo *a, char dst[]);
void articolo_setText(Articolo*a, char dst[]);
void articolo_print(Articolo *a);

#endif