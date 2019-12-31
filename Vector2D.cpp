#include "math.h"
#include "Vector2D.h"

using namespace std;


CVector2D::CVector2D(void)
//
{
    SetComponents(0.0, 0.0);
}

CVector2D::CVector2D(float newX, float newY)
//
{
    SetComponents(newX, newY);
}

CVector2D::CVector2D(const CVector2D& vect2dRef)
//
{
    SetComponents(vect2dRef.x, vect2dRef.y);
}

CVector2D& CVector2D::operator=(const CVector2D& vect2dRef)
//
{
    SetComponents(vect2dRef.x, vect2dRef.y);
    return *this;
}

void CVector2D::SetComponents(float newX, float newY)
//Give components new values
{
    x = newX;
    y = newY;
}

void CVector2D::GetComponents(float& xRef, float& yRef)
//Return components values
{
    xRef = x;
    yRef = y;
}

void CVector2D::operator+=(const CVector2D& vect2dRef)
//Add another vector to this one
{
    x += vect2dRef.x;
    y += vect2dRef.y;
}

CVector2D CVector2D::operator+(const CVector2D& vect2dRef) const
//Return the addition of another vector to this one as a new vector
{
    return CVector2D(x + vect2dRef.x, y + vect2dRef.y);
}

void CVector2D::operator-=(const CVector2D& vect2dRef)
//Subtract another vector from this one
{
    x -= vect2dRef.x;
    y -= vect2dRef.y;
}

CVector2D CVector2D::operator-(const CVector2D& vect2dRef) const
//Return the subtraction of another vector from this one as a new vector
{
    return CVector2D(x - vect2dRef.x, y - vect2dRef.y);
}

void CVector2D::operator*=(const float scaleVal)
//Scale this vector up
{
    x *= scaleVal;
    y *= scaleVal;
}

CVector2D CVector2D::operator*(const float scaleVal) const
//Return a new scaled-up version of this vector
{
    return CVector2D(x * scaleVal, y * scaleVal);
}

void CVector2D::operator/=(const float scaleVal)
//Scale this vector down
{
    x /= scaleVal;
    y /= scaleVal;
}

CVector2D CVector2D::operator/(const float scaleVal) const
//Return a new scaled-down version of this vector
{
    return CVector2D(x / scaleVal, y / scaleVal);
}

float CVector2D::Dot(const CVector2D& vect2dRef) const
//Return the dot product of this vector and another
{
    return (x * vect2dRef.x) + (y * vect2dRef.y);
}

float CVector2D::Magnitude(void)
//Return the magnitude of this vector
{
    return sqrt((x * x) + (y * y));
}

void CVector2D::Normalize(void)
//Convert this vector to a unit vector (magnitude of 1)
{
    float magVal = Magnitude();

    if(magVal > 0.0f)
    {
        //x /= magVal;
        //y /= magVal;
        (*this) /= magVal;
    }
}

void CVector2D::Clamp(const CVector2D& minVect2dRef, const CVector2D& maxVect2dRef)
//Restrict the components of this vector to a specified range
{
    ClampX(minVect2dRef.x, maxVect2dRef.x);
    ClampY(minVect2dRef.y, maxVect2dRef.y);
}

void CVector2D::ClampX(float minVal, float maxVal)
//Restrict the X component of this vector to a specified range
{
    x = fmaxf(minVal, fminf(x, maxVal));
}

void CVector2D::ClampY(float minVal, float maxVal)
//Restrict the Y component of this vector to a specified range
{
    y = fmaxf(minVal, fminf(y, maxVal));
}
