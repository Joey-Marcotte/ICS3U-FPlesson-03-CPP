// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Joey Marcotte
// Created on: Sept 2019
// This program is the movie sprite on gameboy

#include <stdio.h>
#include <gb/gb.h>
#include "smiler.c"

void main() {
    // this function displays a happy face

    set_sprite_data(0, 2, smiler);
    set_sprite_tile(0, 0);
    move_sprite(0, 88, 78);
    SHOW_SPRITES;

    while (1) {
        switch (joypad()) {
            case J_LEFT:
                scroll_sprite(0, -1, 0);
                break;
            case J_RIGHT:
                scroll_sprite(0, 1, 0);
                break;
            case J_UP:
                scroll_sprite(0, 0, -1);
                break;
            case J_DOWN:
                scroll_sprite(0, 0, 1);
                break;
        }
        delay(100);
    }
}
