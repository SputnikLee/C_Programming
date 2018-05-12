int Power2(int num)
{
    // the function is to calculate power(2)
    int k = 1;
    for (; num>0; --num)
    {
        k *= 2;
    }
    return k;
}


