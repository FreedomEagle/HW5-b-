/*
 * Test point2d and triangle data structures, distance() and area() function
 */
 
 #include <stdio.h>
 #include "geom.h"
 
 double perimeter(struct point2d u, struct point2d v, struct point2d q);
 double area(struct triangle t);
 
 int main(void)
 {
    struct point2d u = {2., 2.};
    struct point2d v = {-2.,1.};
    struct point2d q = {0.,-3.};
    struct triangle t = {u,v,q};
    double p, aa, r;
    
    printf("x = %f, y = %f\n", u.x, u.y);
    printf("a = (%f, %f) b = (%f, %f) c = (%f, %f)\n", t.a.x, t.a.y, t.b.x, t.b.y, t.c.x, t.c.y);
    
    p = perimeter(u, v, q);
    printf("perimeter = %f\n", p);
    
    aa = area(t);
    printf("area = %f\n", aa);
    
    r = 2*aa/p;
    printf("radius = %f\n",r);
    
    return 0;
    
   }
