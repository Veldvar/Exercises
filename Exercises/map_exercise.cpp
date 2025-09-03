#include<iostream>
#include<algorithm>
#include<map>
#include<string>
 






void display(const std::multimap<int,std::string> &p){

    for(const auto &q:p){

        if(q.second.length() ==3){

        std::cout<<"multimap:"<<q.first<<"|"<<q.second<<std::endl;
        }
    }


}


int main (){

    std::multimap<int,std::string> map;

    map.insert({5, "Ala"});
    map.insert({5, "Ma"});
    map.insert({5, "Kota"});
    map.insert({5, "A"});
    map.insert({5, "Kot"});
    map.insert({5, "Ma"});
    map.insert({5, "Ale"});

    display(map);

}