int main()
{
        const   char str1[]     = "aa";
        const   char str2[]     = "aaza";

        printf("strncmp: %d ", strncmp(str1, str2, 4));
        printf("ft_strncmp: %d ", ft_strncmp(str1, str2, 4));
}

