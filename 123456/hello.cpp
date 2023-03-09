#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int bingo[5][5];
    int number[25] = {0};
    srand(time(0));
    for (int i = 0; i < 25; i++) {
        int pick;
        do {
            pick = rand() % 25 + 1;
        } while (number[pick-1] > 0);

        number[pick-1]++;

        cout << pick << "\n";
    }

    // -----------

    int number[25] = {0};
    srand(time(0));
    for (int i = 0; i < 25; i++) {
        int pick = rand() % 25 + 1;
        number[i] = pick;

        for (int j = 0; j < i; j++) {
            if (number[j] == pick) {
                i--;
                break;
            }
        }
    }

    for (int i = 0; i < 25; i++) {
        cout << number[i];
    }
}
