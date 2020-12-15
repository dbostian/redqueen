#pragma once

#include "../redqueen.h"

#include "quantum.h"


#ifdef USE_I2C
#include <stddef.h>
#ifdef __AVR__
  #include <avr/io.h>
  #include <avr/interrupt.h>
#endif
#endif

#define LAYOUT( \
	K000, K001, K002, K003, K004, K005, K006,       K008, K009, K010, K011, K012, K013, K014,       \
	K100,       K102, K103, K104, K105, K106,       K108, K109, K110, K111, K112, K113, K114, K115, \
	K200,       K202, K203, K204, K205, K206,       K208, K209, K210, K211, K212, K213,       K215, \
	K300,       K302, K303, K304, K305, K306,       K308, K309, K310, K311, K312, K313, K314, K315, \
	K400, K401,       K403,       K405, K406,             K409,       K411,             K414, K415  \
) { \
	{ KC_NO, K000,  K001,  K002,  K003,  K004,  K005,  K006 }, \
	{ KC_NO, K100,  KC_NO, K102,  K103,  K104,  K105,  K106 }, \
	{ KC_NO, K200,  KC_NO, K202,  K203,  K204,  K205,  K206 }, \
	{ KC_NO, K300,  KC_NO, K302,  K303,  K304,  K305,  K306 }, \
	{ KC_NO, K400,  K401,  KC_NO, K403,  KC_NO, K405,  K406 }, \
    { K008,  K009,  K010,  K011,  K012,  K013,  K014,  KC_NO}, \
    { K108,  K109,  K110,  K111,  K112,  K113,  K114,  K115 }, \
    { K208,  K209,  K210,  K211,  K212,  K213,  KC_NO, K215 }, \
    { K308,  K309,  K310,  K311,  K312,  K313,  K314,  K315 }, \
    { KC_NO, K409,  KC_NO, K411,  KC_NO, KC_NO, K414,  K415 }  \
}

