#include <stdio.h>
#include <math.h>

int main() {
    int matrix[100][100];
    int m;
    int n;
    int i,j;
    int x, count;
    scanf("%d %d", &m, &n);
    for (i = 0; i < m; i++) {
    	for (j = 0; j < n; j++) {
    		scanf("%d", &matrix[i][j]);
		}
	}
	x = 0, count = 0;
    if (m == 1) {
        for (i = 0; i < n; i++) {
            printf(i == n - 1 ? "%d" : "%d ", matrix[0][i]);
        }
    } else if (n == 1) {
      	for (i = 0; i < m; i++) {
        	printf(i == m - 1 ? "%d" : "%d ", matrix[i][0]);
        }
    } else {
        while ( m - x > 1 && n - x > 1) {
		for (i = x; i < n - 1 - x; i++) {
            if(++count > m * n){
                break;
            }
			printf("%d ",matrix[x][i]);
		}
		for (i = x; i < m - 1 - x; i++) {
            if(++count > m * n){
                break;
            }
			printf("%d ",matrix[i][n - 1 - x]);  
		}
		for (i = x; i < n - 1 - x; i++) {
            if(++count > m * n){
                break;
            }
			printf("%d ",matrix[m - 1 - x][n - 1 - i]);
		}
		for (i = x; i < m - 1 - x; i++) {
            if(++count > m * n){
                break;
            }
			printf("%d ",matrix[m - 1 - i][x]);
		}
		x++;
		}	
    }
    return 0;
}