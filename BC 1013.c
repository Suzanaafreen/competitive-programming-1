#include <stdio.h>
 
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int s = (a+b+abs(a-b))/2;
    int f = (s+c+abs(s-c))/2;
    printf("%d eh o maior\n",f);
 
    return 0;
}
