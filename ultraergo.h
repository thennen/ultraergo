#pragma once

#include "quantum.h"

#define LAYOUT_LEFT( \
    K00,   K01,   K02,   K03,   K04,   K05,   K06,   K07,  \
    K10,   K11,   K12,   K13,   K14,   K15,   K16,         \
    K20,   K21,   K22,   K23,   K24,   K25,                \
    K30,   K31,   K32,   K33,   K34,   K35,                \
    K40,   K41,   K42,   K43,   K44,   K45,                \
    K50,   K51,   K52,   K53,   K54                        \
    )\
{ \
    { KC_NO,  K05,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  K14,    K13,    K12,    K11  }, \
    { KC_NO,  K50,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  K16,    K15,    K02,    K01,    K10  }, \
    { KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  K45,    KC_NO,  KC_NO,  KC_NO}, \
    { KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  K44,    K43,    K42,    K41  }, \
    { KC_NO,  KC_NO,  K52,    KC_NO,  K54,    KC_NO,    K06,  KC_NO,  K35,    K04,    K53,    K00  }, \
    { KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  K34,    K33,    K32,    K31  }, \
    { K51,    KC_NO,  KC_NO,  K40,    KC_NO,  K07,    KC_NO,  KC_NO,  K25,    K03,    K30,    K20  }, \
    { KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  K24,    K23,    K22,    K21  }, \
}



#define LAYOUT_RIGHT( \
                     K00,   K01,   K02,   K03,   K04,   K05,   K06,   K07,   K08, \
                            K10,   K11,   K12,   K13,   K14,   K15,   K16,   K17, \
                     K20,   K21,   K22,   K23,   K24,   K25,   K26,   K27,   K28, \
                            K30,   K31,   K32,   K33,   K34,   K35,   K36,   K37, \
                                   K40,   K41,   K42,   K43,   K44,   K45,   K46, \
                                   K50,   K51,          K52,          K53,        \
                                                               K60,   K61,   K62  \
                    )\
{ \
    { KC_NO,  K05,    K13,    K02,    KC_NO,  KC_NO,  KC_NO,  K37,    K17,    K12,    K11,    K10    }, \
    { KC_NO,  KC_NO,  K14,    K01,    KC_NO,  K08,    K52,    K28,    K46,    K00,    K15,    KC_NO  }, \
    { KC_NO,  K51,    K44,    K04,    KC_NO,  K61,    K62,    KC_NO,  K60,    KC_NO,  KC_NO,  K40    }, \
    { KC_NO,  KC_NO,  KC_NO,  K36,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  K43,    K42,    K41    }, \
    { KC_NO,  KC_NO,  K35,    K03,    KC_NO,  K50,    KC_NO,  KC_NO,  K53,    KC_NO,  KC_NO,  K30    }, \
    { KC_NO,  KC_NO,  K34,    K27,    K45,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  K33,   K32,    K31    }, \
    { KC_NO,  KC_NO,  K25,    K16,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  K26,    K20    }, \
    { K07,    K06,    K24,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  K23,    K22,    K21    }, \
}
