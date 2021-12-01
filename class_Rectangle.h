#include <iostream>
using namespace std;
class Rectangle{
    private:
        int m_height, m_width;
    public:
        Rectangle(void);
        Rectangle(int height, int width);
        int area(void);
};