/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkiram <mkiram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 19:31:39 by mkiram            #+#    #+#             */
/*   Updated: 2025/10/18 16:53:05 by mkiram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char **free_all(char **arr, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        free(arr[i]);
        i++;
    }
    free(arr);
    return (NULL);
}
static int count_words(const char *s, char c)
{
    size_t i;
    int count_word;

    i = 0;
    count_word = 0;
    while (s[i])
    {
        while (s[i] && s[i] == c)
            i++;
        if (s[i] && s[i] != c)
        {
            count_word++;
            while (s[i] && s[i] != c)
                i++;
        }
    }
    return (count_word);
}

static char *get_word(const char *start, int len)
{
    char *word;

    word = malloc((len + 1) * sizeof(char));
    if (!word)
        return (NULL);
    ft_memcpy(word, start, len);
    word[len] = '\0';
    return (word);
}

char **ft_split(char const *s, char c)
{
    char **new;
    size_t count_word;
    size_t i;
    size_t len;

    if (!s)
        return (NULL);
    count_word = counts_words(s, c);
    new = (char **)malloc((count_word + 1) * sizeof(char *));
    if (!new)
        return (NULL);
    i = 0;
    while (s && i < count_word)
    {
        while (*s && *s == c)
            s++;
        len = 0;
        while (s[len] && s[len] != c)
            len++;
        new[i] = get_word(s, len);
        if (!new[i])
            return (free_all(new, i));
        s += len;
        i++;
    }
    new[count_word] = NULL;
    return (new);
}

// int main()
// {
//  char **result = ft_split("Hello,World,This,is,a,test", ',');
//  for (int i = 0; result[i] != NULL; i++)
//  {
//      printf("%s\n", result[i]);
//      free(result[i]);
//  }
//  free(result);
//  return 0;
// }
