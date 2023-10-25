/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlegendr <tlegendr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:08:06 by tlegendr          #+#    #+#             */
/*   Updated: 2023/10/25 14:15:54 by tlegendr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

int		ft_isascii(int character);
void	ft_bzero(void *s, size_t n);
int		ft_isalnum(int character);
int		ft_isalpha(int character);
int		ft_isdigit(int character);
int		ft_isprint(int character);
void	*ft_memcpy( void *destination, const void *source, size_t size );
void	*ft_memmove(void *destination, const void *source, size_t size);
void	*ft_memset(void *pointer, int value, size_t count);
int		ft_strlcpy(char *dst, const char *src, size_t size);
int		ft_strlen(const char *string);
int		ft_strlcat(char *dst, const char *src, size_t size);
int		ft_toupper(int character);
int		ft_tolower(int character);
char	*ft_strchr(const char *string, int searchedChar);
char	*ft_strrchr(const char *string, int searchedChar);
int 	ft_strncmp( const char * first, const char * second, size_t length );
void 	*ft_memchr( const void * memoryBlock, int searchedChar, size_t size );
int 	ft_memcmp( const void * pointer1, const void * pointer2, size_t size );
char    *ft_strnstr(const char *big, const char *little, size_t len);
int 	ft_atoi( const char * theString ); 
void    *ft_calloc(size_t elementCount, size_t elementSize);
char    *ft_strdup( const char * source );
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strtrim(char const *s1, char const *set);
char    **ft_split(char const *s, char c);





#endif 
