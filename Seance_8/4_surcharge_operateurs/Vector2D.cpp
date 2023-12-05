#include <iostream>
#include "Vector2D.hpp"

using namespace std;

Vector2D::Vector2D(double x, double y) : m_x(x), m_y(y)
{
}

void Vector2D::print() const
{
    cout << "(" << m_x << ", " << m_y << ")" << endl;
}


bool Vector2D::isEqual(const Vector2D& other) const {
    return m_x == other.m_x && m_y == other.m_y;
}

bool Vector2D::isSuperior(const Vector2D& other) const {
    return (m_x * m_x + m_y * m_y) > (other.m_x * other.m_x + other.m_y * other.m_y);
}

Vector2D &Vector2D::operator+=(const Vector2D &other)
{
    m_x += other.m_x;
    m_y += other.m_y;
    return *this;
}

Vector2D &Vector2D::operator-=(const Vector2D &other)
{
    m_x -= other.m_x;
    m_y -= other.m_y;
    return *this;
}

Vector2D &Vector2D::operator*=(double scalar)
{      
    m_x *= scalar;
    m_y *= scalar;
    return *this;
}

Vector2D &Vector2D::operator()(double x, double y)
{
    m_x = x;
    m_y = y;
    return *this;  // Renvoie une référence à l'objet modifié
}


Vector2D operator+(const Vector2D& a, const Vector2D& b) {
    Vector2D tmp(a);
    tmp += b;
    return tmp;
}

Vector2D operator-(const Vector2D& a, const Vector2D& b) {
    Vector2D tmp(a);
    tmp -= b;
    return tmp;
}

Vector2D operator*(const Vector2D& v, double scalar) {
    Vector2D tmp(v);
    tmp *= scalar;
    return tmp;
}

bool operator==(const Vector2D& a, const Vector2D& b) {
    return a.isEqual(b);
}

bool operator<(const Vector2D& a, const Vector2D& b) {
    return b.isSuperior(a);
}