#include "./class_Rectangle.h"

    Rectangle::Rectangle(int height, int width)
    {
        m_height = height;
        m_width = width;
    }

int Rectangle::area()
{
    Rectangle::m_area = Rectangle::m_height - Rectangle::m_width;
    return Rectangle::m_area
}