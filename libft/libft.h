/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/29 16:52:04 by mdarriga          #+#    #+#             */
/*   Updated: 2015/02/13 17:09:53 by mdarriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <dirent.h>

typedef struct		s_list
{
	void			*content;
	size_t			csize;
	struct s_list	*next;
}					t_list;

void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *str, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memdup(const void *src, size_t n);
size_t				ft_strlen(const char *str);
char				*ft_strdup(const char *src);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strncpy(char *dest, const char *src, size_t n);
char				*ft_strcat(char *dest, const char *src);
char				*ft_strncat(char *dest, const char *src, size_t nb);
size_t				ft_strlcat(char *dest, const char *src, size_t size);
char				*ft_strchr(const char *str, int c);
char				*ft_strrchr(const char *str, int c);
char				*ft_strstr(const char *str, const char *to_find);
char				*ft_strnstr(const char *s1, const char *s2, size_t size);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_atoi(const char *str);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_tolower(int c);
int					ft_toupper(int c);

void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char*));
char				*ft_strmap(const char *s, char (*f)(char));
char				*ft_strmapi(const char *s, char (*f)(unsigned int, char));
int					ft_strequ(const char *s1, const char *s2);
int					ft_strnequ(const char *s1, const char *s2, size_t n);
char				*ft_strsub(const char *s, unsigned int start, size_t len);
char				*ft_strjoin(const char *s1, const char *s2);
char				*ft_strskip(char *s1, char c);
char				*ft_strtrim(const char *s);
char				**ft_strsplit(const char *s, char c);
char				*ft_itoa(int n);
char				*ft_itoa_base(int val, int base, int output_size);
void				ft_putchar(char c);
void				ft_putstr(const char *s);
void				ft_putnbr(int n);
void				ft_putnbr_base(int nb, char *base);
void				ft_putendl(const char *s);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(const char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putendl_fd(const char *s, int fd);

t_list				*ft_lstnew(const void *content, size_t csize);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

void				ft_lstaddend(t_list **alst, t_list *new);
t_list				*ft_lstln(void *content, size_t csize);
void				ft_lstshift(t_list **list);
void				ft_lstaddafter(t_list **previous, t_list *new);
void				ft_lstaddby(t_list **alst, t_list *new,
					int (*f)(void *, void *, size_t, size_t));
t_list				*ft_lstlnafter(t_list *lst, void *content, size_t csize);
t_list				*ft_lstlnback(t_list **alst, void *content, size_t csize);
t_list				*ft_lstlnby(t_list **alst, void *content, size_t csize,
					int (*f) (void *, void *, size_t, size_t));
t_list				*ft_lstlnfront(t_list **alst, void *content, size_t csize);
t_list				*ft_lstpushafter(t_list **lst, void *content, size_t csize);
t_list				*ft_lstpushback(t_list **alst, const void *content,
					size_t csize);
t_list				*ft_lstpushby(t_list **alst, void *content, size_t csize,
					int (*f)(void *, void *, size_t, size_t));
t_list				*ft_lstlnpushby(t_list **alst, void *content, size_t csize,
					int (*f)(void *, void *, size_t, size_t));
t_list				*ft_lstlnpushrby(t_list **alst, void *content, size_t csize,
					int (*f)(void *, void *, size_t, size_t));
t_list				*ft_lstpushrby(t_list **alst, void *content, size_t csize,
					int (*f)(void *, void *, size_t, size_t));
void				ft_lstaddrby(t_list **alst, t_list *new,
					int (*f)(void *, void *, size_t, size_t));
void				ft_lstprint(t_list	*lst);
t_list				*ft_lstcpy(t_list	*lst);

char				**tabcpy(char **tab);
int					ft_tablen(char **tab);
void				print_tab(char **tab);

#endif
