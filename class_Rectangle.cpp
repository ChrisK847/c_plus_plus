#include "./class_Rectangle.h"

Rectangle::Rectangle(int height, int width)
{
    this->m_height = height;
    this->m_width = width;
}

int Rectangle::area()
{
    cout << this->m_height * this->m_width << endl;
}