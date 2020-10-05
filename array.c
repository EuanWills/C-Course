#include <stdio.h>


int add(struct point){
    point.total = point.x + point.y;
    printf("total %d\n x %d\n y %d\n", point.total, point.x point.y);
    return point;
}
int main() {
    int x[2] = {1, 2};
    printf("x[0] = %d\nx[1] = %d\n", x[0], x[1]);

    struct point{
        int x = 1;
        int y = 2;
        int total = 0;
	}

    add(point);
    printf("total %d\n x %d\n y %d\n", point.total, point.x point.y);
}
