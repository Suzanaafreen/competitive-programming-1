#include <stdio.h>
 
int main() {
    double x1,y2,x2,y1;
    scanf("%lf %lf %lf %lf",&x1,&y2,&x2,&y1);
    double a = (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
    printf("%0.4lf\n",sqrt(a));

 
    return 0;
}
