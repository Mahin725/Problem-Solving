// Algorithm for Zero Matrix

/**
 * Approach:
 * 1. Create two auxiliary arrays (or vectors):
 *      - zeroRows[] to track which rows need to be zeroed
 *      - zeroCols[] to track which columns need to be zeroed
 *
 * 2. Iterate through the matrix:
 *      - If matrix[i][j] == 0, mark zeroRows[i] = true and zeroCols[j] = true
 *
 * 3. Nullify rows:
 *      - For each row i, if zeroRows[i] is true, set every element in row i to 0
 *
 * 4. Nullify columns:
 *      - For each column j, if zeroCols[j] is true, set every element in column j to 0
 *
 * 5. Done — the matrix is now transformed into the "Zero Matrix".
 *
 * time complexity=> O(n*m)
 * space complexity=> O(n*m)
 *
 * Note:
 * - This is a beginner-friendly algorithm, so it may not be the most optimized version.
 * - Optimization can be done by reducing extra space usage.
 */
