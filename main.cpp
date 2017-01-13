#include <iostream>
using namespace std;

enum CATEGORII {
    LUNGIME = 1,
    ARIE,
    VOLUM,
    TIMP,
    VITEZA,
    TEMPERATURA,
    MASA,
    ENERGIE,
    PRESIUNE,
    DENSITATE,
    CONSUMCOMBUSTIBIL,
    EXIT
};

enum MASURI_LUNGIME {
    LUNGIME_METRI = 1,
    LUNGIME_KILOMETRI,
    LUNGIME_CENTIMETRI,
    LUNGIME_MILIMETRI
};
enum MASURI_ARIE {
    ARIE_METRI = 1,
    ARIE_CENTIMETRI,
    ARIE_MILIMETRI,
    ARIE_KILOMETRI,
    ARIE_HA
};
enum MASURI_VOLUM {
    VOLUM_METRI = 1,
    VOLUM_CENTIMETRI,
    VOLUM_DECIMETRI,
    VOLUM_LITRI,
    VOLUM_DECILITRI,
    VOLUM_MILILITRI

};
enum MASURI_TIMP {
    TIMP_SECUNDA = 1,
    TIMP_MINUTE,
    TIMP_ORA,
    TIMP_DECISECUNDA,
    TIMP_CENTISECUNDA
};
enum MASURI_VITEZA{
    VITEZA_KMH = 1,
    VITEZA_MPH,
    VITEZA_MS
};
enum MASURI_TEMPERATURA{
    TEMPERATURA_CELSIUS = 1,
    TEMPERATURA_KELVIN,
    TEMPERATURA_Fahrenheit,
    TEMPERATURA_RANKINE
};
enum MASURI_ENERGIE {
    ENERGIE_J = 1,
    ENERGIE_KJ,
    ENERGIE_WS
};

enum MASURI_MASA {
    MASA_GRAME = 1,
    MASA_KILOGRAME,
    MASA_MILIGRAME,
    MASA_TONE
};
enum MASURI_PRESIUNE{
    PRESIUNE_BAR = 1,
    PRESIUNE_PSI
};
enum MASURI_DENSITATE{
    DENSITATE_KGM = 1,
    DENSITATE_KGL,
    DENSITATE_GM,
    DENSITATE_GL
};
enum MASURI_CONSUMCOMBUSTIBIL{
    CONSUMCOMBUSTIBIL_L100km = 1,
    CONSUMCOMBUSTIBIL_MILEGALON,
    CONSUMCOMBUSTIBIL_KML
};

void print_menu() {
    cout <<endl;
    cout << "C O N V E R T O R : " << endl;
    cout << endl;
    cout << "1. Lungime" << endl;
    cout << "2. Arie" << endl;
    cout << "3. Volum" << endl;
    cout << "4. Timp" << endl;
    cout << "5. Viteza" << endl;
    cout << "6. Temperatura" << endl;
    cout << "7. Masa" << endl;
    cout << "8. Energie" << endl;
    cout << "9. Presiune" << endl;
    cout << "10. Densitate" << endl;
    cout << "11. Consum combustibil" << endl;
    cout << "12. Exit" << endl;
    cout << endl;
}

