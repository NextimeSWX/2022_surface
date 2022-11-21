/*
 * E89 Pedagogical & Technical Lab
 * project:     draw line
 * created on:  2022-11-03 - 09:31 +0100
 * 1st author:  nolan.vollet - nolan.vollet
 * description: draw a line
 */
#include <lapin.h>
#include "nolan.h"

static void swap_int(int *nb1,int *nb2) {
    int temp;
    temp = *nb1;
    *nb1 = *nb2;
    *nb2 = temp;
}

static int norme(int a, int b) {
    int result;

    if (a >= b) {
        result = a - b;
    } else {
        result = b - a;
    }
    return result;
}



void stu_set_line(t_bunny_pixelarray  *px,
                    t_bunny_position   *pos_a,
                    t_bunny_position   *pos_b,
                    unsigned int        color) {
    int normex;
    int normey;
    t_bunny_position pos;
    float ratio;
    
    pos_b->y -= 1;
    normex = norme(pos_b->x, pos_a->x);
    normey = norme(pos_b->y, pos_a->y);
    if (pos_a->x > pos_b->x) {
        swap_int(&pos_a->y, &pos_b->y);
        swap_int(&pos_a->x, &pos_b->x);
    }
    pos.x = pos_a->x;
    pos.y = pos_a->y;
    if (normex >= normey) {
        while (pos.x <= pos_b->x) {
            ratio = get_ratio(pos_a->x, pos_b->x, pos.x);
            pos.y = get_value(pos_a->y, pos_b->y, ratio);
            stu_set_pixel(px, &pos, color);
            pos.x += 1;
        }
    } else if (normey >= normex){
        if (pos.y <= pos_b->y) {
            while (pos.y <= pos_b->y) {
                ratio = get_ratio(pos_a->y, pos_b->y, pos.y);
                pos.x = get_value(pos_a->x, pos_b->x, ratio);
                stu_set_pixel(px, &pos, color);
                pos.y += 1;
            }
        } else {
            while (pos.y >= pos_b->y) {
                ratio = get_ratio(pos_a->y, pos_b->y, pos.y);
                pos.x = get_value(pos_a->x, pos_b->x, ratio);
                stu_set_pixel(px, &pos, color);
                pos.y -= 1;
            }
        }
    }
}
