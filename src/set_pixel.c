/*
 * E89 Pedagogical & Technical Lab
 * project:     put pixel
 * created on:  2022-11-16 - 09:27 +0100
 * 1st author:  nolan.vollet - nolan.vollet
 * description: putting a pixel
 */

#include <lapin.h>
#include <unistd.h>
#include <stdlib.h>


void stu_set_pixel(t_bunny_pixelarray *pxa,
               t_bunny_position *pos,
               unsigned int color){

    int width;
    int height;
    int i;
    unsigned int *tmp;

    width = pxa->clipable.clip_width;
    height = pxa->clipable.clip_height;
    tmp = (unsigned int*)pxa ->pixels;
    i = (width * pos->y)+ pos->x;
    if (i >= 0 && i <= height * width) {
        tmp[i] = color;
    }
}
