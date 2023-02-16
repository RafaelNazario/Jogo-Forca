#include <iostream>
#include "imprime_palavra.hpp"

void imprime_palavra(std::string& palavra_secreta, std::map<char, bool>& chutou)
{
    for (char letra : palavra_secreta) {
        if (chutou.find(letra) == chutou.end()) {
            std::cout << "_ ";
        }
        else {
            std::cout << letra << " ";
        }
    }
    std::cout << std::endl;
}