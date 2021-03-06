cmake_minimum_required(VERSION 3.6)
project(libft C)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -Werror")

include_directories(.)

set(SOURCE_FILES libft.h ft_atoi.c ft_bzero.c
        ft_isalnum.c
        ft_isalpha.c
        ft_isascii.c
        ft_isdigit.c
        ft_isprint.c
        ft_itoa.c
        ft_lstadd.c
        ft_lstdel.c
        ft_lstdelone.c
        ft_lstiter.c
        ft_lstmap.c
        ft_lstnew.c
        ft_memalloc.c
        ft_memccpy.c
        ft_memchr.c
        ft_memcmp.c
        ft_memcpy.c
        ft_memdel.c
        ft_memmove.c
        ft_memset.c
        ft_putchar.c
        ft_putchar_fd.c
        ft_putendl.c
        ft_putendl_fd.c
        ft_putnbr.c
        ft_putnbr_fd.c
        ft_putstr.c
        ft_putstr_fd.c
        ft_quicksort.c
        ft_str_word_ctr.c
        ft_strcat.c
        ft_strchr.c
        ft_strclr.c
        ft_strcmp.c
        ft_strcpy.c
        ft_strdel.c
        ft_strdup.c
        ft_strequ.c
        ft_striter.c
        ft_striteri.c
        ft_strjoin.c
        ft_strlcat.c
        ft_strlen.c
        ft_strmap.c
        ft_strmapi.c
        ft_strncat.c
        ft_strncmp.c
        ft_strncpy.c
        ft_strnequ.c
        ft_strnew.c
        ft_strnstr.c
        ft_strrchr.c
        ft_strrev.c
        ft_strsplit.c
        ft_strstr.c
        ft_strsub.c
        ft_strtrim.c
        ft_tolower.c
        ft_strwordc.c
        ft_toupper.c ft_realloc.c ft_lstpush_back.c ft_lstby_num.c ft_lstsize.c ft_isnum.c
        ft_putstrc.c
        ft_putstrc_fd.c
        ft_digcount.c
        ft_strlenchr.c
        ft_lstnew_c.c ft_lstdelone_s.c ft_lstadd_back.c ft_lstrevert.c ft_match.c ft_nmatch.c)
add_library(libft STATIC ${SOURCE_FILES})