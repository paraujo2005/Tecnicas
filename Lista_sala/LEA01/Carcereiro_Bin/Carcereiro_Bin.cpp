#include <iostream>

int main() {
    unsigned long long N;
    int Q; 

    std::cin >> N >> Q;

    for (int i = 0; i < Q; ++i) {
        int C; 
        std::cin >> C;

        if (N & (1ULL << C)) {
            std::cout << "acesa\n";
        } else {
            std::cout << "apagada\n";
        }
    }

    return 0;
}