#include <iostream>
#include <list>
int main ()
{
    std::list<int> Lista {0,1,2,3,4,5};
    std::cout << "Lista przed usunięciem:\n";

    for (int z: Lista){
        std::cout<< z << "\n";
    }
    auto xo=Lista.begin();
    std::advance(xo,2);
    Lista.erase(xo);
    
    std::cout <<"Lista po usunieciu:\n";

    for (int z:Lista){
        std::cout<< z << "\n";
    }
    auto yx= Lista.begin();

    Lista.insert(std::next(yx,3),20);

    std::cout << "Lista po 20\n";

    for (int z:Lista) {
        std::cout <<  z << "\n";

    }

    return 0;
}