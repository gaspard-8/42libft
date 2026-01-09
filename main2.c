#include "ft_functions/libft.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>

char f(unsigned int i,char c)
{
	return(c + i);
}

void g(unsigned int i, char *s)
{
	(void) i;
	s[0] = s[0] + 1;
}

void h(void *addr)
{
	char *str = (char *) addr;
	int i = 0;
	while(str[i])
	{
		str[i] += 1;
		i++;
	}
}

void del(void *addr)
{
	addr = NULL;
}

int main()
{
	// test substr

/* 	char *str = "Salut la team";
	printf("%s\n", ft_substr(str, 6, 20));
	printf("%s\n", ft_substr(str, 6, 5));
	printf("%s\n", ft_substr(str, 6, (-1)));
	printf("%s\n", ft_substr(str, 6, 1));
	printf("%s\n", ft_substr(str, 10, 10));
 */
	// test strjoin

/* 	char *s1 = "Salut";
	char *s2 = " la team alala";
	printf("%s\n", ft_strjoin(s1, s2));
	printf("%s\n", ft_strjoin(s2, s1));
	printf("%s\n", ft_strjoin("", s2));
	printf("%s\n", ft_strjoin("", "")); */

	// test strtrim

	/* char *s1 = "Salut la team aaaa";
	printf("%s\n", ft_strtrim(s1, "a"));
	printf("%s\n", ft_strtrim(s1, "alm"));
	printf("%s\n", ft_strtrim(s1, " "));
	printf("%s\n", ft_strtrim(s1, "")); */

	// test split

	/* char *test = ",ALL, LO,CA,,, ,Va,BI,EN";
	char sep = ',';
	char **array;
	array = ft_split(test, sep);
	for (int i = 0; i < 7; i++)
	{
		printf("%s\n", array[i]);
	}
	if (array[7] == NULL)
		printf("YAY\n");
	sep = ' ';
	char **array2;
	array2 = ft_split(test, sep);
	for (int i = 0; i < 3; i++)
	{
		printf("%s\n", array2[i]);
	}
	if (array2[3] == NULL)
		printf("YAY"); */

	// test itoa

/* 	char *test = ft_itoa(-2147483648);

	printf("nb ;%s\n", test);
	free(test);
	printf("nb :%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa(2147483648));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(7777));
	printf("%s\n", ft_itoa(-7777)); */

	// test strmpi

/* 	char test[] = "Salut la team";
	char test1[] = "";
	printf("%s\n", ft_strmapi(test, &f));
	printf("%s\n", ft_strmapi(test1, &f));
	if (ft_strmapi(test, f)[13] == 0)
		printf("OK\n"); */

	// test striteri

	/* char test[] = "SAlUtt la TeAm";
	char test1[] = "";
	ft_striteri(test , g);
	ft_striteri(test1 , g);
	printf("%s\n", test);
	printf("%s\n", test1); */

	// ttest putchar_fd

	/* int fd = open("test", O_RDWR);
	char *test = "Salut la team\n";
	for (int i = 0; test[i]; i++)
	{
		ft_putchar_fd(test[i], fd);
	}
	close(fd);
 */

	// test putstr_fd

/* 	int fd = open("test", O_RDWR);
	char *test = "Salut la team\n";
	ft_putstr_fd(test, fd);
	close(fd); */

	// test putendl_fd

	/* int fd = open("test", O_RDWR);
	char *test = "Salut la team";
	ft_putendl_fd(test, fd);
	close(fd); */

	// test putnbr_fd

/* 	int fd = open("test", O_RDWR);
	ft_putnbr_fd(0, fd);
	ft_putchar_fd('\n', fd);
	ft_putnbr_fd(2147483648, fd);
	ft_putchar_fd('\n', fd);
	ft_putnbr_fd( -2147483648, fd);
	ft_putchar_fd('\n', fd);
	ft_putnbr_fd(2147483647, fd);
	ft_putchar_fd('\n', fd);
	ft_putnbr_fd(4, fd);
	ft_putchar_fd('\n', fd);
	ft_putnbr_fd(-432423, fd);
	ft_putchar_fd('\n', fd);
	close(fd); */

	// test lstnew

	/* t_list list = *(ft_lstnew("Salut la team"));
	printf("%s\n", (char *) list.content);
	printf("%p\n", list.next);
	if (list.next == NULL)
		printf("OK\n"); */

	// test ft_lstadd_front

/* 	t_list *list;
	list = malloc(sizeof(t_list *));
	list->content = "la team";
	list->next = NULL;
	t_list *list1;
	list1 = malloc(sizeof(t_list *));
	list1->content = "Salut ";
	ft_lstadd_front(&list, list1);
	printf("%s\n", (char *) list->content);
	printf("%s\n", (char *) (list->next)->content);
	t_list *list2 = NULL;
	ft_lstadd_front(&list2, list1);
	printf("%s\n", (char *) list2->content);
	printf("%p\n", (char *) (list2->next)); */


	// test lstsize

	/* t_list *list;
	list = malloc(sizeof(t_list *));
	list->content = "la team";
	list->next = NULL;
	t_list *list1 = NULL;
	t_list *longlist;
	longlist = malloc(sizeof(t_list *));
	longlist->content = "a";
	longlist->next = NULL;
	for (int i = 0; i < 100; i++)
	{
		t_list *node;
		node = malloc(sizeof(t_list *));
		node->content = "a";
		ft_lstadd_front(&longlist, node);
	}
	printf("%d\n", ft_lstsize(list1));
	printf("%d\n", ft_lstsize(list));
	printf("%d\n", ft_lstsize(longlist)); */

	// test lstlast

	/* t_list *longlist;
	t_list *node;
	longlist = malloc(sizeof(t_list *));
	longlist->content = "b";
	longlist->next = NULL;
	for (int i = 0; i < 100; i++)
	{
		node = malloc(sizeof(t_list *));
		node->content = "a";
		ft_lstadd_front(&longlist, node);
	}
	node = malloc(sizeof(t_list *));
	node->content = "b";
	ft_lstadd_front(&longlist, node);
	printf("%s, %p\n", (char *) ft_lstlast(longlist)->content, ft_lstlast(longlist)->next);
	node = NULL;
	printf(" %p\n",(void *) ft_lstlast(node)); */

	// test lstadd_back

	/* t_list *longlist;
	t_list *node;
	longlist = malloc(sizeof(t_list *));
	longlist->content = "a";
	longlist->next = NULL;
	for (int i = 0; i < 100; i++)
	{
		node = malloc(sizeof(t_list *));
		node->content = "a";
		ft_lstadd_front(&longlist, node);
	}
	node = malloc(sizeof(t_list *));
	node->content = "b";
	ft_lstadd_back(&longlist, node);
	printf("%s, %p\n", (char *) ft_lstlast(longlist)->content, ft_lstlast(longlist)->next);
	t_list *empty = NULL;
	ft_lstadd_back(&empty, node);
	printf("%s, %p\n", (char *) ft_lstlast(empty)->content, ft_lstlast(empty)->next); */

	//test lstdelone USE VALGRIND

	/* t_list *list;
	list = malloc(sizeof(t_list *));
	list->content = "a";
	t_list *node;
	node = malloc(sizeof(t_list *));
	node->content = "b";
	node->next = NULL;
	list->next = node;
	ft_lstdelone(list, &del);
	printf("%s\n", (char *) node->content);
	ft_lstdelone(node, &del); */

	// test ft_lstclear

	/* t_list *node;
	t_list *longlist = malloc(sizeof(t_list *));
	longlist->content = "a";
	longlist->next = NULL;
	for (int i = 0; i < 100; i++)
	{
		node = malloc(sizeof(t_list *));
		node->content = "a";
		ft_lstadd_front(&longlist, node);
	}
	// t_list *cursor = (longlist->next->next->next);
	ft_lstclear(&(longlist->next->next->next), del);
	printf("%p\n", longlist->next->next->next);
	printf("%d\n", ft_lstsize(longlist));
	t_list *test = NULL;
	ft_lstclear(&test, del);
	if (!test)
		printf("NULL OK"); */

	// test ft_lstiter

	/* t_list *longlist;
	t_list *node;
	longlist = malloc(sizeof(t_list *));
	char fin[] = "Fin";
	char debut[] = "Debut";
	char abc[] = "abc";
	char *str;
	longlist->content = fin;
	longlist->next = NULL;
	for (int i = 0; i < 20; i++)
	{
		str = ft_strdup(abc);
		node = malloc(sizeof(t_list *));
		node->content = (void *)str;
		ft_lstadd_front(&longlist, node);
	}
	node = malloc(sizeof(t_list *));
	node->content = debut;
	ft_lstadd_front(&longlist, node);
	ft_lstiter(longlist, h);
	t_list *cursor = longlist;
	for (int i = 0; i < ft_lstsize(longlist); i++)
	{
		printf("list %d; content : %s\n pointer : %p\n", i, (char *) cursor->content, cursor->next);
		cursor = cursor->next;
	}
	printf("%s", abc);
	h(abc);
	printf("%s", abc); */


}
