/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenjell <kbenjell@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 20:07:41 by kbenjell          #+#    #+#             */
/*   Updated: 2022/11/23 10:45:56 by kbenjell         ###   ########.fr       */
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
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
size_t				ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);
int					ft_toupper(int c);
int					ft_tolower(int c);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
char				*ft_strnstr(const char *haystack, const char *needle,
						size_t len);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
int					ft_atoi(const char *str);
void				*ft_calloc(size_t count, size_t size);
//int					ft_strdup(int c);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
char				**ft_split(char const *s, char c);
char				*ft_itoa(int n);
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
