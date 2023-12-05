#ifndef VECTOR2D_HPP
#define VECTOR2D_HPP

class Vector2D {
public:
    Vector2D(double x, double y);

    bool isEqual(const Vector2D& other) const;
    bool isSuperior(const Vector2D& other) const;

    Vector2D& operator+=(const Vector2D& other);

    // Surcharge de l'opérateur -=
    Vector2D& operator-=(const Vector2D& other);

    // Surcharge de l'opérateur *=
    Vector2D& operator*=(double scalar);

    void print() const;

    // Surcharge de l'opérateur () pour modifier les valeurs
    Vector2D& operator()(double x, double y);

private:
    double m_x;
    double m_y;
};

Vector2D operator+(const Vector2D& v1, const Vector2D& v2);
Vector2D operator-(const Vector2D& v1, const Vector2D& v2);
Vector2D operator*(const Vector2D& v, double scalar);
bool operator==(const Vector2D& v1, const Vector2D& v2);
bool operator<(const Vector2D& v1, const Vector2D& v2);

#endif  // VECTOR2D_HPP