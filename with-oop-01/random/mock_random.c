#include "random.h"

static void mock_set_seed(){
}

static int mock_next(){
    return 1;
}

static int mock_next_less_max(int max){
    return max - 1;
}

static int mock_next_range(int a , int b){
    return a;
}

void set_random_mock(Random *p){
    p->set_seed = &mock_set_seed;
    p->next = &mock_next;
    p->next_less_max = &mock_next_less_max;
    p->next_range = mock_next_range;
}