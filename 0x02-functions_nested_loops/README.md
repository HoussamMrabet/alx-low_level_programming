<h1>0x02. C - Functions, nested loops</h1>
<div>
    <h2>Resources</h2>

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="/rltoken/_4aLZ5nW24njUT2VbSZdQQ" title="Nested while loops" target="_blank">Nested while loops</a> </li>
<li><a href="/rltoken/Vg1zzzrxLhPh71405uggSg" title="C - Functions" target="_blank">C - Functions</a> </li>
<li><a href="/rltoken/jveXtnJII2S0z7a06c7-JA" title="Learning to Program in C (Part 06)" target="_blank">Learning to Program in C (Part 06)</a> (<em>stop at 14:00</em>)</li>
<li><a href="/rltoken/XZ--UJZO76ZoUWNA9bTmbg" title="What is the purpose of a function prototype?" target="_blank">What is the purpose of a function prototype?</a> </li>
<li><a href="/rltoken/AS8JW4ObD5gmyX2mgtqV0A" title="C - Header Files" target="_blank">C - Header Files</a> (<em>stop before the “Once-Only Headers” paragraph</em>)</li>
</ul>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="/rltoken/-ERX2Jh115GIdTUsSixnnA" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

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

<h3>Copyright - Plagiarism</h3>

<ul>
<li>You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.</li>
<li>You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work. </li>
<li>You are not allowed to publish any content of this project.</li>
<li>Any form of plagiarism is strictly forbidden and will result in removal from the program.</li>
</ul>

<h2>More Info</h2>

<p>You do not have to understand the call by reference (address), stack, static variables, recursions or arrays, yet.</p>

</div>

## Tasks

- **Note** for all these challenges we will not be using global variables and any standard library.
- We will be using function prototypes that will be included in our header file called, [main.h](./main.h).
- We are allowed to use the prototype funtion [\_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c).
- All `*-main.c` files will be located in the [main](./main) directory

---

<details>
<summary><a href="./0-putchar.c">0. _putchar</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/N0SpVLPs/image.png' border='0' alt='image'/></a>

- Below is the assembly code of the program with comments.

```asm
<main>: endbr64
<main+4>: push rbp                                  ; \ standard function
<main+5>: mov rbp,rsp                               ; / prologue code
<main+8>: sub rsp,0x20                              ; allocate space for stack array
<main+12>: mov rax,QWORD PTR fs:0x28                ; stack-guard moved to rax
<main+21>: mov QWORD PTR [rbp-0x8],rax              ; stack-guard moved to rbp-0x8
<main+25>: xor eax,eax                              ; zeroing out eax
<main+27>: movabs rax,0x726168637475705f            ; string '_putchar' moved to rax
<main+37>: mov QWORD PTR [rbp-0x11],rax             ; string moved to rbp-0x11
<main+41>: mov BYTE PTR [rbp-0x9],0x0               ; rbp-0x9 = 0
<main+45>: mov DWORD PTR [rbp-0x18],0x0             ; rbp-0x18 (ch) = 0
<main+52>: jmp 0x5555555551e0 <main+78>             ; jump
<main+54>: mov eax,DWORD PTR [rbp-0x18]             ; move rbp-0x18 (ch) to eax
<main+57>: cdqe                                     ; rax = eax (ch)
<main+59>: movzx eax,BYTE PTR [rbp+rax*1-0x11]      ; eax = rbp-0x11[ch]
<main+64>: movsx eax,al                             ; mov 8-bit str chr value to eax
<main+67>: mov edi,eax                              ; mov str chr to edi (arg1)
<main+69>: call 0x555555555169 <_putchar>           ; print character
<main+74>: add DWORD PTR [rbp-0x18],0x1             ; increament rbp-0x18 by 1
<main+78>: cmp DWORD PTR [rbp-0x18],0x8             ; is ch <= 8
<main+82>: jle 0x5555555551c8 <main+54>             ; jump
<main+84>: mov edi,0xa                              ; mov char '\n' to edi (arg1)
<main+89>: call 0x555555555169 <_putchar>           ; print new line char
<main+94>: mov eax,0x0                              ; eax = 0
<main+99>: mov rdx,QWORD PTR [rbp-0x8]              ; mv stack-guard to rdx
<main+103>: sub rdx,QWORD PTR fs:0x28               ; rdx should be 0
<main+112>: je 0x555555555209 <main+119>            ; leave function when equal
<main+114>: call 0x555555555070 <__stack_chk_fail@plt>
<main+119>: leave
<main+120>: ret
```
- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-putchar.c -o 0-putchar`

</details>

<details>
<summary><a href="./1-alphabet.c">1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/QN5wDt0t/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/1-main.c 1-alphabet.c -o 1-alphabet`

