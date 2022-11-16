/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:13:08 by mflury            #+#    #+#             */
/*   Updated: 2022/11/16 19:38:54 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	front;
	size_t	rear;
	char	*str;

	str = 0;
	if (s1 != 0 && set != 0)
	{
		front = 0;
		rear = ft_strlen(s1);
		while (s1[front] && ft_strchr(set, s1[front]))
			front++;
		while (s1[rear - 1] && ft_strchr(set, s1[rear - 1]) && rear > front)
			rear--;
		str = (char *)malloc(sizeof(char) * (rear - front + 1));
		if (!str)
			return (NULL);
		if (str)
			ft_strlcpy(str, &s1[front], rear - front + 1);
	}
	return (str);
}

/*
mflury@c1r17s3 libft % paco strtrim
╔══════════════════════════════════════════════════════════════════════════════╗
║                Welcome to Francinette, a 42 tester framework!                ║
╚═══════════════════════╦══════════════════════════════╦═══════════════════════╝
                        ║             libft            ║
                        ╚══════════════════════════════╝
✔ Preparing framework
✔ Executing: norminette
✔ Executing: make fclean all (no bonus)
ℹ Executing: libft-war-machine (https://github.com/y3ll0w42/libft-war-machine)

FUNCTION         TESTS                RESULT
ft_strtrim       ✓✓✓✓✓                OK

✔ Compiling tests: libftTester (https://github.com/Tripouille/libftTester)
ℹ Testing:
ft_strtrim      : 1.OK 2.MOK 3.OK 4.MOK 5.OK 6.MOK 7.OK 8.MOK 9.OK 10.MOK 11.OK 12.MOK 13.OK 14.MOK 15.OK 16.MOK 

✔ Compiling tests: libft-unit-test (https://github.com/alelievr/libft-unit-test)
ℹ Testing:
ft_strtrim      : [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] [OK] 

✔ Compiling tests: fsoares (my own)
ℹ Testing:
ft_strtrim      : 1.KO Abort

Errors found:
For ft_strtrim, in /Users/mflury/francinette/tests/libft/fsoares/test_strtrim.c:

Error in test 1: ft_strtrim("", ""): Memory problems!
     in sigabort utils.c:58:1
     in ft_strtrim ft_strtrim.c:28:10
     in single_test_strtrim test_strtrim.c:7:2
     in test_strtrim test_strtrim.c:12:6
     in main test_strtrim.c:25:2

=================================================================
==54923==ERROR: AddressSanitizer: global-buffer-overflow on address 0x00010700bdff at pc 
0x00010700a000 bp 0x7ffee8bff680 sp 0x7ffee8bff678
READ of size 1 at 0x00010700bdff thread T0
    #0 0x107009fff in ft_strtrim ft_strtrim.c:28
    #1 0x107003956 in single_test_strtrim test_strtrim.c:7
    #2 0x107003a11 in test_strtrim test_strtrim.c:12
    #3 0x107003c5d in main test_strtrim.c:25
    #4 0x7fff6936fcc8 in start+0x0 (libdyld.dylib:x86_64+0x1acc8)

0x00010700bdff is located 60 bytes to the right of global variable '<string literal>' 
defined in 'utils/utils.c:116:24' (0x10700bdc0) of size 3
  '<string literal>' is ascii string '%c'
0x00010700bdff is located 1 bytes to the left of global variable '<string literal>' 
defined in 'test_strtrim.c:12:35' (0x10700be00) of size 1
  '<string literal>' is ascii string ''
SUMMARY: AddressSanitizer: global-buffer-overflow ft_strtrim.c:28 in ft_strtrim

*/