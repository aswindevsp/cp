#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    std::cin >> n >> k;

    // find the prime factorization of n
    std::vector<int> prime_factors;
    for (int i = 2; i * i <= n; ++i)
    {
        while (n % i == 0)
        {
            prime_factors.push_back(i);
            n /= i;
        }
    }
    if (n > 1)
    {
        // n is prime
        prime_factors.push_back(n);
    }

    // find all possible divisors of n by combining
    // all the prime factors in different ways
    std::vector<int> divisors;
    int num_divisors = 1 << prime_factors.size();
    for (int i = 1; i < num_divisors; ++i)
    {
        int divisor = 1;
        for (int j = 0; j < prime_factors.size(); ++j)
        {
            if (i & (1 << j))
            {
                divisor *= prime_factors[j];
            }
        }
        divisors.push_back(divisor);
    }

    // compute the gcd of n and all possible divisors
    std::vector<int> gcds;
    for (int divisor : divisors)
    {
        gcds.push_back(gcd(n, divisor));
    }

    // sort the gcds in ascending order and print the first k
    std::sort(gcds.begin(), gcds.end());
    for (int i = 0; i < k && i < gcds.size(); ++i)
    {
        std::cout << gcds[i] << std::endl;
    }
    if (k > gcds.size())
    {
        std::cout << -1 << std::endl;
    }

    return 0;
}