</details>

<details>
<summary><a href="./2-print_alphabet_x10.c">2. 10 x alphabet</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/RVRLc6MN/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/2-main.c 2-print_alphabet_x10.c -o 2-alphabet_x10`

</details>

<details>
<summary><a href="./3-islower.c">3. islower</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/mkbf5zKt/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/3-main.c 3-islower.c -o 3-islower`

</details>

<details>
<summary><a href="./4-isalpha.c">4. isalpha</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/bwvFCG9F/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/4-main.c 4-isalpha.c -o 4-isalpha`

</details>

<details>
<summary><a href="./5-sign.c">5. Sign</a></summary><br>

<a href='https://postimg.cc/SnQQHhYB' target='_blank'><img src='https://i.postimg.cc/MpVcMZ6p/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/5-main.c 5-sign.c -o 5-sign`

</details>

<details>
<summary><a href="./6-abs.c">6. There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/NMryvRNb/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/6-main.c 6-abs.c -o 6-abs`

</details>

<details>
<summary><a href="./7-print_last_digit.c">7. There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/tC5wPW10/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/7-main.c 7-print_last_digit.c -o 7-last_digit`

</details>

<details>
<summary><a href="./8-24_hours.c">8. I'm federal agent Jack Bauer, and today is the longest day of my life</a></summary><br>

<a href='https://postimg.cc/S2X4H6Vq' target='_blank'><img src='https://i.postimg.cc/bJgvDLtG/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/8-main.c 8-24_hours.c -o 8-24`

</details>

<details>
<summary><a href="./9-times_table.c">9. Learn your times table</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/43jbx1Vq/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/9-main.c 9-times_table.c -o 9-times_table`

</details>

<details>
<summary><a href="./10-add.c">10. a+b</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/7LsDGmVH/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/10-main.c 10-add.c -o 10-add`

</details>

<details>
<summary><a href="./11-print_to_98.c">11. 98 Battery Street, the OG</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/CMsVcXxM/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/11-main.c 11-print_to_98.c -o 11-98`

</details>

<details>
<summary><a href="./100-times_table.c">12. The World looks like a multiplication-table, or a mathematical equation, which, turn it how you will, balances itself</a></summary><br>

<a href='https://postimg.cc/wts1FBF3' target='_blank'><img src='https://i.postimg.cc/8CZLpJ6d/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c main/100-main.c 100-times_table.c -o 100-times_table`

</details>

<details>
<summary><a href="./101-natural.c">13. Nature made the natural numbers; All else is the work of women</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/XJbz9n6q/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-natural.c -o 101-natural`

</details>

<details>
<summary><a href="./102-fibonacci.c">14. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/0yjz3yVM/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 102-fibonacci.c -o 102-fibonacci`

</details>

<details>
<summary><a href="./103-fibonacci.c">15. Even Liber Abbaci</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/8kmtkJ1b/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 103-fibonacci.c -o 103-fibonacci`

</details>

<details>
<summary><a href="./104-fibonacci.c">16. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A+</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/d1Cq75Gk/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 104-fibonacci.c -o 104-fibonacci`

</details>
