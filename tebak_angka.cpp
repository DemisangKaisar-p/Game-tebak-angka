#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {

    int nomor;
    int jawaban;
    int percobaan = 0;

    srand(time(NULL));
    nomor = (rand() % 100) + 1;

    std::cout << "********** Tebak Nomor **********\n";

    do {
        std::cout << "Tebak angka dari 1-100! ";
        std::cin >> jawaban;

        percobaan++;

        if (jawaban > nomor) {
            std::cout << "Terlalu tinggi nomornya bro!\n";
        }
        else if (jawaban < nomor) {
            std::cout << "Terlalu kecil nomornya bro!\n";
        }
        else {
            if (percobaan == 1) {
                std::cout << "Wedeh jago bet bro, percobaan pertama!\n";
            } else {
                std::cout << "BENAR, HORE!!\n";
            }
            std::cout << "Jumlah percobaan: " << percobaan << "\n";
        }

    } while (jawaban != nomor);

    std::cout << "*******************************\n";

    return 0;
}
