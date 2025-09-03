#include<numeric>
#include<vector>
#include<iostream>
#include<algorithm>

// struct points {int x, y, d, b;};

int main (){

    std::vector<int> v1 (1000);
    std::iota(v1.begin(),v1.end(),1);
    // std::for_each(v1.begin(),v1.end(),[](auto x){std::cout<<x<<" ";});
    auto sum = std::reduce(v1.begin(),v1.end(),0);
    // std::cout <<sum;
    std::generate(v1.begin(),v1.end(),[](){
        static int i = 1;
        int sign =1;                           
        
        if(i%4==1)
        {
            sign=-1;
        }
          return(i++)%2*sign;});
            
          std::for_each(v1.begin(),v1.end(),[](auto x){std::cout<<x<<" ";});

}