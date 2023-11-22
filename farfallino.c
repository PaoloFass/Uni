#include <stdio.h>
#include <string.h>
#define DIM 5

main(){
    char array[DIM]={'c', 'i', 'a', 'o'};
    char array2[DIM];
    printf("Inserire una frase: ");
    //scanf("%s", &array);
    /*
    for(int j=0; j<DIM && array2[j]!='\n'; j++){
        printf("%s", array[j]);
    }
    */

    int i=0;
    while(i<strlen(array) && array[i]!='\0'){
        printf("  i: %d  ", i);
        switch(array[i]){
            case 'a': 
                array2[i]='a';
                array2[i+1]='f';
                array2[i+2]='a';
                //printf("(a)");
                i+=3;
                break;
            case 'e': 
                array2[i]='e';
                array2[i+1]='f';
                array2[i+2]='e';
                //printf("(e)");
                i+=3;
                break;
            case 'i': 
                array2[i]='i';
                array2[i+1]='f';
                array2[i+2]='i';
                //printf("(i)");
                i+=3;
                break;
            case 'o': 
                array2[i]='o';
                array2[i+1]='f';
                array2[i+2]='o';
                //printf("(o)");
                i+=3;
                break;
            case 'u': 
                array2[i]='u';
                array2[i+1]='f';
                array2[i+2]='u';
                //printf("(u)");
                i+=3;
                break;
            default: 
                //printf("(||)");
                array2[i]=array[i];
                //printf("Array2: %s", array2[i]);
                //printf("array: %s", array[i]);
                i++;
                break;
        }
    }

    for(int j=0; j<DIM && array2[j]!='\n'; j++){
        printf("%s", array2[j]);
    }
    
}