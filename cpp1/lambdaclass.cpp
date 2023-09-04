#include "lambdaclass.h"

lambdaclass::lambdaclass()
{

    auto lambda2 = [this]() {
        std::cout << "Membre publique de la classe : a : " << a << " , b : " << b << std::endl;
        std::cout << "Membre privé de la classe : c : " << c << " , d : " << d << std::endl;
        std::cout << "Membre protegé de la classe : e : " << e << " , f : " << f << std::endl;

    };
    lambda2();
}
