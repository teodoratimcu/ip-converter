#include <iostream>
#include <stdlib.h>
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
            break;
        case VOLUM:
            cout << "\tVolum:" << endl;
            cout << "\t1. m" << endl;
            cout << "\t2. cm" << endl;
            cout << "\t3. dm" << endl;
            cout << "\t4. l" << endl;
            cout << "\t5. dl" << endl;
            cout << "\t6. ml" << endl;
            break;
        case TIMP:
            cout << "\tTimp:" << endl;
            cout << "\t1. s" << endl;
            cout << "\t2. m" << endl;
            cout << "\t3. h" << endl;
            cout << "\t4. ds" << endl;
            cout << "\t5. " << endl;

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
            if (measure_2 == LUNGIME_METRI) {
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
        else if(measure_1  ==LUNGIME_KILOMETRI){
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
        else if(measure_1  ==LUNGIME_MILIMETRI){
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
    }
    /*

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
            return value*10;
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
                return value;
    }
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
                    return value;
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
        }
    }
    */


}

int main()

{   std::cout.precision(9);
    print_menu();

    while (true) {
        int option = get_user_option();
        system("cls");
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

            cout << "\t\tRezultat: " << value << " " << get_measure_string(option, measure_1) << " = " << resolve_equation(option, measure_1, measure_2, value) << get_measure_string(option, measure_2) << " " << endl << std::fixed;
            cout << endl;
        }
    }

    return 0;
}
