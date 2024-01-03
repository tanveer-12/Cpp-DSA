//Basic inheritane example
#include <iostream>

class rectangleType
{
    public:
    void setDimension(double l, double w);
    double getLength() const;
    double getWidth() const;
    double area() const;
    double perimeter() const;
    void print() const;
    rectangleType();
    rectangleType(double l, double w);

    private:
    double length;
    double width;
};

void rectangleType::setDimension(double l, double w)
{
    if(l >= 0)
    length = l;
    else
    length = 0;

    if(w >= 0)
    width = w;
    else
    width =0 ;
}

double rectangleType::getLength() const
{
    return length;
}

double rectangleType::getWidth() const
{
    return width;
}

double rectangleType::area() const
{
    return length * width;
}

double rectangleType::perimeter() const
{
    return 2 * (length +  width);
}

void rectangleType::print() const
{
    std::cout<<"Length = "<<length<<" ; Width = "<<width;
}

rectangleType::rectangleType()
{
    length = 0;
    width = 0;
}

rectangleType::rectangleType(double l, double w)
{
    setDimension(l,w);
}

class boxType: public rectangleType
{
    public:
    void setDimension(double l, double w, double h);
    double getHeight() const;
    double area() const;
    double volume() const;
    void print() const;
    boxType();
    boxType(double l, double w, double h);

    private:
    double height; 
};

void boxType::setDimension(double l, double w, double h)
{
    rectangleType::setDimension(l,w);
    if(h >= 0)
    height = h;
    else
    height = 0;
}

double boxType::getHeight() const
{
    return height;
}

double boxType::area() const
{
    return 2 * (getLength() * getWidth() + getLength() * height + getWidth() * height);
}

double boxType::volume() const
{
    return rectangleType::area() * height;
}

void boxType::print() const
{
    rectangleType::print();
    std::cout<<" ; Height = "<<height;
}

boxType::boxType()
{
    height = 0.0;
}

boxType::boxType(double l, double w, double h) : rectangleType(l,w)
{
    if(h >= 0)
    height = h;
    else
    height = 0;
}