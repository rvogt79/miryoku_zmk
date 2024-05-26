// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku
#if !defined (MIRYOKU_LAYOUTMAPPING_LILY58)

#define XXX &none

#define MIRYOKU_LAYOUTMAPPING_LILY58( \
     K00, K01, K02, K03, K04,                K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                K35, K36, K37, N38, N39 \
) \
&kp EQUAL  &kp N1  &kp N2  &kp N3  &kp N4  &kp N5              &kp N6  &kp N7  &kp N8  &kp N9  &kp N0  &kp BSLH \
&kp RBKT   K00     K01     K02     K03     K04                 K05     K06     K07     K08     K09     &kp Z \
&kp LBKT   K10     K11     K12     K13     K14                 K15     K16     K17     K18     K19     &kp Q \
&td_shift  K20     K21     K22     K23     K24    XXX     XXX  K25     K26     K27     K28     K29     &td_shift \
                    &kp LS(LG(P))  K32     K33    K34     K35  K36    K37      &to 0


#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 52 53
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 54 55

#endif

// #define MIRYOKU_KLUDGE_MOUSEKEYSPR

#define MIRYOKU_LAYER_BASE \
&kp B,             &kp Y,             &kp O,              &kp U,             &kp APOS,          &kp SEMI,         &kp L,              &kp D,             &kp W,             &kp V,             \
U_MT(LCTRL, C),    U_MT(LALT, I),     U_MT(LSHFT, E),     U_MT(LGUI, A),     &kp COMMA,         &kp DOT,          U_MT(LGUI, H),      U_MT(LSHFT, T),    U_MT(LALT, S),     U_MT(LCTRL, N),   \
U_LT(U_BUTTON, G), U_MT(RALT, X),     &kp J,              &kp K,             &kp MINUS,         &kp FSL           &kp R,              &kp M,             U_MT(RALT, F),     U_LT(U_BUTTON, P),\
U_NP,              U_NP,              U_LT(U_MOUSE, DEL), U_LT(U_NAV, BSPC), U_MT(LSHFT, RET),  U_LT(U_SYM, TAB), U_LT(U_NUM, SPACE), U_LT(U_FUN, ESC),  U_NP,              U_NP

#define MIRYOKU_LAYER_EXTRA \
&kp Q,             &kp W,             &kp E,              &kp R,             &kp T,             &kp Y,            &kp U,              &kp I,             &kp O,             &kp P,             \
U_MT(LCTRL, A),    U_MT(LALT, S),     U_MT(LSHFT, D),     U_MT(LGUI, F),     &kp G,             &kp H,            U_MT(LGUI, J),     U_MT(LSHFT, K),     U_MT(LALT, L),     U_MT(LCTRL, SQT),   \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,              &kp V,             &kp B,             &kp N,            &kp M,              &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MOUSE, DEL), U_LT(U_NAV, BSPC), U_MT(LSHFT, RET),  U_LT(U_SYM, TAB), U_LT(U_NUM, SPACE), U_LT(U_FUN, ESC),  U_NP,              U_NP

#define MIRYOKU_LAYER_TAP \
&kp B,             &kp Y,             &kp O,             &kp U,             &kp APOS,             &kp SEMI,             &kp L,             &kp D,         &kp W,          &kp V,             \
&kp C,             &kp I,             &kp E,             &kp A,             &kp COMMA,            &kp DOT,              &kp H,             &kp T,         &kp S,          &kp N,   \
&kp G,             &kp X,             &kp J,             &kp K,             &kp MINUS,            &kp FSLH,             &kp R,             &kp M,         &kp F,          &kp P,\
U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp RET,              &kp TAB,              &kp SPACE,         &kp ESC,       U_NP,           U_NP

#define MIRYOKU_KLUDGE_LAYER_ADDITIONAL \
sensor-bindings = <&inc_dec_kp LG(LA(EQUAL)) LG(LA(MINUS)) &inc_dec_kp PG_UP PG_DN>;
