#include "Skaner.h"
#include "Drukarka.h"
#include "Rozdzielczosc.h"
#include "Wielofunkcyjne.h"
#include "Papierozerne.h"
#include "Urzadzenie.h"
#include "Ksero.h"

/*
    Klasa Papierozerne i Skaner dziedziczą po klasie urządzenia
    Klasy Ksero i Drukarka dziedziczą wirtualnie po klasie Papierozerne
    Klasa Wielofunkcyjne dziedziczy wirtualnie po klasach Skaner Drukarka i Ksero 

            Urzadzenia  Rozdzielczosc
               /   \
    Papierozerne   Skaner
        /     \       \
    Drukarka Ksero    /
        \      /     /   
        Wielofunkcyjne
*/