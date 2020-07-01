#include "random.h"
#include<stdlib.h>
#include<stdio.h>
#include <time.h>

static void begin(){

    printf("begin\n");
}

static void random_set_seed(){
    srand((int)time(NULL)); 
}

static int random_next(){
    return rand();
}

static int random_next_less_max(int max){
    return rand() % max;
}

static int random_next_range(int a , int b){
    int r = rand() % b;
    return r < a ? a : r;
}

void set_random_object(Random *p){
    p->set_seed = &random_set_seed;
    p->next = &random_next;
    p->next_less_max = &random_next_less_max;
    p->next_range = random_next_range;
}