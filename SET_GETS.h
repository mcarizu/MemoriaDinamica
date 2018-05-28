#ifndef SET_GETS_H_INCLUDED
#define SET_GETS_H_INCLUDED
typedef struct{
    int a;
    char b[50];
}eDato;
typedef struct{int numero; char nombre[30]}miStruct;

int eDato_set_a(eDato*, int);
int eDato_set_b(eDato*, char*);

int eDato_get_a(eDato*);
char* eDato_get_b(eDato*);

#endif // SET_GETS_H_INCLUDED
