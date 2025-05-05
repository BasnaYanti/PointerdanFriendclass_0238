#include <iostream>
using namespace std;

class mahasiswa 
{
    public: 
    int nim;
    void showNim()
    {
        cout << "No Induk = " << nim << endl;
    }
};

int main(int argc, char const *argv[])
{
    int a = 10;
    int b  = 6;
    int y = 20;
    int *c = &a;
    cout << "Alamat memori : " << c << endl;
    cout << "Nilai dari c : " << *c << endl;
    c = &y;
    cout << "Alamat memori : " << c << endl;
    cout << "Nilai dari c : " << *c << endl;
    
    int &d = b;
    cout << "Nilai" << d << endl;
    cout << "reference " << &d << endl;

    int f = 5;
    int g = f;

    return 0;
}