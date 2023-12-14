/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ededemog <ededemog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:17:21 by ededemog          #+#    #+#             */
/*   Updated: 2023/12/10 15:41:54 by ededemog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>

int		ft_isalnum(int c);

int		ft_isalpha(int c);

int		ft_isascii(int c);

char	*ft_strrchr(const char *str, int searchedChar);

char	*ft_strchr(const char *str, int searchedChar);

int		ft_atoi(const char *str);

int		ft_tolower(int c);

int		ft_toupper(int c);

int		ft_isdigit(int c);

size_t	ft_strlen(const char *str);

void	*ft_memset(void *pointer, int value, size_t count);

void	*ft_memcpy(void *dest, const void *src, size_t size);

void	ft_bzero(void *pointer, size_t count);

//char	*ft_strcpy(char *dest, const char *src);

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

char	*ft_strdup(const char *str);

char	*ft_strcat(char *s1, const char *s2);

char	*ft_strstr(char *haystack, char *needle);

void	ft_putchar_fd(char c, int fd);

void	ft_putstr_fd(char *str, int fd);

void	ft_putendl_fd(char *str, int fd);

void	*ft_memmove(void *dest, const void *src, size_t len);

void	*ft_calloc(size_t count, size_t size);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

void	*ft_memchr(const void *str, int searchedChar, size_t n);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

void	ft_striteri(char *s, void (*f)(unsigned int, char*));

char	*ft_itoa(int n);

char	*ft_strjoin(const char *s1, const char *s2);

char	**ft_split(const char *s, char c);

char	*ft_strtrim(const char *s1, const char *set);

#endif
