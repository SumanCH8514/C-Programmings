// Code Topic: Pointer to Structure DSA reCap//,
#include <iostream>
using namespace std;

struct Image
{
    string height;
    string width;
    string size;
};
int main()
{
    // // Pointer to structure normal method
    // struct Image img;
    // img.height = 400;
    // img.width = 400;
    // img.size = "2MB";

    // cout << "Height: " << img.height << endl;
    // cout << "Width: " << img.width << endl;
    // cout << "Size: " << img.size << endl;

    // Pointer to structure using pointer
    Image *img;
    img = new Image; // Dynamically allocate memory for the structure
    cout << "Enter the Image Height:";
    cin >> img->height;
    system("cls");
    cout << "Enter the Image Width:";
    cin >> img->width;
    system("cls");
    cout << "Enter the Image Size:";
    cin >> img->size;
    system("cls");

    cout << "Image Details:" << endl;
    cout << "Height: " << img->height + "px" << endl;
    cout << "Width: " << img->width + "px" << endl;
    cout << "Size: " << img->size + "MB" << endl;
    delete img; // Free the dynamically allocated memory
    return 0;
}