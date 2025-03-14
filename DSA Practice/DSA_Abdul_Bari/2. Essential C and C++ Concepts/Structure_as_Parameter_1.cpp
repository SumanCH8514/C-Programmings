// Code Topic: Structure_as_Parameter DSA reCap//,
#include <iostream>
using namespace std;
struct image
{
    int size;
    int height;
    int width;
};
void view(struct image img)
{
    cout << "Image Height: " << img.height << "px" << endl;
    cout << "Image Width: " << img.width << "px" << endl;
    cout << "Image Size: " << img.size << "MB" << endl;
};
int main()
{
    image img;
    img.height = 400;
    img.width = 400;
    img.size = 2;
    view(img);

    return 0;
}