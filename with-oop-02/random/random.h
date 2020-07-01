#ifndef RANDOM_H
#define RANDOM_H



    typedef struct random {
        int a, b;
        void (*set_seed) (struct random *p);
        int (*next)(struct random *p);
        int (*next_less_max)(struct random *p, int max);
        int (*next_range)(struct random *p);
        void (*set_range)(struct random *p, int a, int b);
    } Random;

#endif