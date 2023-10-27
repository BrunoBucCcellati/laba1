#include <cmath>
double C(double x0, double u0)
{
    return u0 / exp(3 * x0);//константа для данных н.у. для построения истинного решения
}
double istinnoeResh(double C, double x0)
{
    return C * exp(3 * x0);
}
double k1(double xn, double vn)
{
    return 3 * vn;
}
double k2(double xn, double vn, double hn, double k1)
{
    return 3 * (vn + (hn / 2) * k1);
}
double k3(double xn, double vn, double hn, double k2)
{
    return 3 * (vn + (hn / 2) * k2);
}
double k4(double xn, double vn, double hn, double k3)
{
    return 3 * (vn + hn * k3);
}
//коэффициенты тестовой задачи
double k11(double xn, double vn)
{
    return (1 / (2 * xn + pow(xn, 2))) * pow(vn, 2) + vn - pow(vn, 3) * sin(10 * xn);
}
double k21(double xn, double vn, double hn, double k11)
{
    return (1 / (2 * (xn + (hn / 2)) + pow((xn + (hn / 2)), 2))) * pow((vn + (hn / 2) * k11), 2) + (vn + (hn / 2) * k11) - pow((vn + (hn / 2) * k11), 3) * sin(10 * (xn + (hn / 2)));
}
double k31(double xn, double vn, double hn, double k21)
{
    return (1 / (2 * (xn + (hn / 2)) + pow((xn + (hn / 2)), 2))) * pow((vn + (hn / 2) * k21), 2) + (vn + (hn / 2) * k21) - pow((vn + (hn / 2) * k21), 3) * sin(10 * (xn + (hn / 2)));
}
double k41(double xn, double vn, double hn, double k31)
{
    return (1 / (2 * (xn + hn) + pow((xn + hn), 2))) * pow((vn + hn * k31), 2) + (vn + hn * k31) - pow((vn + hn * k31), 3) * sin(10 * (xn + hn));
}
//коэффициенты первой задачи
double k1U(double xn, double vn, double a)
{
    return 0.5 * (exp(-a * xn) - exp(a * xn));
}
double k2U(double xn, double vn, double hn, double k1U, double a)
{
    return 0.5 * (exp(-a * (xn + (hn / 2))) - exp(a * (xn + (hn / 2))));
}
double k3U(double xn, double vn, double hn, double k2U, double a)
{
    return 0.5 * (exp(-a * (xn + (hn / 2))) - exp(a * (xn + (hn / 2))));
}
double k4U(double xn, double vn, double hn, double k3U, double a)
{
    return 0.5 * (exp(-a * (xn + hn)) - exp(a * (xn + hn)));
}
//коэффициенты приближённого нахождения U1 второй задачи
double k1U2(double xn, double vn, double a)
{
    return -a * sqrt(pow(vn, 2) + 1);
}
double k2U2(double xn, double vn, double hn, double k1U2, double a)
{
    return -a * sqrt(pow((vn + (hn / 2) * k1U2), 2) + 1);
}
double k3U2(double xn, double vn, double hn, double k2U2, double a)
{
    return -a * sqrt(pow((vn + (hn / 2) * k2U2), 2) + 1);
}
double k4U2(double xn, double vn, double hn, double k3U2, double a)
{
    return -a * sqrt(pow((vn + hn * k3U2), 2) + 1);
}
//коэффициенты приближённого нахождения U2 второй задачи
double sledshag(double vn, double hn, double k1, double k2, double k3, double k4)
{
    return vn + (hn / 6) * (k1 + 2 * k2 + 2 * k3 + k4);
}
double ocenkapogreshnosti(double vnplus1, double V2Nplus1, int p)
{
    return ((V2Nplus1 - vnplus1) / ((pow(2, p)) - 1)) * pow(2, p);
}