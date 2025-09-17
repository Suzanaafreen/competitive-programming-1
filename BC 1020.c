#include <stdio.h>
 
int main() {
    int m;
    scanf("%d",&m);
    int a = m/365;
    int b = (m%365)/30;
    int c = (m%365)%30;
    printf("%d ano(s)\n",a);
    printf("%d mes(es)\n",b);
    printf("%d dia(s)\n",c);
    return 0;
}
