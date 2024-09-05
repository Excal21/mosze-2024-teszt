#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //Itt nem hiányzik egy alsó vonal
    std::cout << '1-100 ertekek duplazasa' //Itt aposztrof helyett idézőjel kell
    for (int i = 0;) //itt hiányos a ciklusfeltétel
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) //itt a ciklusfeltétel hibás
    {
        std::cout << "Ertek:" //Itt hiányzik egy pontosvessző és nem ír ki semmit
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++) //Itt a vessző helyett pontosvessző kell a for feltételén belül
    {
        atlag += b[i] //Itt hiányzik egy pontosvessző
    }
    atlag /= N_ELEMENTS; //a változó int lesz, viszont átlagnak double vagy float kellene
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
