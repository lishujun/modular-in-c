#ifndef RANDOM_H
#define RANDOM_H

    typedef struct random {
        void (*set_seed) ();
        int (*next)();
        int (*next_less_max)(int max);
        int (*next_range)(int a , int b);
    } Random;

#endif