#include <iostream>

using std::cout;
using std::endl;
using std::cin;

using namespace std;

char valeurs[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

int check();
void board();

int main()
{
	int joueurs = 1,i,choix;

	char marqueur;
	do
	{
		board();
		joueurs=(joueurs%2)?1:2;

		cout << "\nJoueur " << joueurs << ", choissisez une case: ";
		cin >> choix;

		marqueur=(joueurs == 1) ? 'X' : 'O';

		if (choix == 1 && valeurs[1] == '1')

			valeurs[1] = marqueur;
		else if (choix == 2 && valeurs[2] == '2')

			valeurs[2] = marqueur;
		else if (choix == 3 && valeurs[3] == '3')

			valeurs[3] = marqueur;
		else if (choix == 4 && valeurs[4] == '4')

			valeurs[4] = marqueur;
		else if (choix == 5 && valeurs[5] == '5')

			valeurs[5] = marqueur;
		else if (choix == 6 && valeurs[6] == '6')

			valeurs[6] = marqueur;
		else if (choix == 7 && valeurs[7] == '7')

			valeurs[7] = marqueur;
		else if (choix == 8 && valeurs[8] == '8')

			valeurs[8] = marqueur;
		else if (choix == 9 && valeurs[9] == '9')

			valeurs[9] = marqueur;
		else
		{
			cout << "Erreur";

			joueurs--;
			cin.ignore();
			cin.get();
		}
		i = check();

		joueurs++;
	}while (i == -1);
	board();
	if (i == 1)

		cout << "==>\aJoueur " << --joueurs << " à gagné ";
	else
		cout << "==>\a Game draw";

	cin.ignore();
	cin.get();
	return 0;
}

// Fonnction de retour pour la fin du jeu
// 1 jeu fini + résult
// -1 jeu en cours
// 0 jeu fini mais aucun résult

int check()
{
	if (valeurs[1] == valeurs[2] && valeurs[2])

		return 1;
	else if (valeurs[4] == valeurs[5] && valeurs[5] == valeurs[6])

		return 1;
	else if (valeurs[7] == valeurs[8] && valeurs[8] == valeurs[9])

		return 1;
	else if (valeurs[1] == valeurs[4] && valeurs[4] == valeurs[7])

		return 1;
	else if (valeurs[2] == valeurs[5] && valeurs[5] == valeurs[8])

		return 1;
	else if (valeurs[3] == valeurs[6] && valeurs[6] == valeurs[9])

		return 1;
	else if (valeurs[1] == valeurs[5] && valeurs[5] == valeurs[9])

		return 1;
	else if (valeurs[3] == valeurs[5] && valeurs[5] == valeurs[7])

		return 1;
	else if (valeurs[1] != '1' && valeurs[2] != '2' && valeurs[3] != '3'
		&& valeurs[4] != '4' && valeurs[5] != '5' && valeurs[6] != '6'
		&& valeurs[7] != '7' && valeurs[8] != '8' && valeurs[9] != '9')

		return 0;
	else
		return -1;
}

// Fonction dessiner le board / mark joueurs

void board()
{
	system("cls");
	cout << "\n\n\tTic Tac Toe\n\n";

	cout << "Joueur 1 (X)  -  Joueur 2 (O)" << endl << endl;
	cout << endl;

	cout << "     |     |     " << endl;
	cout << "  " << valeurs[1] << "  |  " << valeurs[2] << "  |  " << valeurs[3] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << valeurs[4] << "  |  " << valeurs[5] << "  |  " << valeurs[6] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << valeurs[7] << "  |  " << valeurs[8] << "  |  " << valeurs[9] << endl;

	cout << "     |     |     " << endl;
}