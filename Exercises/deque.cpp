#include <iostream>
#include <deque>
#include <algorithm>

int main () {

    std::deque<int> deq {5,12, 51, 61, 4};
    
    std::cout<< "Tablica elemenntow deque\n";

    for(int show: deq){
        std::cout << show << "\n";
    } 
    auto rem = std::remove(deq.begin(),deq.end(),51);

    deq.erase(rem,deq.end());

    std::cout<< "Tablica elemenntow deque v2\n";

    for(int show: deq){
        std::cout << show << "\n";
    }

    deq.push_front(30);
    deq.push_back(30);
    
    std::cout<< "Tablica elemenntow deque v3\n";
    
    for(int show:deq){
        std::cout<< show<< "\n";
        
    }
    auto tar= deq.begin();
    deq.emplace(std::next(tar,3),21);
    
    std::cout<< "Tablica elemenntow deque v4\n";
    
    for(int show:deq){
        std::cout<< show<< "\n";
    }

    return 0;

}