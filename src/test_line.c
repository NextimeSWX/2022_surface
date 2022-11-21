/*
 * E89 Pedagogical & Technical Lab
 * project:     test of draw line
 * created on:  2022-11-03 - 09:30 +0100
 * 1st author:  nolan.vollet - nolan.vollet
 * description: execute draw line
 */
#include <lapin.h>
#include "nolan.h"

int main(void) {

    t_bunny_window *win;
    t_bunny_pixelarray *px;
    t_bunny_position origin;
    t_bunny_position pos_a;
    t_bunny_position pos_b;
    t_bunny_position pos_c;
    t_bunny_position pos_d;
    int h;
    int l;
    int i;
    int j;

    h = 600;
    l= 800;
    i = 0;
    j = 0;
    win = bunny_start(l, h, false,"fl: test");
    px = bunny_new_pixelarray(l, h);
    origin.x = 0;
    origin.y = 0;
    pos_c.x = 0;
    pos_c.y = 0;
    pos_d.x = l;
    pos_d.y = h;
    while(i < 799){
        pos_a.x = pos_c.x;
        pos_a.y = pos_c.y;
        pos_b.x = pos_d.x;
        pos_b.y = pos_d.y;
        stu_set_line(px,&pos_a, &pos_b, BLACK);
        bunny_blit( &win->buffer, &px->clipable, &origin);
        bunny_display(win);
        pos_c.x += 1;
        pos_d.x -= 1;
        i += 1;
    }while(j < h) {
        pos_a.x = pos_c.x;
        pos_a.y = pos_c.y;
        pos_b.x = pos_d.x;
        pos_b.y = pos_d.y;
        stu_set_line(px,&pos_a, &pos_b, RED);
        bunny_blit(&win->buffer, &px->clipable, &origin);
        bunny_display(win);
        pos_c.y +=1;
        pos_d.y -=1;
        j += 1;
    }
    usleep (3e6);
    bunny_stop(win);
    return (EXIT_SUCCESS);
}
