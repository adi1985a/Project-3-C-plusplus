#include <iostream>                     // Dołączenie biblioteki iostream, która umożliwia operacje wejścia/wyjścia.
#include <locale>                       // Dołączenie biblioteki locale

using namespace std;                    // Użycie przestrzeni nazw std.

void setPolishLocale()                  // Funkcja pomocnicza do ustawienia lokalizacji
{
    std::locale::global(std::locale("pl_PL.UTF-8"));    // Ustawienie bieżącej lokalizacji na lokalizację polską
    std::wcout.imbue(std::locale());                    // Ustawienie lokalizacji dla strumienia wyjścia wcout
}

class Figura                            // Utworzenie klasy abstrakcyjnej Figura
{
public:                                 // Sekcja publiczna - zawiera publiczne składowe klasy Figura
    virtual void rysuj() = 0;           // Wirtualna bezparametrowa metoda rysuj()
};

class Kolo : public Figura              // Klasa Koło dziedzicząca po klasie Figura
{
public:                                 // Sekcja publiczna
    void rysuj() override               // Implementacja metody rysuj() dla Koła
    {
        cout << "To jest koło: ()" << endl;       // Rysuję figure Koło
    }
};


class Kwadrat : public Figura           // Klasa Kwadrat dziedzicząca po klasie Figura
{
public:                                 // Sekcja publiczna
    void rysuj() override               // Implementacja metody rysuj() dla Kwadratu
    {
        cout << "To jest kwadrat: []" << endl;    // Rysuję figure Kwadrat
    }
};

class Trojkat : public Figura           // Klasa Trójkąt dziedzicząca po klasie Figura
{
public:
    void rysuj() override               // Implementacja metody rysuj() dla Trójkąta
    {
        cout << "To jest trójkąt: /_\\" << endl;  // Rysuję figure trójkąt
    }
};

int main()                              // Główna funkcja programu.
{
    setPolishLocale();                      // Wywołanie funkcji setPolishLocale() przed rozpoczęciem programu

    // Tworzenie dynamicznych obiektów Koło, Kwadrat i Trójkąt:
    Figura* figura1 = new Kolo();       // Tworzenie obiektu figury 1 jako wskaźnik na typ Kolo
    Figura* figura2 = new Kwadrat();    // Tworzenie obiektu figury 2 jako wskaźnik na typ Kwadrat
    Figura* figura3 = new Trojkat();    // Tworzenie obiektu figury 3 jako wskaźnik na typ Trojkat

    // Wywołanie metody rysuj() dla każdego obiektu:
    figura1->rysuj();                   // Wywołanie metody rysuj() dla obiektu figura1
    figura2->rysuj();                   // Wywołanie metody rysuj() dla obiektu figura2
    figura3->rysuj();                   // Wywołanie metody rysuj() dla obiektu figura3

    // Usunięcie obiektów z pamięci za pomocą operatora delete:
    delete figura1;                     // Zwolnienie pamięci obiektu figura1
    delete figura2;                     // Zwolnienie pamięci obiektu figura2
    delete figura3;                     // Zwolnienie pamięci obiektu figura3

    return 0;                           // Zwrócenie wartości 0 - oznacza sukcesowe zakończenie programu.
}
