#include <iostream>
int main()
{
    float x, n1, n2, media;

    x = 0;
    media = 0;

    while (x != 2)
    {
        std::cin >> n1;
        while (n1 < 0 || n1 > 10)
        {
            std::cout << ("nota invalida\n");
            std::cin >> n1;
        }
        std::cin >> n2;
        while (n2 < 0 || n2 > 10)
        {
            std::cout << ("nota invalida\n");
            std::cin >> n2;
        }
        media = (n1 + n2) / 2;
        printf("media = %.2f\n", media);
        std::cout << ("novo calculo (1-sim 2-nao)\n");
        std::cin >> x;
        while (x != 1 && x != 2)
        {
            std::cout << ("novo calculo (1-sim 2-nao)\n");
            std::cin >> x;
        }
        if (x == 2)
        {
            break;
        }
    }
}