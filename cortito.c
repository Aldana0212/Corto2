#include <stdio.h>
#include <stdlib.h>


int main() {

    int dimension;
    int i, *c;
    
   printf("ingrese el tamaño que desea el vector\n");
   scanf("%d",&dimension);
   
    int *v[dimension];
   
   
    c=*v;
      
     
     
     for(i=0;i<dimension;i++){
        printf("ingrese el valor \n");
          scanf("%d n/",&c[i]);
     }
    
     for(i=0;i<dimension;i++){
        printf("Valor: %i \n",*c++);

     }
     for(i=0;i<dimension;i++){
        printf("Posicion: %i \n",*c++);

     }
       
      
    return 0;
}

