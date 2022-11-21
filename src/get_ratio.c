/*
 * E89 Pedagogical & Technical Lab
 * project:     ratio
 * created on:  2022-11-02 - 16:31 +0100
 * 1st author:  nolan.vollet - nolan.vollet
 * description: calculate ratio
 */

float get_ratio(int a, int b,int x){

    float tmp;
    tmp = (float) b - a;
    tmp = (float) (x - a) / tmp;
    return (tmp);
}
