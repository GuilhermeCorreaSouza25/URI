#include <iostream>

int main()
{
    long long n, PA, PB;
    double G1, G2;
    int anos, sec;

    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> PA;
        std::cin >> PB;
        std::cin >> G1;
        std::cin >> G2;

        anos = 0;
        sec = 0;

        while (PA <= PB)
        {
            PA += PA * G1 / 100;
            PB += PB * G2 / 100;

            anos++;
            if (anos > 100)
            {
                sec = 1;
                break;
            }
        }
        if (sec == 0)
            std::cout << anos << " anos.\n";
        else
            std::cout << "Mais de 1 seculo.\n";
    }
    return 0;
}