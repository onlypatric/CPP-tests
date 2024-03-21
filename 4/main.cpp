#include <iostream>
#include <string>
#define MIN 2
#define MAX 5
void ottieni(std::string messaggio, int &r);
/// @brief riferimento esercizio 3, gestione della dimensione della matrice sotto forma di procedura
int main(int argc, char const *argv[])
{
    // genera matrice
    int righe,colonne;
    ottieni("Numero di righe   (2-5): ", righe);
    ottieni("Numero di colonne (2-5): ", colonne);
    int mx[MAX][MAX];
    // riempi matrice
    for (int i = 0; i < righe; i++)
        for (int j = 0; j < colonne; j++)
            mx[i][j] = (rand() % 61) + 10; // da 10 a 70
    // stampa matrice
    for (int i = 0; i < righe; i++)
    {
        std::cout<<"|";
        for (int j = 0; j < colonne; j++)
        {
            std::cout << mx[i][j] << "\t|";
        }
        std::cout << std::endl;
    }
    return 0; // fine
}
void ottieni(std::string messaggio,int &r)
{
    do
    {
        std::cout << messaggio;
        std::cin >> r;
    } while (r < MIN || r > MAX);
}