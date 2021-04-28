#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

namespace Shapes
{
class Rectangle : public Shape
{
    // TODO:
    private:
        int xform;
        int yform;
        int xinto;
        int yinto;
    public:
    Rectangle(int xf, int yf, int xi, int yi)
    {
        xform = xf;
        yform = yf;
        xinto = xi;
        yinto = yi;
    }
    virtual bool isIn(int x, int y) const
    {
        return (x >= xform) && (y >= yform) && (x <= xinto) && (y <= yinto);
    }

    int getXfrom() const
    {
        return xform;
    }
    int getYfrom() const
    {
        return yform;
    }
    int getXto() const
    {
        return xinto;
    }
    int getYto() const
    {
        return yinto;
    }
};
} // namespace Shapes

#endif // RECTANGLE_H
