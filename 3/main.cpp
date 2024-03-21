#include <iostream>
#include <string>
#define MIN 2
#define MAX 5
int ottieni(std::string messaggio);
/// @brief riferimento esercizio 2, rendere la generazione di valori casuale (range 10 a 70)
int main(int argc, char const *argv[])
{
    // genera matrice
    int righe = ottieni("Numero di righe   (2-5): ");
    int colonne = ottieni("Numero di colonne (2-5): ");
    int mx[MAX][MAX];
    // riempi matrice
    srand(time(NULL));
    for (int i = 0; i < righe; i++)
        for (int j = 0; j < colonne; j++)
            mx[i][j]=(rand()%61)+10; // da 10 a 70
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
int ottieni(std::string messaggio)
{
    int x;
    do
    {
        std::cout << messaggio;
        std::cin >> x;
    } while (x < MIN || x > MAX);
    return x;
}