#ifndef POSITION_H
#define POSITION_H

class position
{
    public:
        position(int xx, int yy);
        ~position();
        int getX();
        int getY();
        void addToPosition(int dx, int dy);
        void setPosition(int xx, int yy);

    private:
        int x;
        int y;
};

#endif // POSITION_H
