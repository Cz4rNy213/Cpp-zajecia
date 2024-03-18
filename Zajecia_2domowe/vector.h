#pragma once


class Vector {
private:
    double x_;
    double y_;
    static double prec_;

public:
    Vector();
    Vector(double x, double y);

    Vector multiply(const double& v)const;

    Vector add(const Vector& v2)const;

    Vector minus(const Vector& v2)const;

    void multiplyV(const double& v);

    void addV(const Vector& v2);

    void minusV(const Vector& v2);

    double dot(const Vector& v2)const;

    double length()const;

    double lengthSq()const;

    Vector perpendicular()const;

    Vector operator+(const Vector& v2)const;

    Vector operator*(const double& v)const;

    Vector operator-(const Vector& v2)const;

    Vector& operator-=(const Vector& v2);

    Vector& operator+=(const Vector& v2);

    Vector& operator*=(const double& v);

    bool operator==(const Vector& v2)const;

    bool operator!=(const Vector& v)const;

    Vector operator-()const;

    static void compEpsilon(double v);



    void print()const;
    // void x(double r);
    Vector& x(double r);
    double x()const;
    // void y(double i);
    Vector& y(double i);
    double y()const;
};
