/*-------------------------------------------------------
 * Tarea de Analisis de Algoritmos: 11498 - Division of Nlogonia
 * Fecha: 15-02-2016
 * Autor:
 *      A01064215 Rodrigo Reyes Murillo
 */

#include <stdio.h>
int main(int argc, char const *argv[])
{
	int k, n, m, x, y, i;

	scanf("%d", &k);

	while (k != 0) {
		scanf("%d", &n);
		scanf("%d", &m);
		for (i = 0; i < k; i++) {
			scanf("%d", &x);
			scanf("%d", &y);
			if (x < n && y < m) {
				printf("SO\n");
			}
			if (x < n && y > m) {
				printf("NO\n");
			}
			if (x > n && y < m) {
				printf("SE\n");
			}
			if (x > n && y > m) {
				printf("NE\n");
			}
			if (x == n || y == m) {
				printf("divisa\n");
			}
		}
		scanf("%d", &k);
	}
	return 0;
}
