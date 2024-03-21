#include <iostream>
#include <string>
#define MIN 2
#define MAX 5
void ottieni(std::string messaggio,int &r);
void riempi(int mx[MAX][MAX], int righe, int colonne);
/// @brief riferimento esercizio 2, gestire l'inserimento di valori tramite procedura
int main(int argc, char const *argv[])
{
    int righe, colonne;
    // ottieni dim. matrice
    ottieni("Numero di righe   (2-5): ", righe);
    ottieni("Numero di colonne (2-5): ", colonne);
    int mx[MAX][MAX];
    riempi(mx, righe, colonne); // riempi matrice
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
void ottieni(std::string messaggio, int &r)
{
    do
    {
        std::cout << messaggio;
        std::cin >> r;
    } while (r < MIN || r > MAX);
}
void riempi(int mx[MAX][MAX], int righe, int colonne)
{
    for (int i = 0; i < righe; i++)
        for (int j = 0; j < colonne; j++)
        {
            std::cout << "Cella [" << i << "," << j << "]";
            std::cin >> mx[i][j];
        }
};