/* You are given a read only array of n integers from 1 to n.
   Each integer appears exactly once except A which appears twice and B which is missing.
   Return A and B.
   Note: Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?
   Note that in your output A should precede B.

Example:
        Input:[3 1 2 5 3] 
        Output:[3, 4] */

vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int n = A.size();
    long int actualSum = 0;
    long int Sum1ToN = long(n*long(n+1))/2;
    long int Sum1ToN2 = long(n*long(n+1)*long(2*n+1))/6;
    long int actualSumOfSquares = 0;

    for(int i = 0;i<n;i++)
    {
    actualSum += A[i];
    actualSumOfSquares += long(A[i])*long(A[i]);
    }

    long int a_minus_b = actualSum - Sum1ToN;
    long int a2_minus_b2 = actualSumOfSquares - Sum1ToN2;
    long int a_plus_b = a2_minus_b2/a_minus_b;

    long int a = long(a_minus_b +a_plus_b)/2;
    long int b = a_plus_b - a;

    return {a,b};
}
