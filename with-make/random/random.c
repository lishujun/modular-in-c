#include "random.h"
#include<stdlib.h>
#include <time.h>

void random_set_seed(){
    srand((int)time(NULL)); 
}

int random_next(){
    return rand();
}

int random_next_less_max(int max){
    return rand() % max;
}

int random_next_range(int a , int b){
    int r = rand() % b;
    return r < a ? a : r;
}