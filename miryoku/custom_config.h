// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// #define MIRYOKU_KLUDGE_MOUSEKEYSPR

#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
U_MT(LCTRL, A),     U_MT(LALT, R),     U_MT(LSHFT, S),    U_MT(LGUI, T),    &kp G,             &kp M,             U_MT(LGUI, N),    U_MT(LSHFT, E),    U_MT(LALT, I),     U_MT(LCTRL, O),     \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MOUSE, DEL),U_LT(U_NAV, BSPC),U_MT(LSHFT, RET),U_LT(U_SYM, TAB),  U_LT(U_NUM, SPACE), U_LT(U_FUN, ESC),  U_NP,              U_NP

#define MIRYOKU_LAYER_EXTRA \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(LCTRL, A),     U_MT(LALT, S),     U_MT(LSHFT, D),    U_MT(LGUI, F),    &kp G,             &kp H,             U_MT(LGUI, J),    U_MT(LSHFT, K),    U_MT(LALT, L),     U_MT(LCTRL, SQT),   \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MOUSE, DEL),U_LT(U_NAV, BSPC),U_MT(LSHFT, RET),U_LT(U_SYM, TAB),  U_LT(U_NUM, SPACE), U_LT(U_FUN, ESC),  U_NP,              U_NP

#define MIRYOKU_KLUDGE_LAYER_ADDITIONAL \
sensor-bindings = <&inc_dec_kp LG(LA(EQUAL)) LG(LA(MINUS)) &inc_dec_kp PG_UP PG_DN>;
