#include <stdio.h>
#include <stdlib.h>

void space(int, int);

int main() {
	int matrix[100][100];
	int m;
	int n;
	scanf("%d %d", &m, &n);
	int mix = ((m >= n) ? n : m);
	int opration = 2 * mix - 1 + (m > n);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &matrix[i][j]);
		}
	}
	int counter = 0;
	for (int i = 1; i <= opration; i++) {
		switch (i % 4) {
		case 1:
			for (int a = (i / 4); a < (n - i / 4); a++) {
				if (counter > m * n) {
					break;
				}
				printf("%d", matrix[i / 4][a]); counter++;
				space(counter, m * n);
			} break;
		case 2:
			for (int a = (i / 4 + 1); a < (m - i / 4); a++) {
				if (counter > m * n) {
					break;
				}
				printf("%d", matrix[a][n - i / 4 - 1]); counter++;
				space(counter, m * n);
			} break;
		case 3:
			for (int a = (i / 4 + 1); a < (n - i / 4); a++) {
				if (counter > m * n) {
					break;
				}
				printf("%d", matrix[m - i / 4 - 1][n - a - 1]); counter++;
				space(counter, m * n);
			} break;
		case 0:
			for (int a = (i / 4); a < (m - i / 4 ); a++) {
				if (counter > m * n) {
					break;
				}
				printf("%d", matrix[m - a - 1][i / 4 - 1]); counter++;
				space(counter, m * n);
			} break;
			if (m % 2 == 1 && counter == m * n - 1) {
				printf("%d", matrix[(m - 1) / 2][n - (m + 1) / 2]);
				break;
			}
		}
	}
	return 0;
}
void space(int a, int b) {
	if (a != b) {
		printf(" ");
	}
}