#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

int main (){

    std::vector<std::pair<int, std::string>> v {
        {0,"Zero"}, {1,"One"}, {2,"Two"}, {3,"Three"}, {4,"Four"}, {5,"Five"}
    };

    std::vector<int> v2(size(v));

    std::transform(begin(v),end(v),begin(v2),[](auto x){return x.first;});

    for(auto e: v2){

        std::cout <<e<<" ";
    }


    std::vector<std::string> v3 (size(v));

    std::transform(begin(v),end(v),begin(v3),[](auto x){return x.second + ":" + std::to_string (x.first);});

    for(auto x: v3){

        std::cout<<x<< "\n";
    } 
    constexpr auto size =16;

    std::vector<char> v4(size);
    std::generate_n(begin(v4),size,[c='a'-2]()mutable{ c+=2; return c;});

    for(auto x: v4){

        std::cout<<x<< " ";
    } 

    return 0;
}