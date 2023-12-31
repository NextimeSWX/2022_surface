/*
 * E89 Pedagogical & Technical Lab
 * project:     nolan.h
 * created on:  2022-11-14 - 10:02 +0100
 * 1st author:  nolan.vollet - nolan.vollet
 * description: my library
 */

#ifndef NOLAN_H_
#define NOLAN_H_

int get_value(int a, int b, float ratio);
float get_ratio(int a, int b,int x);
void stu_set_pixel(t_bunny_pixelarray *pxa,
               t_bunny_position *pos,
               unsigned int color);
void stu_set_line(t_bunny_pixelarray *px,
                   t_bunny_position *pos_a,
                   t_bunny_position *pos_b,
                   unsigned int color);

#endif
