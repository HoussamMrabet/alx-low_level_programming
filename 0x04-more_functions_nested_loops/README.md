<h1>0x04. C - More functions, more nested loops</h1>
<div>
    <h2>Resources</h2>

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="/rltoken/aDRkFzUkVysnD94Dpm3w5g" title="Nested while loops" target="_blank">Nested while loops</a> </li>
<li><a href="/rltoken/zf4IZeoe0yFZL2X7_nznQQ" title="C - Functions" target="_blank">C - Functions</a> </li>
<li><a href="/rltoken/iQ87CI4Lf41U_uRh9QsoQA" title="Learning to Program in C (Part 06)" target="_blank">Learning to Program in C (Part 06)</a> (<em>stop at 14:00</em>)</li>
<li><a href="/rltoken/pUXhvD6-xl5BbWyj1AhCEA" title="What is the purpose of a function prototype?" target="_blank">What is the purpose of a function prototype?</a> </li>
<li><a href="/rltoken/IFY075ffrszSJvHqPAa-zQ" title="C - Header Files" target="_blank">C - Header Files</a> (<em>stop before the “Once-Only Headers” paragraph</em>)</li>
</ul>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="/rltoken/Ya6FG69nkA7hRf_WG4E8gQ" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>What are nested loops and how to use them</li>
<li>What is a function and how do you use functions</li>
<li>What is the difference between a declaration and a definition of a function</li>
<li>What is a prototype</li>
<li>Scope of variables</li>
<li>What are the <code>gcc</code> flags <code>-Wall -Werror -pedantic -Wextra -std=gnu89</code></li>
<li>What are header files and how to to use them with <code>#include</code></li>
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

<h2>More Info</h2>

<p>You do not have to understand the call by reference (address), stack, static variables, recursions or arrays, yet.</p>

</div>

## Tasks

- All `*-main.c` files will be located in the [main](./main) directory
- We will be using function prototypes that will be included in our header file called, [main.h](./main.h).

---

<details>
<summary><a href="./0-isupper.c">0. isupper</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/MTRnHM0y/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/0-main.c 0-isupper.c -o 0-isuper`

</details>

<details>
<summary><a href="./1-isdigit.c">1. isdigit</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/j55s6LRD/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/1-main.c 1-isdigit.c -o 1-isdigit`

</details>

<details>
<summary><a href="./2-mul.c">2. Collaboration is multiplication</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/3xjgwqBL/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/2-main.c 2-mul.c -o 2-mul`

</details>

<details>
<summary><a href="./3-print_numbers.c">3. The numbers speak for themselves</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/YS1KbZgB/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/3-main.c 3-print_numbers.c -o 3-print_numbers`

</details>

<details>
<summary><a href="./4-print_most_numbers.c">4. I believe in numbers and signs</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/wvbd08zq/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/4-main.c 4-print_most_numbers.c -o 4-print_most_numbers`

</details>

<details>
<summary><a href="./5-more_numbers.c">5. Numbers constitute the only universal language</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/7hk25mJN/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/5-main.c 5-more_numbers.c -o 5-more_numbers`

</details>

<details>
<summary><a href="./6-print_line.c">6. The shortest distance between two points is a straight line</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/jjk5JvhG/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/6-main.c 6-print_line.c -o 6-lines`

</details>

<details>
<summary><a href="./7-print_diagonal.c">7. I feel like I am diagonally parked in a parallel universe</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/BbyZjvcH/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/7-main.c 7-print_diagonal.c -o 7-diagonals`

</details>

<details>
<summary><a href="./8-print_square.c">8. You are so much sunshine in every square inch</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/N0PZV7CC/image.png' border='0' alt='image'/></a>

- Below is the assembly code of the program with comments.

