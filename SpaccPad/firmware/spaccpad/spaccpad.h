#pragma once

#include "quantum.h"

#define ___ KC_NO

#define LAYOUT( \
         k01, k02, k03, k04,  \
         k11, k12, k13, k14,  \
    k20, k21, k22, k23, k34,  \
    k30, k31, k32, k33,       \
    k40, k41, k42, k43, k54,  \
    k50, k52,      k53        \
) \
{ \
    { ___, k01, k02, k03, k04 },  \
    { ___, k11, k12, k13, k14 },  \
    { k20, k21, k22, k23, ___ },  \
    { k30, k31, k32, k33, k34 },  \
    { k40, k41, k42, k43, ___ },  \
    { k50, ___, k52, k53, k54 }   \
}

#define LAYOUT_numpad( \
         k01, k02, k03, k04,  \
         k11, k12, k13, k14,  \
    k20, k21, k22, k23, k34,  \
    k30, k31, k32, k33,       \
    k40, k41, k42, k43, k54,  \
    k50, k52,      k53        \
) \
{ \
    { ___, k01, k02, k03, k04 },  \
    { ___, k11, k12, k13, k14 },  \
    { k20, k21, k22, k23, ___ },  \
    { k30, k31, k32, k33, k34 },  \
    { k40, k41, k42, k43, ___ },  \
    { k50, ___, k52, k53, k54 }   \
}

void matrix_init_user(void);
void matrix_scan_user(void);