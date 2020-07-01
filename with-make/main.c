#include <stdio.h>
#include "random/random.h"

int main(){
    
    random_set_seed();

    for(int i=0; i<10; i++){
        printf("%d ", random_next_less_max(10) );
    }
}