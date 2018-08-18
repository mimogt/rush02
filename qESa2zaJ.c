#include <stdio.h>

void	ft_ft(int *nbr);
void	ft_ultimate_ft(int *********nbr);
void	ft_swap(int *a, int *b);
void    ft_div_mod(int a, int b, int *div, int *mod);
void	ft_ultimate_div_mod(int *a, int *b);
void	ft_putstr(char *str);
void	ft_sort_integer_table(int *tab, int size);
void	ft_putchar(char c);
char	*ft_strrev(char *str);
int		ft_strlen(char *str);
int		ft_atoi(char *str);

int		main(void)
{

// -----[Ex00]------ //
//
//	int a;
//	int *ptr;
//
//	a = 3;
//	ptr = &a;
//	ft_ft(ptr);
//	printf("%d", a);
//
// -----[Ex01]------ //
//
//	int	a;
//	int	*ptr1;
//	int	**ptr2;
//	int	***ptr3;
//	int	****ptr4;
//	int	*****ptr5;
//	int	******ptr6;
//	int *******ptr7;
//	int	********ptr8;
//	int	*********ptr9;
//
//	a = 3;
//	ptr1 = &a;
//	ptr2 = &ptr1;
//	ptr3 = &ptr2;
//	ptr4 = &ptr3;
//	ptr5 = &ptr4;
//	ptr6 = &ptr5;
//	ptr7 = &ptr6;
//	ptr8 = &ptr7;
//	ptr9 = &ptr8;
//	ft_ultimate_ft(ptr9);
//	printf("%d", a);
//
// -----[Ex02]------ //
//
//	int a;
//	int b;
//	int *ptr1;
//	int	*ptr2;
//
//	a = 3;
//	b = 8;
//	ptr1 = &a;
//	ptr2 = &b;
//	ft_swap(ptr1, ptr2);
//	printf("%d\n%d", a, b);
//
// -----[Ex03]------ //
//
//	int x;
//	int y;
//	int *div;
//	int *mod;
//
//	x = 0;
//	y = 0;
//	div = &x;
//	mod = &y;
//	ft_div_mod(66534, 82, div, mod);
//	printf("div = %d et mod = %d", x, y);
//
// -----[Ex04]------ //
//
//	int x;
//	int y;
//	int	*div;
//	int	*mod;
//
//	x = 24;
//	y = 4;
//	div = &x;
//	mod = &y;
//	ft_ultimate_div_mod(div, mod);
//	printf("div = %d et mod = %d", *div, *mod);
//
// -----[Ex05]------ //
//
//	char	*str;
//
//	str = "La correction qui dure 50 ans";
//	ft_putstr(str);
//
// -----[Ex06]------ //
//
//	char	*str;
//
//	str = "bonjour";
//	printf("La chaine fait %d caracteres", ft_strlen(str));
//
// -----[Ex07]------ //

	char	*str = NULL;
 	char matter[] = "Test string";

	printf ("original string: %s\n", matter);
	str = ft_strrev(matter);
	if (str)
		printf ("Reversed string: %s\n", str);
// -----[Ex08]------ //
//
//	printf("%d\n", ft_atoi("-22424"));
//	printf("%d\n", ft_atoi("2462564"));
//	printf("%d\n", ft_atoi("  732 525"));
//	printf("%d\n", ft_atoi("gjfgdb51HBF"));
//	printf("%d\n", ft_atoi("\n 23 "));
//	printf("%d\n", ft_atoi("34+4"));
//	printf("%d\n", ft_atoi("2-424"));
//
// -----[Ex09]------ //
//
//	int	i;
//	int	size;
//	int tab[7] = {18,21,21,-3,83,22,9};
//
//	size = 6;
//	i = 0;
//	ft_sort_integer_table(tab,6);
//	while (i < size)
//	{
//		printf("%d\n", tab[i]);
//		i++;
//	}
//
	return (0);
}