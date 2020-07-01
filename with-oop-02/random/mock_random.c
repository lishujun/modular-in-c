#include "random.h"

static void mock_set_seed(Random *p){
}

static int mock_next(Random *p){
    return 1;
}

static int mock_next_less_max(Random *p, int max){
    return max - 1;
}

static int mock_next_range(Random *p){
    return p->a;
}

static void mock_set_range(Random *p, int a, int b){
    p->a = a;
    p->b = b;
}

void set_random_mock(Random *p){
    p->set_seed = &mock_set_seed;
    p->next = &mock_next;
    p->next_less_max = &mock_next_less_max;
    p->next_range = &mock_next_range;
    p->set_range = &mock_set_range;
}