<h1>0x06. C - More pointers, arrays and strings</h1>
<div
    <p><img src="/images/contents/low_level_programming/projects/happy-clapping.gif" alt="" loading="lazy" style=""></p>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="/rltoken/tkwwPs3MT3JT07FSsmXy-A" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>What are pointers and how to use them</li>
<li>What are arrays and how to use them</li>
<li>What are the differences between pointers and arrays</li>
<li>How to use strings and how to manipulate them</li>
<li>Scope of variables</li>
</ul>

<h3>Copyright - Plagiarism</h3>

<ul>
<li>You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.</li>
<li>You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work. </li>
<li>You are not allowed to publish any content of this project.</li>
<li>Any form of plagiarism is strictly forbidden and will result in removal from the program.</li>
</ul>

<h2>Requirements</h2>

<h3>General</h3>

<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using <code>gcc</code>, using the options <code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project is mandatory</li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
<li>You are not allowed to use global variables</li>
<li>No more than 5 functions per file</li>
<li>You are not allowed to use the standard library. Any use of functions like <code>printf</code>, <code>puts</code>, etc… is forbidden</li>
<li>You are allowed to use <a href="https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c" title="_putchar" target="_blank">_putchar</a></li>
<li>You don’t have to push <code>_putchar.c</code>, we will use our file. If you do it won’t be taken into account</li>
<li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own <code>main.c</code> files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
<li>The prototypes of all your functions and the prototype of the function <code>_putchar</code> should be included in your header file called <code>main.h</code></li>
<li>Don’t forget to push your header file</li>
</ul>

  </div>
  
## Tasks

0. [strcat](./0-strcat.c) : A C function program that concatenates two strings.
	- Prototype: `char *_strcat(char *dest, char *src);`
	- This function appends the src string to the dest string, overwriting the terminating null byte (`\0`) at the end of `dest`, and then adds a terminating null byte.
	- Returns a pointer to the resulting string `dest`.
	- **FYI:** The standard library provides a similar function: `strcat`. Run `man strcat` to learn more.
	- [Read more on strcat here](https://www.holbertonschool.com/coding-resource-strcat-in-c).
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-strcat.c -o 0-strcat`
1. [strncat](./1-strncat.c) : A C function program that concatenates two strings.
	- Prototype: `char *_strncat(char *dest, char *src, int n);`
	- The `_strncat` function is similar to the `_strcat` function, except that
		- it will use at most `n` bytes from `src`; and
		- `src` does not need to be null-terminated if it contains `n` or more bytes
	- Return a pointer to the resulting string `dest`.
	- **FYI:** The standard library provides a similar function: `strncat`. Run `man strncat` to learn more.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-strncat.c -o 1-strncat`
2. [strncpy](./2-strncpy.c) : A C function program that copies a string.
	- Prototype: `char *_strncpy(char *dest, char *src, int n);`
	- Your function should work exactly like `strncpy`.
	- **FYI:**  The standard library provides a similar function: `strncpy`. Run `man strncpy` to learn more.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-strncpy.c -o 2-strncpy`
3. [strcmp](./3-strcmp.c) : A C function program that compares two strings.
	- Prototype: `int _strcmp(char *s1, char *s2);`
	- Your function should work exactly like `strcmp`.
	- **FYI:** The standard library provides a similar function: `strcmp`. Run `man strcmp` to learn more.
	- [Read an example here to understand](https://www.studytonight.com/c/programs/string/strcmp()-function)
		- **Remember:**
			- The `strcmp` returns the following;
				- 0 if `s1` and `s2` are equal
				- Negative integer if the stopping character in `s1` was less than the stopping character in `s2`
				- Positive integer if the stopping character in `s1` was greater than the stopping character in `s2`
			- So when we compare we will only check the difference of the first character found between `s1` and `s2`, break the array iteration and return the difference.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-strcmp.c -o 3-strcmp`
4. [I am a kind of paranoid in reverse. I suspect people of plotting to make me happy](./4-rev_array.c) : A C function program that reverses the content of an array of integers.
	- Prototype: `void reverse_array(int *a, int n);`
	- Where `n` is the number of elements of the array.
	- [Read an example here on how to swap](https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/)
	- `n` is the number of elements in the array [Read here for more information](https://stackoverflow.com/questions/37538/how-do-i-determine-the-size-of-my-array-in-c).
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-rev_array.c -o 4-rev_array`
5. [Always look up](5-string_toupper.c) : A C function program that changes all lowercase letters of a string to uppercase.
	- Prototype: `char *string_toupper(char *);`
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-string_toupper.c -o 5-string_toupper`
6. [Expect the best. Prepare for the worst. Capitalize on what comes](./6-cap_string.c) : A C function program that capitalizes all words of a string.
	- Prototype: `char *cap_string(char *);`
	- Separators of words: space, tabulation, new line, `,`, `;`, `.`, `!`, `?`, `"`, `(`, `)`, `{`, and `}`.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-main.c 6-cap_string.c -o 6-cap`
7. [Mozart composed his music not for the elite, but for everybody](./7-leet.c) : A C function program that encodes a string into [1337](https://en.wikipedia.org/wiki/Leet).
	- Prototype: `char *leet(char *);`
	- You can only use one `if` in your code.
	- You can only use two loops in your code.
	- You are not allowed to use `switch`.
	- You are not allowed to use any ternary operation.
		- Letters `a` and `A` should be replaced by `4`.
		- Letters `e` and `E` should be replaced by `3`.
		- Letters `o` and `O` should be replaced by `0`.
		- Letters `t` and `T` should be replaced by `7`.
		- Letters `l` and `L` should be replaced by `1`.
	- Compile the code this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-main.c 7-leet.c -o 7-1337`
