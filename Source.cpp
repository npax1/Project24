#include <iostream>

using namespace std;

struct potato {
    float w, h, p;
    potato()
    {
        w = 0;
        h = 0;
        p = 0;
    }
    potato(float w, float h, float p)
    {
        this->w = w;
        this->h = h;
        this->p = p;
    }
    void about()
    {
        cout << "W:  \t" << w << endl;
        cout << "H:  \t" << h << endl;
        cout << "P:  \t" << p << endl;
        cout << endl;
    }

    void print_potato(int pos_y)
    {
        for (size_t i = 0; i < w; i++)
        {
            for (size_t k = 0; k < pos_y; k++)
            {
                cout << "\t";
            }
            for (size_t i = 0; i < h; i++)
            {
                cout << "*" << "\t";
            }
            cout << "\n\n" << endl;
        }
    }

};


int main()
{
    cout << "Enter x -> ";
    int pos_x;
    cin >> pos_x;
    cout << "Enter y -> ";
    int pos_y;
    cin >> pos_y;


    potato* potato_1 = new potato();
    int height;
    cout << "Enter heig -> ";
    cin >> height;
    int lenght;
    cout << "Enter len -> ";
    cin >> lenght;
    potato* potato_2 = new potato(height, lenght, 27);
    uint32_t size = 2;
    potato** potatos = new potato * [size] {
        new potato(),
            new potato(height, lenght, 27)
    };
    for (size_t i = 0; i < size; i++)
    {
        potatos[i]->about();
    }
    cout << "\n>---------------------------------------------------------------------<\n\n\n";
    for (size_t i = 0; i < pos_x; i++)
    {
        cout << "\n";
    }
    for (size_t i = 0; i < size; i++)
    {
        potatos[i]->print_potato(pos_y);
    }
    delete[] potatos;
    return 0;
}