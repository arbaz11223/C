Sum is %d \n", sum(7));

    return 0;
}

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }

    int sumNm1 = sum(n - 1);
    int sumN = factNm1 * n;
    return sumN;
}
