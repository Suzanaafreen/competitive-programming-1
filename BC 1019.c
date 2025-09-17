#include <stdio.h>
 
int main() {
    int N;
    scanf("%d",&N);
    int a =(N-N%60)/60;
    int b =a%60;
    int c =a/60;
    int d =N%60;
    printf("%d:%d:%d\n",c,b,d);
 
    return 0;
}