```asm
   <main>:       endbr64
   <main+4>:     push   rbp						; store base pointer addr on top of the stack
   <main+5>:     mov    rbp,rsp						; make the stack pntr addr to be the new base pntr addr
   <main+8>:     mov    edi,0x2						; moves 2 so as to be passed in the function
   <main+13>:    call   0x55555555519f <print_square>			; calls print_square function
   <main+18>:    mov    edi,0xa						; moves 10 so as to be passed in the function
   <main+23>:    call   0x55555555519f <print_square>			; calls print_square function
   <main+28>:    mov    edi,0x0						; moves 0 so as to be passed in the function
   <main+33>:    call   0x55555555519f <print_square>			; calls print_square function
   <main+38>:    mov    eax,0x0						; clears eax [rax]
   <main+43>:    pop    rbp						; get's back the address of the base pointer [rbp]
   <main+44>:    ret
   <print_square>:       endbr64
   <print_square+4>:     push   rbp					; store base pntr addr on top of the stack
   <print_square+5>:     mov    rbp,rsp					; make the stack pntr addr to be the new base pntr addr
   <print_square+8>:     sub    rsp,0x20				; allocate 20 bytes on the stack
   <print_square+12>:    mov    DWORD PTR [rbp-0x14],edi		; argument value being stored in the stack [rbp-ox14]
   <print_square+15>:    mov    DWORD PTR [rbp-0x8],0x1                 ; first loop, moves 0x1 to the stack [rbp-0x8]
   <print_square+22>:    jmp    0x5555555551e4 <print_square+69>	; jump to [1]
   <print_square+24>:    mov    DWORD PTR [rbp-0x4],0x1			; [2] second loop, moves 0x1 to the stack [rbp-0x4]
   <print_square+31>:    jmp    0x5555555551ce <print_square+47>	; jump to [3]
   <print_square+33>:    mov    edi,0x23				; [4] moves character '#' in hex 0x23 to edi arg1
   <print_square+38>:    call   0x555555555149 <_putchar>		; prints the character with _putchar function
   <print_square+43>:    add    DWORD PTR [rbp-0x4],0x1			; increament [rbp-0x4] by 1
   <print_square+47>:    mov    eax,DWORD PTR [rbp-0x4]			; [3] mov value stored at [rbp-0x4] to eax
   <print_square+50>:    cmp    eax,DWORD PTR [rbp-0x14]		; compare value at eax with value stored in [rbp-0x14]
   <print_square+53>:    jle    0x5555555551c0 <print_square+33>	; if less or equal jump to [4]
   <print_square+55>:    mov    edi,0xa					; moves character '\n' in hex 0xa to edi arg1
   <print_square+60>:    call   0x555555555149 <_putchar>		; prints the character with _putchar function
   <print_square+65>:    add    DWORD PTR [rbp-0x8],0x1			; increament [rbp-0x8] by 1
   <print_square+69>:    mov    eax,DWORD PTR [rbp-0x8]			; [1] mov value stored at [rbp-0x8] to eax
   <print_square+72>:    cmp    eax,DWORD PTR [rbp-0x14]		; compare value at eax with value in [rbp-0x14]
   <print_square+75>:    jle    0x5555555551b7 <print_square+24>	; if less or equal jump to [2]
   <print_square+77>:    nop						; nop sled
   <print_square+78>:    nop						; nop sled
   <print_square+79>:    leave						; leave function
   <print_square+80>:    ret						; return to main function
```

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/8-main.c 8-print_square.c -o 8-squares`

</details>

<details>
<summary><a href="./9-fizz_buzz.c">9. Fizz Buzz</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/wv5WcXNG/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-fizz_buzz.c -o 9-fizz_buzz`

</details>

<details>
<summary><a href="./10-print_triangle.c">10. Triangles</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/SQc0q30s/image.png' border='0' alt='image'/></a>
<a href='https://postimg.cc/QBsJxtBG' target='_blank'><img src='https://i.postimg.cc/8CfK4fN5/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/10-main.c 10-print_triangle.c -o 10-triangles`

</details>

<details>
<summary><a href="./100-prime_factor.c">11. The problem of distinguishing prime numbers from composite numbers and of resolving the latter into their prime factors is known to be one of the most important and useful in arithmetic</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/0yLYxXWC/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-prime_factor.c -o 100-prime_factor -lm`

</details>

<details>
<summary><a href="./101-print_number.c">12. Numbers have life; they're not just symbols on paper</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/kgKjrr4R/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/101-main.c 101-print_number.c -o 101-print_numbers`

</details>
