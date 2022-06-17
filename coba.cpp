#include <iostream>
#include <string>

using namespace std;

// class tanpa constructor
class tanpaConstructor {
    public:
        string nama;
        
        void show() {
            cout << tanpaConstructor::nama << endl;
        }
};

// class dengan contructor
class denganConstructor {
    public:
        string nama;
        int angka;

        denganConstructor(const char* Isinama) {
            denganConstructor::nama = Isinama;

        }

        void show() {
            cout << denganConstructor::nama << endl;
        }
};

int main() {

    // membuat objek tanpa constructor
    tanpaConstructor objek1;
    objek1.nama = "heru";
    objek1.show();

    // membuat objek dengan constructor
    denganConstructor objek2 = denganConstructor("sulaiman");
    objek2.show();

    // membuat objek dengan cara lain
    denganConstructor objek3("yusuf");
    objek3.show();

    // cara membuat objek Pada heap memory
    denganConstructor* objek4 = new denganConstructor("objek4");
    objek4->show(); // arrow operator. untuk mapping function, attribut sebuah pointer
    cout << objek4->nama << endl;

    // membuat deklarasi objek tapi
    denganConstructor* objek5;
    objek5 = new denganConstructor("objek 5");
    objek5->show();
    

}