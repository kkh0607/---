#include <stdio.h>
#define M_PI 3.14159265358979323846

int main(){
    
    int r;
    scanf("%d", &r);
    
    double u,t;
    
    u = r * r * M_PI;
    t = 2 * r * r;
    
    printf("%.6lf\n%.6lf\n", u, t);
    
    return 0;
}
