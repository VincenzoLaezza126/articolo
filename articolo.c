#include"articolo.h"
#include<string.h>
#include<stdio.h>

void articolo_init(Articolo *a){
    a->title[0]='\0';
    a->text[0]='\0';
}

void articolo_setTitle(Articolo *a, char dst[]){
    strncpy(a->title,dst,SET_MAX_TITLE);
    a->title[SET_MAX_TITLE-1]='\0';
}

void articolo_setText(Articolo*a, char dst[]){
    strncpy(a->text,dst,SET_MAX_TEXT);
    a->text[SET_MAX_TEXT-1]='\0';
}

void articolo_print(Articolo *a){
    printf("%s\n",a->title);
    printf("-------\n");
    printf("%s\n\n",a->text);
}