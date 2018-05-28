#include <stdio.h>
#include <stdlib.h>

#include "SET_GETS.h"
int main()
{
        eDato* d;
        eDato dato={1,"Juan"};
        miStruct* text;
        miStruct texto={15,"Martino"};

        printf("%d---",d);
        d=(eDato*)malloc(sizeof(eDato));
        printf("%d---",d);

        d=&dato;

        if(d!=NULL){
            eDato_set_a(d,5);
            eDato_set_b(d,"hola");
            printf("%d---%s",eDato_get_a(d),eDato_get_b(d));
        }




        //eDato_Set_a(d,1800);
        //eDato_Set_b(d,"HOLA");
        //printf("%d---%s",eDato_get_a(d),eDato_get_b(d));
    return 0;
}
