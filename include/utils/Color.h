#ifndef COLOR_H
#define COLOR_H

class Color {
public:
    Color(int r, int g, int b, int a = 255);
    int r() const { return m_r; }
    int g() const { return m_g; }
    int b() const { return m_b; }
    int a() const { return m_a; }
private:
    int m_r, m_g, m_b, m_a;
};

#endif // COLOR_H
