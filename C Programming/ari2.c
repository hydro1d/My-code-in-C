#include <stdio.h>
#include <math.h>

struct point {
    double x;
    double y;
};

struct pg {
    struct point A;
    struct point B;
    struct point D;
};

struct point aP(struct point *a, struct point *b) {
    struct point result;
    result.x = a->x + b->x;
    result.y = a->y + b->y;
    return result;
}

struct point subPoint(struct point *a, struct point *b) {
    struct point result;
    result.x = a->x - b->x;
    result.y = a->y - b->y;
    return result;
}

struct point scalePoint(struct point *a, double n) {
    struct point result;
    result.x = a->x * n;
    result.y = a->y * n;
    return result;
}

struct point findFourthPoint(struct pg *p) {
    struct point result;
    result = aP(&p->A, &p->B);
    result = aP(&result, &p->D);
    result = subPoint(&result, &p->A);
    return result;
}

double crossProduct(struct point *a, struct point *b) {
    return a->x * b->y - a->y * b->x;
}

double area(struct pg *p) {
    struct point AB = subPoint(&p->B, &p->A);
    struct point AD = subPoint(&p->D, &p->A);
    return fabs(crossProduct(&AB, &AD));
}

int main() {
    struct pg p;
    printf("Enter the coordinates of the first point (A): ");
    scanf("%lf %lf", &p.A.x, &p.A.y);
    printf("Enter the coordinates of the second point (B): ");
    scanf("%lf %lf", &p.B.x, &p.B.y);
    printf("Enter the coordinates of the third point (D): ");
    scanf("%lf %lf", &p.D.x, &p.D.y);
    struct point C = findFourthPoint(&p);
    printf("The coordinates of the fourth point (C) are: %.2lf %.2lf\n", C.x, C.y);
    printf("The area of the pg is: %.2lf\n", area(&p));
    return 0;
}
