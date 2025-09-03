#include<unordered_map>
#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
#include<map>
struct Point;
double radius (Point p);

struct Point{

    int x;
    int y;
    bool operator<(const Point & other)const{

        if(x!=other.x) 
        {return x<other.x;}
        return  y<other.y;

    };
};

double radius (Point p){

    return std::sqrt(p.x * p.x + p.y * p.y);
    
}

int main (){

    std::map<Point, std::string> cord{

    {{17,51},"Wroclaw"},
    {{37,55},"Moskwa"},
    {{74,40},"Nowy Jork"},
    {{151,33},"Sydney"}};


    return 0;
}