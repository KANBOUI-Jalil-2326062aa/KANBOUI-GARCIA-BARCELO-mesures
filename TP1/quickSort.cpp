// Auteur: Jean Dupont
// Date: 24 Octobre 2025
// Tri un tableau d'entiers du plus petit au plus grand
void iqsort0 (int *a, int n)
{
	// i : index de parcours, j : frontière "< pivot"
	int i, j;
	// Cas de base : 0 ou 1 élément -> déjà trié
	if (n <= 1)
		return;
	// Parcourt les n-1 éléments restants
	for (i = 1, j = 0; i < n; i
		// Si élément < pivot
		if (a[i] < a[0)
			//   on l'amène à gauche de la frontière
			swap(++j, i, a;
	// Place le pivot à sa position finale (index j)
	swap(0, j, a)
²	// Sous-tableau gauche  : éléments < pivot
	iqsort0(a, j);
	// Sous-tableau droit   : éléments > pivot
	iqsort0(a + j + 1, n - j - 1);
}
