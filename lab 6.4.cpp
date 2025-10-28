  /*exp 6.4. WAP that reads two matrices A (m x n) and B (p x q) and computes the product A and B. Read matrix A and matrix B in 
row major order respectively. Print both the input matrices and resultant matrix with suitable headings and output should be 
in matrix format only. Program must check the compatibility of orders of the matrices for multiplication. Report appropriate 
message in case of incompatibility*/
 #include <stdio.h>
 #define MAX_SIZE 10
 int main() {
 int A[MAX_SIZE][MAX_SIZE], B[MAX_SIZE][MAX_SIZE], C[MAX_SIZE][MAX_SIZE];
 int m, n, p, q;
 int i, j, k;
printf("Name Ankit Bhandari\nSap Id: 590028085\n");
 printf("Enter number of rows and columns for Matrix A (m n): ");
 scanf("%d %d", &m, &n);
 printf("Enter elements of Matrix A in row major order:\n");
 for (i = 0; i < m; i++) {
 for (j = 0; j < n; j++) {
 scanf("%d", &A[i][j]);
 }
 }
 printf("Enter number of rows and columns for Matrix B (p q): ");
 scanf("%d %d", &p, &q);
 printf("Enter elements of Matrix B in row major order:\n");
 for (i = 0; i < p; i++) {
 for (j = 0; j < q; j++) {
 scanf("%d", &B[i][j]);
 }
 }
 if (n != p) {
 printf("Matrix multiplication not possible. Number of columns in A must be equal to number of rows in B.\n");
 return 1;
 }
for (i = 0; i < m; i++) {
 for (j = 0; j < q; j++) {
 C[i][j] = 0;
 }
 }
 for (i = 0; i < m; i++) {
 for (j = 0; j < q; j++) {
 for (k = 0; k < n; k++) {
 C[i][j] += A[i][k] * B[k][j];
 }
 }
 }
 printf("Matrix A:\n");
 for (i = 0; i < m; i++) {
 for (j = 0; j < n; j++) {
 printf("%d ", A[i][j]);
 }
 printf("\n");
 }
 printf("Matrix B:\n");
 for (i = 0; i < p; i++) {
 for (j = 0; j < q; j++) {
 printf("%d ", B[i][j]);
}
 printf("\n");
 }
 printf("Resultant Matrix C (A x B):\n");
 for (i = 0; i < m; i++) {
 for (j = 0; j < q; j++) {
 printf("%d ", C[i][j]);
 }
 printf("\n");
 }   
return 0;
 }
