#include <iostream>
#include <cmath>
#include <time.h>
#include <cstdlib>
struct punkt {
    double x, y;
};
int main()
{
    srand(time(NULL));
    double size = 0;
    std::cout << "Enter square size: ";
    std::cin >> size;
    int kount = 0;
    int ile_razy = 0;
    std::cout << "How many times?: ";
    std::cin >> ile_razy;
    for (int x = 0;x < ile_razy;x++)
    {
        double iks = (((rand() % 10000) / 10000.0f) * size);
        double igrek = (((rand() % 10000) / 10000.0f)*size);

        if ((size / 2.0f)* (size / 2.0f) > abs((iks - (size / 2.0f)) * (iks - (size / 2.0f))) + abs((igrek - (size / 2.0f)) * (igrek - (size / 2.0f))))
            kount++;

    }
    std::cout << "!!! Hits: " << kount;
}
