#include<iostream>
#include<algorithm>
#include<vector>
#include<iterator>

int main(){

    std::vector<int> v = {8, 2, 5, 3, 4, 4, 2, 7, 6, 6, 1, 8, 9};

    std::cout << std::count_if(begin(v),end(v),[](auto b){return b>6;});

    auto l = [](auto value){return value>6;};

    auto j = std::find_if(begin(v), end(v),l);

    std::cout << "\n";

    if(j!= end(v)){

        std::cout << *j<<"\n";

    }
    std::copy_if(begin(v),end(v),std::ostream_iterator<int>(std::cout," "),l);

    std::cout<<"\n";

    auto x = [](auto value){return value == 2 ||  value == 4 || value== 6 || value== 8;};

    std::copy_if(begin(v),end(v),std::ostream_iterator<int>(std::cout," "),x);


    
    return 0;


}