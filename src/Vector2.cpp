#include "Vector2.h"
#include <cmath>

Vector2::Vector2() : x(0.0f), y(0.0f) {}

Vector2::Vector2(float x, float y) : x(x), y(y) {}

Vector2 Vector2::operator+(const Vector2& other) const {
    return Vector2(x + other.x, y + other.y);
}

Vector2 Vector2::operator-(const Vector2& other) const {
    return Vector2(x - other.x, y - other.y);
}

Vector2 Vector2::operator*(float scalar) const {
    return Vector2(x * scalar, y * scalar);
}

Vector2 Vector2::operator/(float scalar) const {
    return Vector2(x / scalar, y / scalar);
}

bool Vector2::operator==(const Vector2& other) const {
    return x == other.x && y == other.y;
}

bool Vector2::operator!=(const Vector2& other) const {
    return !(*this == other);
}

float Vector2::length() const {
    return std::sqrt(x * x + y * y);
}

float Vector2::distance(const Vector2& other) const {
    Vector2 delta = other - *this;
    return delta.length();
}

float Vector2::dot(const Vector2& other) const {
    return x * other.x + y * other.y;
}

Vector2 Vector2::normalized() const {
    float len = length();
    if (len > 0.0f) {
        return *this / len;
    } else {
        return Vector2();
    }
}

float Vector2::angle(const Vector2& other) const {
    float len1 = length();
    float len2 = other.length();
    if (len1 > 0.0f && len2 > 0.0f) {
        float cos_angle = dot(other) / (len1 * len2);
        return std::acos(cos_angle) * 180.0f / M_PI;
    } else {
        return 0.0f;
    }
}

Vector2 Vector2::rotated(float degrees) const {
    float radians = degrees * M_PI / 180.0f;
    float cosine = std::cos(radians);
    float sine = std::sin(radians);
    return Vector2(x * cosine - y * sine, x * sine + y * cosine);
}

float Vector2::heading() const {
    return angle(Vector2(1.0f, 0.0f));
}
