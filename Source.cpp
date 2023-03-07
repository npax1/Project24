#include <iostream>
#include <cmath>

using namespace std;

class Point1
{
public:
    Point1(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    void showCoords()
    {
        cout << "Coords of 1 point [ x: " << x << "\t y: " << y << " ]" << endl;
    }
    Point1& move(int x, int y)
    {
        this->x += x;
        this->y += y;
        return *this;
    }
private:
    int x;
    int y;
};

class Point2
{
public:
    Point2(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    void showCoords()
    {
        cout << "Coords of 2 point [ x: " << x << "\t y: " << y << " ]" << endl;
    }
    Point2& move(int x, int y)
    {
        this->x += x;
        this->y += y;
        return *this;
    }
private:
    int x;
    int y;
};

int main()
{
    int x_1, x_1_move{}, y_1, y_1_move{};
    cout << "Enter 1 x -> ";
    cin >> x_1;
    cout << "Enter 1 y -> ";
    cin >> y_1;
    cout << "Enter 1 x move -> ";
    cin >> x_1_move;
    cout << "Enter 1 y move -> ";
    cin >> y_1_move;

    Point1 p1(x_1, y_1);
    p1.move(x_1_move, y_1_move);
    p1.showCoords();

    cout << "\n\n\n";

    int x_2, x_2_move{}, y_2, y_2_move{};
    cout << "Enter 2 x -> ";
    cin >> x_2;
    cout << "Enter 2 y -> ";
    cin >> y_2;
    cout << "Enter 2 x move -> ";
    cin >> x_2_move;
    cout << "Enter 2 y move -> ";
    cin >> y_2_move;

    Point2 p2(x_2, y_2);
    p2.move(x_2_move, y_2_move);
    p2.showCoords();

    int res_x_1, res_x_2, res_y_1, res_y_2;
    res_x_1 = x_1 + x_1_move;
    res_x_2 = x_2 + x_2_move;
    res_y_1 = y_1 + y_1_move;
    res_y_2 = y_2 + y_2_move;

    double path;
    path = sqrt(res_x_2 * res_x_1 + res_y_2 * res_y_1);
    cout << "\nPath = [" << path << "]";

    return 0;
}