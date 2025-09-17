#include <bits/stdc++.h>
using namespace std;

int main() {
    double N;
    cin >> N;

    int value = round(N * 100);

    int notes[] = {10000, 5000, 2000, 1000, 500, 200};
    int coins[] = {100, 50, 25, 10, 5, 1};

    cout << "NOTAS:" << endl;
    for (int i = 0; i < 6; i++) {
        int qtd = value / notes[i];
        cout << qtd << " nota(s) de R$ " << notes[i] / 100 << ".00" << endl;
        value %= notes[i];
    }

    cout << "MOEDAS:" << endl;
    for (int i = 0; i < 6; i++) {
        int qtd = value / coins[i];
        printf("%d moeda(s) de R$ %.2f\n", qtd, coins[i] / 100.0);
        value %= coins[i];
    }

    return 0;
}
