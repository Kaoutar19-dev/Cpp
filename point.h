#ifndef POINT_H
#define POINT_H
class point {
    float x;
    float y;
    public : 
    point(float a, float b);
    void deplace(float dx, float dy);
    void affiche();
};
#endif 