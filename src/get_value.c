/*
 * E89 Pedagogical & Technical Lab
 * project:     get value
 * created on:  2022-11-03 - 09:03 +0100
 * 1st author:  nolan.vollet - nolan.vollet
 * description: inverse de get ratio
 */

int get_value(int a, int b, float ratio)
{
    float tmp;

    tmp = (float) ratio * (b - a) + a;
    return (tmp);

}