char* get_measure_string(int option, int measure) {
    if (option == LUNGIME) {
        if (measure == LUNGIME_METRI) {
            return "m";
        }
        else if (measure == LUNGIME_KILOMETRI) {
            return "km";
        }
        else if(measure == LUNGIME_CENTIMETRI){
                return "cm";
        }
        else if(measure == LUNGIME_MILIMETRI){
            return "mm";
        }
    }
    else if(option == ARIE){
        if(measure == ARIE_METRI){
            return "m";
        }
        else if(measure == ARIE_CENTIMETRI){
            return "cm";
        }
        else if(measure == ARIE_MILIMETRI){
            return "mm";
        }
        else if(measure == ARIE_KILOMETRI){
            return "km";
        }
        else if(measure == ARIE_HA){
            return "ha";
        }
    }
    else if(option == VOLUM){
        if(measure == VOLUM_METRI){
            return "m";
        }
        else if (measure == VOLUM_CENTIMETRI){
            return "cm";
        }
        else if(measure == VOLUM_DECIMETRI){
            return "dm";
        }
        else if(measure == VOLUM_LITRI){
            return "l";
        }
        else if(measure == VOLUM_DECILITRI){
            return "dl";
        }
        else if(measure == VOLUM_MILILITRI){
            return "ml";
        }

    }
    else if(option == TIMP){
        if(measure == TIMP_SECUNDA){
            return "sec";
        }
        else if(measure == TIMP_MINUTE){
            return "min";
        }
        else if(measure == TIMP_ORA){
            return "h";
        }
        else if(measure == TIMP_DECISECUNDA){
            return "ds";
        }
        else if(measure == TIMP_CENTISECUNDA){
            return "cs";
        }
    }
    else if(option == VITEZA){
        if(measure == VITEZA_KMH){
            return "km/h";
        }
        else if(measure == VITEZA_MPH){
            return "mph";
        }
        else if(measure == VITEZA_MS){
            return "m/s";
        }
    }
    else if(option == TEMPERATURA){
        if(measure == TEMPERATURA_CELSIUS){
            return "C";
        }
        else if(measure == TEMPERATURA_KELVIN){
            return "K";
        }
        else if(measure == TEMPERATURA_Fahrenheit){
            return "F";
        }
        else if(measure == TEMPERATURA_RANKINE){
            return "R";
        }
    }
    else if(option == MASA){
        if(measure == MASA_GRAME){
            return "g";
        }
        else if(measure == MASA_KILOGRAME){
            return "kg";
        }
        else if(measure == MASA_MILIGRAME){
            return "mg";
        }
        else if(measure == MASA_TONE){
            return "t";
        }
    }
    else if(option == ENERGIE){
        if(measure == ENERGIE_J){
            return "J";
        }
        else if(measure == ENERGIE_KJ){
            return "KJ";
        }
        else if(measure == ENERGIE_WS){
            return "W*s";
        }
    }
    else if(option == PRESIUNE){
        if(measure == PRESIUNE_BAR){
            return "bar";
        }
        else if(measure == PRESIUNE_PSI){
            return "PSI";
        }
    }
    else if(option == DENSITATE){
        if(measure == DENSITATE_GL){
            return "g/l";
        }
        else if(measure == DENSITATE_GM){
            return "g/m";
        }
        else if(measure == DENSITATE_KGL){
            return "kg/l";
        }
        else if(measure == DENSITATE_KGM){
            return "kg/m";
        }
    }
    else if(option == CONSUMCOMBUSTIBIL){
        if(measure == CONSUMCOMBUSTIBIL_L100km){
            return "l/100km";
        }
        else if(measure == CONSUMCOMBUSTIBIL_KML){
            return "km/l";
        }
        else if(measure == CONSUMCOMBUSTIBIL_MILEGALON){
            return "mile/galon";
        }
    }

    return "";
}

int get_user_option() {
    int option = 0;
    cout << "Introduceti optiunea: "; cin >> option;
    cout << endl;
    return option;
}

int get_user_measure() {
    int measure = 0;
    cout << "\t\tIntroduceti masura: "; cin >> measure;
    return measure;
}

double get_user_value() {
    double value = 0;
    cout << "\t\tIntroduceti valoarea: "; cin >> value;
    return value;
}

