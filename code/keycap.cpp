#include QMK_KEYBOARD_H
#ifdef OLED_ENABLE 


#define MATRIX_ROW = 8
#define MATRIX_COLS = 10
const uint16_t keymap[][MATRIX_ROW][MATRIX_COLS] = {
    [0] = LAYOUT(
        KY_ESC, KY_F1, KY_F2, KY_F3, KY_F4, KY_F5, KY_F6, KY_F7, KY_F8, KY_F9, 
        KY_F10, KY_F11, KY_F12, KY_DEL, KY_BACKTICK, KY_1, KY_2, KY_3, KY_4, KY_5, 
        KY_6, KY_7, KY_8, KY_9, KY_0, KY_MINUS, KY_PLUS, KY_BACKSPACE, KY_TAB,KY_Q, 
        KY_W, KY_E, KY_R, KY_T, KY_Y, KY_U, KY_I, KY_O, KY_P, KY_BR1, 
        KY_BR2, KY_STRAIGHTLINE, KC_NO ,  KY_CAPS ,KY_A, KY_S, KY_D, KY_F, KY_G, KY_H, KY_J, 
        KY_K, KY_L, KY_SEMI, KY_QUOTE, KY_ENTER,KC_NO ,KY_LEFTSHIFT, KY_Z, KY_X, KY_C, KY_V, 
        KY_B, KY_N, KY_M, KY_COMMA, KY_DOT, KY_SLASH, KY_RIGHTSHIFT,KY_TOPARROW, KY_CTRL, KY_WIN, 
        KY_ALT, KY_SPACE, KY_FN, KY_MENU, KY_CONTROL, KY_LEFTARROW, KY_BOTTOMARROW, KY_RIGHTARROW

    )
}


static void render_logo(void){

      

}



bool encoder_update_user(uint8_t, index, bool clockwise){
    if (index == 0){
        
            tap_code(KC_KB_VOLUME_UP);
        } else {
            tap_code(KC_KB_VOLUME_DOWN);
        }

}

