#include <iostream>
using namespace std;

int main()
{
    double earth_weight;
    int planet;
    double weight;

    std::cout << "Enter your current weight: ";
    cin >> earth_weight;

    std::cout << "I have information for the following planets";
    std::cout << "   1. Mercury   2. Venus   3. Mars";
    std::cout << "   4. Jupiter  5.  Saturn  6. Uranus";

    std::cout << "Which planet are you visiting? ";
    cin >> planet;

    if (planet == 1)
    {
        weight = earth_weight * 0.38;
    }

    else if (planet == 2)
    {
        weight = earth_weight * 0.91;
    }
    else if (planet == 3)
    {
        weight = earth_weight * 0.38;
    }
    else if (planet == 4)
    {
        weight = earth_weight * 2.34;
    }
    else if (planet == 5)
    {
        weight = earth_weight * 1.06;
    }
    else if (planet == 6)
    {
        weight = earth_weight * 0.92;
    }

    std::cout << "Your weight:  " << weight << "kg"<< "\n";

    return 0;
}