int print_user_option_measurements(int option) {
    switch (option) {
        case LUNGIME:
            cout << "\tLungime:" << endl;
            cout << "\t1. m" << endl;
            cout << "\t2. km" << endl;
            cout << "\t3. cm" << endl;
            cout << "\t4. mm" << endl;
            cout << endl;
            break;
        case ARIE:
            cout << "\tArie:" << endl;
            cout << "\t1. m" << endl;
            cout << "\t2. cm" << endl;
            cout << "\t3. mm" << endl;
            cout << "\t4. km" << endl;
            cout << "\t5. ha" << endl;
            cout << endl;
            break;
        case VOLUM:
            cout << "\tVolum:" << endl;
            cout << "\t1. m" << endl;
            cout << "\t2. cm" << endl;
            cout << "\t3. dm" << endl;
            cout << "\t4. l" << endl;
            cout << "\t5. dl" << endl;
            cout << "\t6. ml" << endl;
            cout <<  endl;
            break;
        case TIMP:
            cout << "\tTimp:" << endl;
            cout << "\t1. sec" << endl;
            cout << "\t2. min" << endl;
            cout << "\t3. h" << endl;
            cout << "\t4. ds" << endl;
            cout << "\t5. cs" << endl;
            cout <<  endl;
            break;
        case VITEZA:
            cout << "\tViteza:" << endl;
            cout << "\t1. km/h" << endl;
            cout << "\t2. mph" << endl;
            cout << "\t3. m/s" << endl;
            cout << endl;
            break;
        case TEMPERATURA:
            cout << "\tTemperatura:" << endl;
            cout << "\t1. Celsius" << endl;
            cout << "\t2. Kelvin" << endl;
            cout << "\t3. Fahrenheit" << endl;
            cout << "\t4. Rankine" << endl;
            cout << endl;
            break;
        case MASA:
            cout << "\tMasa:" << endl;
            cout << "\t1. g" << endl;
            cout << "\t2. kg" << endl;
            cout << "\t3. mg" << endl;
            cout << "\t4. t" << endl;
            cout << endl;
            break;
        case ENERGIE:
            cout << "\tEnergie:" << endl;
            cout << "\t1. J" << endl;
            cout << "\t2. KJ" << endl;
            cout << "\t3. W*s" << endl;
            cout << endl;
            break;
        case PRESIUNE:
            cout << "\tPresiune:" << endl;
            cout << "\t1. bar" << endl;
            cout << "\t2. PSI" << endl;
            cout << endl;
            break;
        case DENSITATE:
            cout << "\tDensitate:" << endl;
            cout << "\t1. kg/m" << endl;
            cout << "\t2. kg/l" << endl;
            cout << "\t3. g/m" << endl;
            cout << "\t4. g/l" << endl;
            cout << endl;
            break;
        case CONSUMCOMBUSTIBIL:
            cout << "\tConsum combustibil:" << endl;
            cout << "\t1. l/100km" << endl;
            cout << "\t2. mile/galon" << endl;
            cout << "\t3. km/l" << endl;
            break;
        case EXIT:
            return -1;
            break;
        default:
            cout << "\tOptiune invalida! Incercati din nou!" << endl;
            return 0;
    }

    return 1;
}

