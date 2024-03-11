#ifndef CPP_ZAJECIA_ZAJECIA2_H
#define CPP_ZAJECIA_ZAJECIA2_H


class ComplexNumber {
private:
    double re_;
    double im_;

public:
    ComplexNumber();
    ComplexNumber(double re, double im);

    ComplexNumber add(const ComplexNumber& cn2)const;
    ComplexNumber add(const double& v)const;

    ComplexNumber minus(const ComplexNumber& cn2)const;
    ComplexNumber minus(const double& v)const;

    ComplexNumber operator+(const ComplexNumber& cn2)const;
    ComplexNumber operator+(const double& v)const;

    ComplexNumber operator-(const ComplexNumber& cn2)const;
    ComplexNumber operator-(const double& v)const;

    ComplexNumber operator-()const;


    void print()const;
    void re(double r);
    double re()const;
    void im(double i);
    double im()const;
};


#endif //CPP_ZAJECIA_ZAJECIA2_H
