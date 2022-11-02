/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 20:07:41 by kbenjell          #+#    #+#             */
/*   Updated: 2022/11/02 20:57:53 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
typedef struct a_list
{
	void			*content;
	struct a_list	*next;

}					t_list;

int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
size_t				ft_strlen(const char *s);
//int					ft_memset(int c);
//int					ft_bzero(int c);
//int					ft_memcpy(int c);
//int					ft_memove(int c);
//int					ft_strlcpy(int c);
//int					ft_strlcat(int c);
//int					ft_toupper(int c);
//int					ft_tolower(int c);
//int					ft_strchr(int c);
//int					ft_strrch(int c);
//int					ft_strncmp(int c);
//int					ft_memchr(int c);
//int					ft_strnstr(int c);
//int					ft_atoi(int c);
//int					ft_calloc(int c);
//int					ft_strdup(int c);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
//int					ft_strtrim(int c);
//int					ft_split(int c);
//int					ft_itoa(int c);
//int					ft_strmapi(int c);
//int					ft_striteri(int c);
//int					ft_putchar_fd(int c);
//int					ft_putstr_fd(int c);
//int					ft_putnbr_fd(int c);
//int					ft_lstnew(int c);
//int					ft_lstadd_front(int c);
//int					ft_lstsize(int c);
//int					ft_lstlast(int c);
//int					ft_lstadd_back(int c);
//int					ft_lstdelone(int c);
//int					ft_lstclear(int c);
//int					ft_lstiter(int c);
//int					ft_lstmap(int c);
