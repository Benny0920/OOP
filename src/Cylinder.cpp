# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"

double Cylinder :: SurfaceArea(){

    double Surface = 2.0*M_PI*radius*radius + 2.0*M_PI*radius*height;
    
    return Surface;
}

double Cylinder :: Volume(){
    
    double Volum = 1.0*M_PI*radius*radius*height;
    return Volum;
}

double Cylinder :: Circumference(){

    double Circum = 2.0*M_PI*radius;
    return Circum;
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    in >> cldr.radius >> cldr.height;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    out << "Circumference: " << fixed << setprecision(3) << cldr.Circumference() << endl;
    out << "SurfaceArea: " << fixed << setprecision(3) << cldr.SurfaceArea() << endl;
    out << "Volume: " << fixed << setprecision(3) << cldr.Volume();
    return out;
}

# endif
