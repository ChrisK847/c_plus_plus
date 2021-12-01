#include <iostream>
using namespace std;
class Rectangle{
    private:
        int m_height, m_width;
    public:
        Rectangle(int height, int width): m_height(height), m_width(width){};
        int area(void);
};