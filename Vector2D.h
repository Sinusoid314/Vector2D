//Vector2D v1.0
//Written by Andrew Sturges
//November 2019

#ifndef _VECTOR2D_H
#define _VECTOR2D_H

class CVector2D
{
  public:

    float x;
    float y;

    CVector2D(void);
    CVector2D(float, float);
    CVector2D(const CVector2D&);
    CVector2D& operator=(const CVector2D&);
    //~CVector2D(void);

    void SetComponents(float, float);
    void GetComponents(float&, float&);
    void operator+=(const CVector2D&);
    CVector2D operator+(const CVector2D&) const;
    void operator-=(const CVector2D&);
    CVector2D operator-(const CVector2D&) const;
    void operator*=(const float);
    CVector2D operator*(const float) const;
    void operator/=(const float);
    CVector2D operator/(const float) const;
    float Dot(const CVector2D&) const;
    float Magnitude(void);
    void Normalize(void);
    void Clamp(const CVector2D&, const CVector2D&);
    void ClampX(float, float);
    void ClampY(float, float);
};

#endif
