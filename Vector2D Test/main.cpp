#include <iostream>
#include "..\Vector2D.h"

using namespace std;

void PrintVector(const CVector2D vect2dRef)
{
    cout << "(" << vect2dRef.x << " , " << vect2dRef.y << ")" << endl;
}

int main()
{
    CVector2D vect1;
    CVector2D vect2(3,4);
    CVector2D vect3(2,5);
    float magVal = 0;
    float dotVal = 0;

    PrintVector(vect1);
    PrintVector(vect2);
    PrintVector(vect3);
    cout << endl;

    dotVal = vect2.Dot(vect3);
    magVal = vect2.Magnitude();
    vect2.Normalize();

    cout << "Dot: " << dotVal << endl;
    cout << "Magnitude: " << magVal << endl;
    cout << endl;

    cout << "Normalized:" << endl;
    PrintVector(vect2);
    cout << "Magnitude: " << vect2.Magnitude() << endl;
    cout << endl;

    return 0;
}
