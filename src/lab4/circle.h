#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

namespace Shapes
{
class Circle : public Shape
{
    // TODO:
    private:
        int xcenter;
        int ycenter;
        int radius;
    public:
        Rectangle(int Xcenter, int Ycenter, int Radius)
        {
            xcentre = Xcenter;
            ycentre = Ycenter;
            radius = Radius;
        }
        virtual bool isIn(int x, int y) const
        {
            return (x >= xcenter - radius) && (x <= xcenter + radius) && (y >= ycenter - radius) && (y < center + radius);
        }

        int getX() const
        {
            return xcenter;
        }
        int getY() const
        {
            return ycenter;
        }
        int getR() const
        {
            return radius;
        }
};
} // namespace Shapes

#endif // CIRCLE_H
