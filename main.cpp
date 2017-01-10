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
    LUNGIME_CENTRIMETRI,
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
        else if(measure == LUNGIME_CENTRIMETRI){
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
            else if(measure_2 == LUNGIME_CENTRIMETRI){
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
                else if ( measure_2 == LUNGIME_CENTRIMETRI){
                     return value * 100000;
                }
                else if( measure_2 == LUNGIME_MILIMETRI){
                    return value * 1000000;
                }
                }
        else if(measure_1  ==LUNGIME_CENTRIMETRI){
                if(measure_2 == LUNGIME_CENTRIMETRI){
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
                else if( measure_2 == LUNGIME_CENTRIMETRI){
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
            return value*e-10;
        }
        else if(measure_2 == ARIE_MILIMETRI){
            return value*10;
        }
        else if(measure_2 == ARIE_HA){
            return value*e-8;
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
            return value*3-12;

        }
        else if( measure_2 == ARIE_CENTIMETRI) {
            return value / 100;
        }
        else if(measure_2 == ARIE_HA){
                return value*e-10;
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
            else if (measure_2 == VOLUM_CENTRIMETRI){
                return value * 1000000;
            }
            else if (measure_2 == VOLUM_DECILITRI){
                return value * 10000;
            }
            else if (measure_2 == VOLUM_DECIMETRI){
                return value * 1000;

            }

        }
        else if (measure_1 == VOLUM_CENTRIMETRI){
                if(measure_2 == VOLUM_CENTRIMETRI){
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
                else if ( measure_2 ==  VOLUM_DECILITRI){
                    return value
                }
        }
    }*/
}

int main()
{
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

            cout << "\t\tRezultat: " << value << " " << get_measure_string(option, measure_1) << " = " << resolve_equation(option, measure_1, measure_2, value) << get_measure_string(option, measure_2) << " " << endl;
            cout << endl;
        }
    }

    return 0;
}
