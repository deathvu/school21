void    ft_print_comb2(void)
{
    char a;
    char b;
    char c;
    char d;
    c='0';
    
    while(c<='9')
    {
        d = '0';
        
        while( d <= '9')
        {
            a = '0';
            
            while(a <= '9')
            {
                b = a+1;
                while(b <= '9')
                {
                    ft_putchar(c);
                    ft_putchar(d);
                    ft_putchar(' ');
                    ft_putchar(a);
                    ft_putchar(b);
                    ft_putchar(',');
                    ft_putchar(' ');
                    b++;
                }
                a++;
                
            }
            d++;
        }
        c++;
    }
}
