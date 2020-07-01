#include "random.h"
#include<stdlib.h>
#include<stdio.h>
#include <time.h>

static void random_set_seed(Random *p){
    srand((int)time(NULL)); 
}

static int random_next(Random *p){
    return rand();
}

static int random_next_less_max(Random *p, int max){
    return rand() % max;
}

static int random_next_range(Random *p){

    int a = p->a;
    int b = p->b;

    int r = rand() % b;
    return r < a ? a : r;
}


static void random_set_range(Random *p, int a, int b){
    p->a = a;
    p->b = b;
}


void set_random_object(Random *p){
    p->set_seed = &random_set_seed;
    p->next = &random_next;
    p->next_less_max = &random_next_less_max;
    p->next_range = &random_next_range;
    p->set_range = &random_set_range;
}