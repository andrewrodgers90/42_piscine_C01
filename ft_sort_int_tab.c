void    ft_swap(int *a, int *b)
{
    int     temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void    ft_sort_int_tab(int *tab, int size)
{
    int     i;
    int     j;

    i = 0;
    while (i < size - 1)
    {
        j = i + 1;
        while (j < size)
        {
            if (tab[i] > tab[j])
                ft_swap(&tab[i], &tab[j]);
            j++;
        }
        i++;
    }
}
