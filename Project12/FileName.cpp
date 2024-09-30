#include <iostream>
#include <cmath>

bool isPointInCircles(double x, double y, double R1, double d, double R2) {
 
    bool inCircle1 = (sqrt(x * x + y * y) <= R1);

    bool inCircle2 = (sqrt(pow(x - d, 2) + pow(y, 2)) <= R2);

    return inCircle1 && inCircle2;
}

int main() {
    double x, y, R1, d, R2;

  
    std::cout << "Enter the x-coordinate of point M: ";
    std::cin >> x;
    std::cout << "Enter the y-coordinate of point M: ";
    std::cin >> y;
    std::cout << "Enter the radius of the first circle R1: ";
    std::cin >> R1;
    std::cout << "Enter the distance d between the centers of the circles: ";
    std::cin >> d;
    std::cout << "Enter the radius of the second circle R2: ";
    std::cin >> R2;


    if (isPointInCircles(x, y, R1, d, R2)) {
        std::cout << "Point M lies within the intersection of the circles." << std::endl;
    }
    else {
        std::cout << "Point M does not lie within the intersection of the circles." << std::endl;
    }

    return 0;
}
