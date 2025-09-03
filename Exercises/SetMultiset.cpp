#include <set>
#include <iostream>
#include <vector>
#include <numeric>





int main(){

    std::vector<int> numbers (41);
    std::iota(numbers.begin(),numbers.end(),-20);
    
    for(auto el:numbers) {
        std::cout<< el;
    }
    
     std::cout<<std::endl;
    std::set<int, std::greater<int>> n(numbers.begin(),numbers.end());
    
    for (auto el:n){
        std::cout<< el<<" ";

    }
    std::cout<<"\n";
   
    n.insert(-10);
    n.emplace(0);
    n.emplace_hint(n.begin(),10);
    n.emplace_hint(n.begin(),100);
    n.emplace_hint(n.begin(),-100);

    for (auto el:n){
        std::cout<< el<<" ";

    }

    std::cout<<"\n";

    std::iota(numbers.begin(),numbers.end(),0);
    std::multiset<int> m (numbers.begin(),numbers.end());
    
    for (auto el:m){
        std::cout<< el<<" ";

    }

    std::cout<<"\n";

    m.insert(-10);
    m.emplace(0);
    m.emplace_hint(m.begin(),10);
    m.emplace_hint(m.begin(),100);
    m.emplace_hint(m.begin(),-100);

    
    for (auto el:m){
        std::cout<< el<<" ";

    }

    std::cout<<"\n";
    std::cout<<"\n";

    m.merge(n);

    for (auto el:m){
        std::cout<< el<<" ";

    }

    std::cout<<"\n";
    std::cout<<"\n";

    auto [l,u] = m.equal_range(0);  //Szukamy zera

    
    
    for(;l!=u;l++){

        std::cout<<*l;
    }



    return 0;
}
