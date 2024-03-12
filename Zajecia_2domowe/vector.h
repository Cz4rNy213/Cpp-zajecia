#ifndef CPP_ZAJECIA_ZAJECIA2_H
#define CPP_ZAJECIA_ZAJECIA2_H


class Vector {
private:
    double x_;
    double y_;

public:
    Vector();
    Vector(double x, double y);

    Vector multiply(const double& v)const;

    Vector add(const Vector& v2)const;

    Vector minus(const Vector& v2)const;

    Vector operator+(const Vector& v2)const;

    Vector operator-(const Vector& v2)const;

    Vector operator-()const;


    void print()const;
    void x(double r);
    double x()const;
    void y(double i);
    double y()const;
};


#endif //CPP_ZAJECIA_ZAJECIA2_H
