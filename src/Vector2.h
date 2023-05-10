#ifndef VECTOR2_H
#define VECTOR2_H

class Vector2 {
public:
    float x;
    float y;

    Vector2();
    Vector2(float x, float y);
    Vector2 operator+(const Vector2& other) const;
    Vector2 operator-(const Vector2& other) const;
    Vector2 operator*(float scalar) const;
    Vector2 operator/(float scalar) const;
    bool operator==(const Vector2& other) const;
    bool operator!=(const Vector2& other) const;
    float length() const;
    float distance(const Vector2& other) const;
    float dot(const Vector2& other) const;
    Vector2 normalized() const;
    float angle(const Vector2& other) const;
    Vector2 rotated(float degrees) const;
    float heading() const;
};

#endif
