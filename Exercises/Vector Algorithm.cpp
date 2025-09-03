#include <iostream>
#include <algorithm>
#include <vector>


int main (){

    std::vector<int> v = {8, 2, 5, 3, 4, 4, 2, 7, 6, 6, 1, 8, 9};

    int suma{0};
    
    auto XY=[&suma](int elem){if(elem>5){
        
        suma++;
        std::cout<< elem<<"\n";}};

    std::for_each(begin(v),end(v),XY);
    std::cout<< suma;    
    return 0;
}