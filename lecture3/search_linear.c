int fact2(int n)
{
    int product = 1;
    while( n > 0)
    {
        product *= n;
        n--;
    }
    return product;
}