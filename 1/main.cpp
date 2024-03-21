#include <iostream>
#define MAX_RIGHE 2
#define MAX_COLONNE 4
/// @brief generare una matrice 2x4 senza proc/funz, inserimento manuale
int main(int argc, char const *argv[])
{
    // genera matrice
    int mx[MAX_RIGHE][MAX_COLONNE];
    // riempi matrice
    for(int i = 0; i<MAX_RIGHE; i++)
        for(int j = 0; j<MAX_COLONNE; j++){
            std::cout << "Cella ["<<i<<","<<j<<"]";
            std::cin >> mx[i][j];
        }
    // stampa matrice
    for (int i = 0; i < MAX_RIGHE; i++){
        std::cout<<"|";
        for (int j = 0; j < MAX_COLONNE; j++)
        {
            std::cout << mx[i][j] << "\t|";
        }
        std::cout << std::endl;
    }
    return 0; // fine
}
