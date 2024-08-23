#include <stdio.h>

typedef struct {
    float x;
    float y;
} Point;

typedef struct {
    Point start;
    Point end;
} Line;

int main() {
    Line line = {{0.0, 0.0}, {1.0, 1.0}};
    printf("Start point: (%f, %f)\n", line.start.x, line.start.y);
    printf("End point: (%f, %f)\n", line.end.x, line.end.y);
    return 0;
}
