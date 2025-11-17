#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cout << "请输入一行字符: ";
    std::getline(std::cin, input); 

    int englishCount = 0;   
    int spaceCount = 0;    
    int digitCount = 0;     
    int otherCount = 0;    

    for (char c : input) 
    { 
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) 
        {
            englishCount++; 
        }
        else if (c == ' ')
        {
            spaceCount++;   
        }
        else if (c >= '0' && c <= '9') {
            digitCount++;   
        }
        else {
            otherCount++;   
        }
    }

    std::cout << "英文字符个数: " << englishCount << std::endl;
    std::cout << "空格个数: " << spaceCount << std::endl;
    std::cout << "数字字符个数: " << digitCount << std::endl;
    std::cout << "其他字符个数: " << otherCount << std::endl;

    return 0;
}