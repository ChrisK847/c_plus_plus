#include "./class_Rectangle.h"

    Rectangle::Rectangle(void)
    {
        m_height = 0;
        m_width = 0;
    }

    Rectangle::Rectangle(int height, int width)
    {
        m_height = height;
        m_width = width;
    }

int Rectangle::area(void)
{
    int a = m_height * m_width;
    return a;
}