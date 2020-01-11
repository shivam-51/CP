#define MOD mod;
#define REP(i,n) for (int i = 1; i <= n; i++)
typedef vector<vector<ll> > matrix;
const int K = 2;
ll n,a,b;
// computes A * B
matrix mul(matrix A, matrix B)
{
    matrix C(K+1, vector<ll>(K+1));
    REP(i, K) REP(j, K) REP(k, K)
        C[i][j] = (C[i][j] + A[i][k] * B[k][j]) % MOD;
    return C;
}

// computes A ^ p
matrix pow(matrix A, int p)
{
    if (p == 1)
        return A;
    if (p % 2)
        return mul(A, pow(A, p-1));
    matrix X = pow(A, p/2);
    return mul(X, X);
}

int fib(int N)
{
    vector<ll> F1(K+1);
    F1[1] = a;          // first term
    F1[2] = b;          // second term

    matrix T(K+1, vector<ll>(K+1));
    T[1][1] = 0, T[1][2] = 1;
    T[2][1] = c, T[2][2] = d;

    //  f[n] = d*f[n-1] + c*f[n-2];

    T = pow(T, N-1);

    // the answer is the first row of T . F1
    ll res = 0;
    rep(i,1,K+1)
        res = (res + T[1][i] * F1[i]) % MOD;
    return res;
}