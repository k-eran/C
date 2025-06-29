#include <stdio.h>

int main() {
    int x1, x2, x3, y1, y2, y3;

    printf("Enter the x and y coordinates of point A (format: x y): ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the x and y coordinates of point B (format: x y): ");
    scanf("%d %d", &x2, &y2);
    printf("Enter the x and y coordinates of point C (format: x y): ");
    scanf("%d %d", &x3, &y3);

    
    if ((x2 - x1 == 0 && x3 - x2 == 0)) {
        printf("Points A, B, and C lie on the same vertical line.\n");
    }
    else {
        double m1 = (double)(y2 - y1) / (x2 - x1);
        double m2 = (double)(y3 - y2) / (x3 - x2);
        double m3 = (double)(y3 - y1) / (x3 - x1);

        if (m1 == m2 && m2 == m3) {
            printf("Points A, B, and C lie on the same line.\n");
        }
        else if (m1 == m2) {
            printf("Only points A and B lie on the same line.\n");
        }
        else if (m2 == m3) {
            printf("Only points B and C lie on the same line.\n");
        }
        else if (m1 == m3) {
            printf("Only points A and C lie on the same line.\n");
        }
        else {
            printf("Points A, B, and C do not lie on the same line.\n");
        }
    }

    return 0;
}
