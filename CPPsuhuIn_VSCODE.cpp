#include <iostream>
#include <iomanip>
using namespace std;

// Deklarasi fungsi
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

double kelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}

void tampilkanMenu() {
    cout << "\n=== KONVERSI SUHU ===" << endl;
    cout << "1. Celsius ke Fahrenheit & Kelvin" << endl;
    cout << "2. Fahrenheit ke Celsius & Kelvin" << endl;
    cout << "3. Kelvin ke Celsius & Fahrenheit" << endl;
    cout << "4. Keluar" << endl;
    cout << "Pilih menu (1-4): ";
}

int main() {
    int pilihan;
    double suhu;
    
    cout << fixed << setprecision(2);
    
    do {
        tampilkanMenu();
        cin >> pilihan;
        
        if (pilihan >= 1 && pilihan <= 3) {
            cout << "Masukkan suhu: ";
            cin >> suhu;
            cout << "\n--- HASIL KONVERSI ---" << endl;
        }
        
        switch(pilihan) {
            case 1:
                cout << suhu << "°C = " << celsiusToFahrenheit(suhu) << "°F" << endl;
                cout << suhu << "°C = " << celsiusToKelvin(suhu) << " K" << endl;
                break;
            case 2:
                cout << suhu << "°F = " << fahrenheitToCelsius(suhu) << "°C" << endl;
                cout << suhu << "°F = " << celsiusToKelvin(fahrenheitToCelsius(suhu)) << " K" << endl;
                break;
            case 3:
                cout << suhu << " K = " << kelvinToCelsius(suhu) << "°C" << endl;
                cout << suhu << " K = " << celsiusToFahrenheit(kelvinToCelsius(suhu)) << "°F" << endl;
                break;
            case 4:
                cout << "\nTerima kasih!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
        }
    } while (pilihan != 4);
    
    return 0;
}