double resolve_equation(int option, int measure_1, int measure_2, double value) {
    if (option == LUNGIME) {
        if (measure_1 == LUNGIME_METRI) {
            if (measure_2 == LUNGIME_METRI){
                return value;
            }
            else if (measure_2 == LUNGIME_KILOMETRI) {
                return value / 1000;
            }
            else if(measure_2 == LUNGIME_CENTIMETRI){
                return value * 100;
            }
            else if(measure_2 == LUNGIME_MILIMETRI){
                return value * 1000;
            }
        }
        else if(measure_1  == LUNGIME_KILOMETRI){
                if(measure_2 == LUNGIME_KILOMETRI){
                        return value;
                }
                else if (measure_2 == LUNGIME_METRI){
                        return value * 1000;
                }
                else if ( measure_2 == LUNGIME_CENTIMETRI){
                     return value * 100000;
                }
                else if( measure_2 == LUNGIME_MILIMETRI){
                    return value * 1000000;
                }
        }
        else if(measure_1  ==LUNGIME_CENTIMETRI){
                if(measure_2 == LUNGIME_CENTIMETRI){
                        return value;
                }
                else if (measure_2 == LUNGIME_METRI){
                        return value / 100;
                }
                else if ( measure_2 == LUNGIME_KILOMETRI){
                     return value / 100000;
                }
                else if( measure_2 == LUNGIME_MILIMETRI){
                    return value * 10;
                }
            }
        else if(measure_1  == LUNGIME_MILIMETRI){
                if(measure_2 == LUNGIME_MILIMETRI){
                        return value;
                }
                else if (measure_2 == LUNGIME_METRI){
                        return value / 1000;
                }
                else if ( measure_2 == LUNGIME_KILOMETRI){
                     return value / 1000000;
                }
                else if( measure_2 == LUNGIME_CENTIMETRI){
                    return value / 10;
                }
                }
        else {
            return -1;
        }
    }
   else if (option == ARIE){
        if(measure_1 == ARIE_METRI){
            if (measure_2 == ARIE_METRI){
                return value;
            }
        else if (measure_2 == ARIE_CENTIMETRI){
                return value * 10000;
        }
        else if(measure_2 == ARIE_KILOMETRI){
            return value / 1000000;
        }
        else if( measure_2 == ARIE_MILIMETRI){
            return value * 1000000;
        }
        else if( measure_2 == ARIE_HA){
            return value / 10000;
        }

}
        else if (measure_1 == ARIE_CENTIMETRI){
            if(measure_2 == ARIE_CENTIMETRI){
                return value;
            }
        else if(measure_2 == ARIE_METRI){
            return value / 10000;
        }
        else if(measure_2 == ARIE_KILOMETRI){
            return value * 10000000000;
        }
        else if(measure_2 == ARIE_MILIMETRI){
            return value * 100;
        }
        else if(measure_2 == ARIE_HA){
            return value * 100000000;
        }

    }
    else if(measure_1 == ARIE_KILOMETRI){
        if(measure_2 == ARIE_KILOMETRI){
            return value;
        }
        else if(measure_2 == ARIE_CENTIMETRI){
            return value * 10000000000;
        }
        else if(measure_2 == ARIE_METRI){
            return value * 1000000;
        }
        else if(measure_2 == ARIE_MILIMETRI){
            return value * 1000000000000;
        }
        else if(measure_2 == ARIE_HA){
            return value * 100;
        }

    }
    else if(measure_1 == ARIE_HA){
        if(measure_2 == ARIE_HA){
            return value;
        }
        else if(measure_2 == ARIE_METRI){
            return value * 10000;
        }
        else if(measure_2 == ARIE_CENTIMETRI){
            return value * 100000000;
        }
        else if(measure_2 == ARIE_KILOMETRI){
            return value / 100;
        }
        else if( measure_2 == ARIE_MILIMETRI){
            return value * 10000000000;
        }
    }
    else if(measure_1 == ARIE_MILIMETRI){
        if(measure_2 == ARIE_MILIMETRI){
            return value;
        }
        else if( measure_2 == ARIE_METRI){
            return value / 1000000;
        }
        else if( measure_2 == ARIE_KILOMETRI){
            return value / 1000000000000;

        }
        else if( measure_2 == ARIE_CENTIMETRI) {
            return value / 100;
        }
        else if(measure_2 == ARIE_HA){
                return value * 10000000000;
    }
    }
    return -1;
   }
    else if (option == VOLUM){
        if(measure_1 == VOLUM_METRI){
            if(measure_2 == VOLUM_METRI){
                return value;
            }
            else if(measure_2 == VOLUM_LITRI){
                return value * 1000;
            }
            else if (measure_2 == VOLUM_CENTIMETRI){
                return value * 1000000;
            }
            else if (measure_2 == VOLUM_DECILITRI){
                return value * 10000;
            }
            else if (measure_2 == VOLUM_DECIMETRI){
                return value * 1000;

            }
            else if (measure_2 == VOLUM_MILILITRI){
                return value * 1000000;
            }

        }
        else if (measure_1 == VOLUM_CENTIMETRI){
                if(measure_2 == VOLUM_CENTIMETRI){
                    return value;
                }
                else if( measure_2 == VOLUM_METRI){
                    return value / 1000000;

                }
                else if( measure_2 == VOLUM_DECIMETRI){
                    return value / 1000;
                }
                else if(measure_2 == VOLUM_LITRI){
                    return value / 1000;
                }
                else if ( measure_2 == VOLUM_DECILITRI){
                    return value / 100;
                }
                else if (measure_2 == VOLUM_MILILITRI){
                    return value;
                }

        }
        else if (measure_1 == VOLUM_DECIMETRI){
                if(measure_2 == VOLUM_DECIMETRI){
                    return value;
                }
                else if( measure_2 == VOLUM_METRI){
                    return value / 1000 ;

                }
                else if( measure_2 == VOLUM_CENTIMETRI){
                    return value * 1000;
                }
                else if(measure_2 == VOLUM_LITRI){
                    return value ;
                }
                else if ( measure_2 == VOLUM_DECILITRI){
                    return value * 10;
                }
                else if (measure_2 == VOLUM_MILILITRI){
                    return value * 1000;
                }

        }
        else if (measure_1 == VOLUM_LITRI){
            if(measure_2 == VOLUM_LITRI){
                return value;
            }
            else if(measure_2 == VOLUM_METRI){
                return value / 1000;
            }
            else if( measure_2 == VOLUM_CENTIMETRI){
                return value * 1000;
            }
            else if(measure_2 == VOLUM_DECIMETRI){
                return value;
            }
            else if(measure_2 == VOLUM_MILILITRI){
                return value * 1000;
            }
            else if(measure_2 == VOLUM_DECILITRI){
                return value * 10;
            }
        }
        else if(measure_1 == VOLUM_MILILITRI){
            if(measure_2 == VOLUM_MILILITRI){
                return value;
            }
            else if(measure_2 == VOLUM_METRI){
                return value / 1000000;
            }
            else if(measure_2 == VOLUM_CENTIMETRI){
                return value;
            }
            else if(measure_2 == VOLUM_DECIMETRI){
                return value / 1000;
            }
            else if(measure_2 == VOLUM_LITRI) {
                return value / 1000;
            }
            else if(measure_2 == VOLUM_DECILITRI){
                return value / 100;
            }
        }
        else if(measure_1 == VOLUM_DECILITRI){
            if(measure_2 == VOLUM_DECILITRI){
                return value;
            }
            else if(measure_2 == VOLUM_METRI){
                return value / 10000;
            }
            else if(measure_2 == VOLUM_CENTIMETRI){
                return value * 100;
            }
            else if( measure_2 == VOLUM_DECIMETRI){
                return value / 10;
            }
            else if( measure_2 == VOLUM_LITRI){
                return value / 10;
            }
            else if( measure_2 == VOLUM_MILILITRI){
                return value * 100;
            }
        }
        return -1;
    }
        else if(option == TIMP){
            if(measure_1 == TIMP_SECUNDA){
                if(measure_2 == TIMP_SECUNDA){
                    return value;
                }
                else if( measure_2 == TIMP_MINUTE){
                    return value / 60;
                }
                else if (measure_2 == TIMP_ORA){
                    return value / 3600;
                }
                else if(measure_2 == TIMP_DECISECUNDA){
                    return value * 10;
                }
                else if( measure_2 == TIMP_CENTISECUNDA){
                    return value * 100;
                }
            }
            else if(measure_1 == TIMP_MINUTE){
                if(measure_2 == TIMP_MINUTE){
                    return value;
                }
                else if(measure_2 == TIMP_SECUNDA){
                    return value * 60;
                }
                else if(measure_2 == TIMP_ORA){
                    return value / 60;
                }
                else if(measure_2 == TIMP_DECISECUNDA){
                    return value * 600;
                }
                else if( measure_2 == TIMP_CENTISECUNDA){
                    return value * 6000;
                }
            }
             else if(measure_1 == TIMP_ORA){
                if(measure_2 == TIMP_ORA){
                    return value;
                }
                else if(measure_2 == TIMP_MINUTE){
                    return value * 60;
                }
                else if(measure_2 == TIMP_SECUNDA){
                    return value * 3600;
                }
                else if(measure_2 == TIMP_DECISECUNDA){
                    return value * 36000;
                }
                else if( measure_2 == TIMP_CENTISECUNDA){
                    return value * 360000;
                }
            }
             else if(measure_1 == TIMP_DECISECUNDA){
                if(measure_2 == TIMP_DECISECUNDA){
                    return value;
                }
                else if(measure_2 == TIMP_SECUNDA){
                    return value / 10;
                }
                else if(measure_2 == TIMP_ORA){
                    return value / 36000;
                }
                else if(measure_2 == TIMP_MINUTE){
                    return value / 600;
                }
                else if( measure_2 == TIMP_CENTISECUNDA){
                    return value * 10;
                }
            }
             else if(measure_1 == TIMP_CENTISECUNDA){
                if(measure_2 == TIMP_CENTISECUNDA){
                    return value;
                }
                else if(measure_2 == TIMP_SECUNDA){
                    return value / 100 ;
                }
                else if(measure_2 == TIMP_MINUTE){
                    return value / 6000;
                }
                else if(measure_2 == TIMP_ORA){
                    return value / 360000 ;
                }
                else if( measure_2 == TIMP_DECISECUNDA){
                    return value / 10;
                }
            }
            return -1;
        }
        else if(option == TEMPERATURA){
            if(measure_1 == TEMPERATURA_CELSIUS){
                if(measure_2 == TEMPERATURA_CELSIUS){
                    return value;
                }
                else if(measure_2 == TEMPERATURA_Fahrenheit){
                    return value * 9/5 +32;
                }
                else if(measure_2 == TEMPERATURA_KELVIN){
                    return value + 273.15;
                }
                else if(measure_2 == TEMPERATURA_RANKINE){
                    return (value + 273.15) * 9/5;
                }
            }
            if(measure_1 == TEMPERATURA_Fahrenheit){
                if(measure_2 == TEMPERATURA_Fahrenheit){
                    return value;
                }
                else if(measure_2 == TEMPERATURA_CELSIUS){
                    return (value - 32) * 5/9;
                }
                else if(measure_2 == TEMPERATURA_KELVIN){
                    return (value + 459.67) * 5/9;
                }
                else if(measure_2 == TEMPERATURA_RANKINE){
                    return value + 459.67;
                }
            }
            if(measure_1 == TEMPERATURA_KELVIN){
                if(measure_2 == TEMPERATURA_KELVIN){
                    return value;
                }
                else if(measure_2 == TEMPERATURA_CELSIUS){
                    return value - 273.15;
                }
                else if(measure_2 == TEMPERATURA_Fahrenheit){
                    return value * 9/5 - 459.67;
                }
                else if(measure_2 == TEMPERATURA_RANKINE){
                    return value * 9/5;
                }
            }
            if(measure_1 == TEMPERATURA_RANKINE){
                if(measure_2 == TEMPERATURA_RANKINE){
                    return value;
                }
                else if(measure_2 == TEMPERATURA_CELSIUS){
                    return (value- 491.67) * 5/9;
                }
                else if(measure_2 == TEMPERATURA_Fahrenheit){
                    return value - 459.67;
                }
                else if(measure_2 == TEMPERATURA_KELVIN){
                    return value * 5/9;
                }
            }
            return -1;

        }
        else if(option == MASA){
            if(measure_1 == MASA_GRAME){
               if(measure_2 == MASA_GRAME){
                    return value;
            }
            else if(measure_2 == MASA_KILOGRAME){
                return value / 1000;
            }
            else if(measure_2 == MASA_MILIGRAME){
                return value * 1000;
            }
            else if(measure_2 == MASA_TONE){
                return value / 1000000;
            }
          }
           if(measure_1 == MASA_KILOGRAME){
               if(measure_2 == MASA_KILOGRAME){
                    return value;
            }
            else if(measure_2 == MASA_GRAME){
                return value * 1000;
            }
            else if(measure_2 == MASA_MILIGRAME){
                return value * 1000000;
            }
            else if(measure_2 == MASA_TONE){
                return value / 1000;
            }
          }
          else if(measure_1 == MASA_MILIGRAME){
               if(measure_2 == MASA_MILIGRAME){
                    return value;
            }
            else if(measure_2 == MASA_GRAME){
                return value / 1000;
            }
            else if(measure_2 == MASA_KILOGRAME){
                return value / 1000000;
            }
            else if(measure_2 == MASA_TONE){
                return value;
            }
          }
          else if(measure_1 == MASA_TONE){
               if(measure_2 == MASA_TONE){
                    return value;
            }
            else if(measure_2 == MASA_GRAME){
                return value * 1000000;
            }
            else if(measure_2 == MASA_KILOGRAME){
                return value * 1000;
            }
            else if(measure_2 == MASA_MILIGRAME){
                return value * 1000000000;
            }
          }
          return -1;
        }
        else if (option == PRESIUNE) {
            if(measure_1 == PRESIUNE_BAR){
                if(measure_2 == PRESIUNE_BAR){
                    return value;
                }
                else if(measure_2 == PRESIUNE_PSI){
                    return value * 14.5038;
                }
            }
            else if(measure_1 == PRESIUNE_PSI){
                if(measure_2 == PRESIUNE_PSI){
                    return value;
                }
                else if(measure_2 == PRESIUNE_BAR){
                    return value * 0.0689476;
                }
            }
            return -1;
        }
        else if(option == VITEZA){
            if(measure_1 == VITEZA_KMH){
                if(measure_2 == VITEZA_KMH){
                    return value;
                }
                else if(measure_2 == VITEZA_MS){
                    return (value * 1000) / 3600;
                }
                else if(measure_2 == VITEZA_MPH){
                    return value * 0.621371;
                }
            }
            else if(measure_1 == VITEZA_MS){
                if(measure_2 == VITEZA_MS){
                    return value;
                }
                else if(measure_2 == VITEZA_KMH){
                    return (value * 3600) / 1000;
                }
                else if(measure_2 ==  VITEZA_MPH) {
                    return value / 0.44704;
                }
            }
            else if (measure_1 == VITEZA_MPH){
                if(measure_2 == VITEZA_MPH){
                    return value;
                }
                else if(measure_2 == VITEZA_KMH){
                    return value * 1.609344;
                }
                else if(measure_2 == VITEZA_MS){
                    return value * 0.44704;
                }
            }
            return -1;

        }
        else if(option == ENERGIE){
            if(measure_1 == ENERGIE_J){
                if(measure_2 == ENERGIE_J){
                    return value;
                }
                else if(measure_2 == ENERGIE_KJ){
                    return value / 1000;
                }
                else if(measure_2 == ENERGIE_WS){
                    return value;
                }

            }
            else if(measure_1 == ENERGIE_KJ){
                if(measure_2 == ENERGIE_KJ){
                    return value;
                }
                else if(measure_2 == ENERGIE_J){
                    return value * 1000;
                }
                else if(measure_2 == ENERGIE_WS){
                    return value * 1000;
                }

            }
            else if(measure_1 == ENERGIE_WS){
                if(measure_2 == ENERGIE_WS){
                    return value;
                }
                else if(measure_2 == ENERGIE_J){
                    return value;
                }
                else if(measure_2 == ENERGIE_KJ){
                    return value / 1000;
                }
            }
            return -1;

        }

        else if(option == DENSITATE){
            if(measure_1 == DENSITATE_KGM){
                if(measure_2 == DENSITATE_KGM){
                    return value;
                }
                else if(measure_2 == DENSITATE_KGL){
                   return  value / 1000;
                }
                else if(measure_2 == DENSITATE_GM){
                    return value * 1000;
                }
                else if(measure_2 == DENSITATE_GL){
                    return value;
                }
            }
            if(measure_1 == DENSITATE_GM){
                if(measure_2 == DENSITATE_GM){
                    return value;
                }
                else if(measure_2 == DENSITATE_KGM){
                   return  value / 1000;
                }
                else if(measure_2 == DENSITATE_KGL){
                    return value / 1000000;
                }
                else if(measure_2 == DENSITATE_GL){
                    return value / 1000;
                }
            }
            if(measure_1 == DENSITATE_KGL){
                if(measure_2 == DENSITATE_KGL){
                    return value;
                }
                else if(measure_2 == DENSITATE_GM){
                   return  value * 1000000;
                }
                else if(measure_2 == DENSITATE_KGM){
                    return value * 1000;
                }
                else if(measure_2 == DENSITATE_GL){
                    return value * 1000;
                }
            }
            if(measure_1 == DENSITATE_GL){
                if(measure_2 == DENSITATE_GL){
                    return value;
                }
                else if(measure_2 == DENSITATE_KGL){
                   return  value / 1000;
                }
                else if(measure_2 == DENSITATE_GM){
                    return value * 1000;
                }
                else if(measure_2 == DENSITATE_KGM){
                    return value;
                }
            }
            return -1;
        }
        else if(option == CONSUMCOMBUSTIBIL){
            if(measure_1 == CONSUMCOMBUSTIBIL_L100km){
                if(measure_2 ==CONSUMCOMBUSTIBIL_L100km){
                    return value;
                }
                else if(measure_2 == CONSUMCOMBUSTIBIL_KML){
                    return 100 / value;
                }
                else if (measure_2 == CONSUMCOMBUSTIBIL_MILEGALON){
                    return 282.4809363 / value;
                }
            }
            else if(measure_1 == CONSUMCOMBUSTIBIL_KML){
                if(measure_2 == CONSUMCOMBUSTIBIL_KML){
                    return value;
                }
                else if(measure_2 == CONSUMCOMBUSTIBIL_L100km){
                    return 100 / value;
                }
                else if(measure_2 == CONSUMCOMBUSTIBIL_MILEGALON){
                    return value * 2.8248094;
                }
            }
            else if(measure_1 == CONSUMCOMBUSTIBIL_MILEGALON){
                if(measure_2 == CONSUMCOMBUSTIBIL_MILEGALON){
                    return value;
                }
                else if(measure_2 == CONSUMCOMBUSTIBIL_L100km){
                    return 282.4809363 / value;
                }
                else if(measure_2 == CONSUMCOMBUSTIBIL_KML){
                    return value * 0.3540062;
                }
            }
            return -1;
        }

    return -1;
}



int main()

{
    std::cout.precision(15);
    print_menu();

    while (true) {
        int option = get_user_option();
        int result = print_user_option_measurements(option);

        if (result == -1) {
            break;
        }
        else if (result == 0) {
            print_menu();

        }
        else if (result == 1) {
            int measure_1 = get_user_measure();
            int measure_2 = get_user_measure();
            double value = get_user_value();
            double result = resolve_equation(option, measure_1, measure_2, value);
            if (result == -1) {
                cout << "\n\t\tOptiune invalida! Incercati din nou!\n" << endl;
                print_menu();
                continue;
            }

            cout << "\t\tRezultat: " << value << " " << get_measure_string(option, measure_1) << " = " << result << " " <<get_measure_string(option, measure_2) << " " << endl;
            cout << endl;
        }
    }

    return 0;
}
