#include <iostream>
#include <iomanip> 

int main() {
    double f, c;

    std::cout << "ÇëÊäÈë»ªÊÏÎÂ¶È: ";
    std::cin >> f;

    c = (f - 32) * 5.0 / 9.0;

 
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "ÉãÊÏÎÂ¶È: " << c<< std::endl;

    return 0;
}