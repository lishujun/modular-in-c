#ifndef RANDOM_H
#define RANDOM_H

void random_set_seed();

int random_next();

int random_next_less_max(int max);

int random_next_range(int a , int b);

#endif