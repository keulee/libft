# Libft (2019)
*42 Libft project*

## MANDATORY PART
```
* Program name : libft.a
* Turn in files *.c, libft.h, Makefile
* Makefile Yes
* External functs. Detailed below
* Libft authorized Non-applicable
* Description Write your own library, containing an extract of important functions for your cursus.
```

#### Technical considerations
+ It is forbidden to use global variables.
+ If you need subfunctions to write a complex function, you should define these subfunctions as static to avoid publishing them with your library. It would be a good habit to do this in your future projects as well.
+ Submit all files in the root of your repository.

### Part 1 - Libc functions
You must re-code the following functions. These function do not need any external functions(man):
```
• memset
• bzero
• memcpy
• memccpy
• memmove
• memchr
• memcmp
• strlen
• strlcpy
• strlcat
• strchr
• strrchr
• strnstr
• strncmp
• atoi
• isalpha
• isdigit
• isalnum
• isascii
• isprint
• toupper
• tolower
• calloc
• strdup
```
### Part 2 - Additional functions
Each functions has its own explanation at the code page.
```
• ft_substr
• ft_strjoin
• ft_strtrim
• ft_split
• ft_itoa
• ft_strmapi
• ft_putchar_fd
• ft_putstr_fd
• ft_putendl_fd
• ft_putnbr_fd
```
## BONUS PART
You’ll use the following structure to represent the elements of your list.<br>
This structure must be added to your libft.h file.<br>
make bonus will add the bonus functions to the libft.a library.
<pre><code>
typedef struct    s_list
{
    void          *content;
    struct s_list *next;
}                 t_list;
• content : The data contained in the element. The void * allows to store any kind of data.
• next : The next element’s address or NULL if it’s the last element.
</code></pre>
The following functions will allow you to easily use your lists.<br>
Each functions has its own explanation at the code page.<br>
```
• ft_lstnew
• ft_lstadd_front
• ft_lstsize
• ft_lstlast
• ft_lstadd_back
• ft_lstdelone
• ft_lstclear
• ft_lstiter
• ft_lstmap
```
