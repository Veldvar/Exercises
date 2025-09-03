#include <iostream>
#include <vector>
#include <algorithm>

int main (){

    std::vector<int>v = {0,1,2,3,4,5,6,7,8,9};
    std::for_each (begin(v),end(v),[](int el){std::cout<< el<<"\n";});
    
    

    return 0;
}           