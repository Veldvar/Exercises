#include<iostream>
#include<algorithm>
#include<deque>
#include<iterator>


struct Point {int x;int y;};

std::ostream & operator<<(std::ostream& os, const Point& point) {

    return os <<"{" << point.x <<", " << point.y << "}";  

}

// bool is_y_greater_than_x (Point point){

//     return point.x < point.y;
                       
    
// }



void grampsimo(std::deque<Point>d){
        
        auto is_y_greater_than_x = [](Point i){
            
            
            return i.x<i.y;
        };

        // std::copy(std::begin(d),std::end(d),std::ostream_iterator<Point>(std::cout," "));
        std::copy_if(std::begin(d),std::end(d),std::ostream_iterator<Point>(std::cout," "),is_y_greater_than_x);
    }   


int main (){

    std::deque<Point> d = {{1,3},{0,0},{1,2},{2,4},{4,1},{0,2},{2,2}};
    
    auto compareX= [](const auto &lhs,const auto &rhs){ return lhs.x<rhs.x;}; 
    auto compareY= [](const auto &lhs,const auto &rhs){ return lhs.y<rhs.y;};

    std::cout<<std::boolalpha<<std::is_sorted(d.begin(),d.end(),compareY);

    //grampsimo(d);
    // std::cout<<d[0] <<std::endl;

    //{1, 3} {1, 2} {2, 4} {0, 2} 
return 0;
}