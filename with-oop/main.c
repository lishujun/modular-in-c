
#include <stdio.h>
#include <string.h>
#include "random/random.h"

extern void set_random_object(Random *);
extern void set_random_mock(Random *);

void show_random_num(Random *p){
    for(int i=0; i<10; i++){
        printf("%d ", p->next_less_max(10) );
    }
}

int main(int argc, char *argv[]){

    if(argc < 2 ){
        printf("Usage: %s random | mock", argv[0]);
        return;
    }

    Random *p = malloc(sizeof(Random));
    if(strcmp(argv[1], "random") == 0){
        set_random_object(p);
        p->set_seed();
        show_random_num(p);
    } else if (strcmp(argv[1], "mock") == 0) {
        set_random_mock(p);
        p->set_seed();
        show_random_num(p);
    }else{
        printf("param is not match");
    }

}