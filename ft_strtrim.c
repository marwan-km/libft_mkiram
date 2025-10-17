#include "libft.h"

static size_t get_start(char const *s1, char const *set)
{
    size_t start;

    start = 0;
    while (s1[start])
    {
        if ((ft_strchr(set, s1[start]) != NULL))
            start++;
        else
            break;
    }
    return (start);
}

static size_t get_end(char const *s1, char const *set)
{
    size_t end;

    end = ft_strlen(s1) - 1;
    while (end > 0)
    {
        if ((ft_strchr(set, s1[end]) != NULL))
            end--;
        else
            break;
    }
    return (end);
}
static char *empty_str(void)
{
    char *new_str;

    new_str = malloc(1);
    if (!new_str)
        return (NULL);
    new_str[0] = '\0';
    return (new_str);
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t start;
    size_t end;
    size_t total_len;
    char *new_str;
    if (!s1 || !set)
        return (NULL);
    if (ft_strlen(s1) == 0)
        return (empty_str());
    start = get_start(s1, set);
    end = get_end(s1, set);
    if (end < start)
        return (empty_str());
    total_len = end - start + 1;
    new_str = malloc((total_len + 1) * sizeof(char));
    if (!new_str)
        return (NULL);
    ft_memcpy(new_str, s1 + start, total_len);
    new_str[total_len] = '\0';
    return (new_str);
}
// int main()
// {
//     char *ptr = "   Hello, World!   ";
//     char *set = " ";
//     char *trimmed = ft_strtrim(ptr, set);
//     printf("'%s'\n", trimmed);
// }
