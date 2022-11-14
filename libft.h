/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 20:07:41 by kbenjell          #+#    #+#             */
/*   Updated: 2022/11/14 17:08:34 by kbenjell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

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
void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);
//int					ft_memcpy(int c);
//int					ft_memove(int c);
//int					ft_strlcpy(int c);
//int					ft_strlcat(int c);
//int					ft_toupper(int c);
//int					ft_tolower(int c);
//int					ft_strchr(int c);
//int					ft_strrch(int c);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
//int					ft_memchr(int c);
char				*ft_strnstr(const char *haystack, const char *needle,
						size_t len);
//int					ft_atoi(int c);
//int					ft_calloc(int c);
//int					ft_strdup(int c);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
char				**ft_split(char const *s, char c);
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
#endif
