<h1>0x01. C - Variables, if, else, while</h1>
<div>
    <h2>Resources</h2>

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="/rltoken/PkAydT3D9u5pN3nPCAlNZQ" title="Everything you need to know to start with C.pdf" target="_blank">Everything you need to know to start with C.pdf</a> (<em>You do not have to learn everything in there yet, but make sure you read it entirely first and make sure you understand the slides: “comments”, “Data types | Integer types”, “Declaration”, “Characters”, “Arithmetic operators”, “Variables assignments”, “Comparisons”, “Logical operators”, “if, if…else”, “while loops”.</em>)</li>
<li><a href="/rltoken/58ThnAAxwJv5s_ceKMMPhw" title="Keywords and identifiers" target="_blank">Keywords and identifiers</a> </li>
<li><a href="/rltoken/2sXkmDiD7BF7pNIOxMQWFA" title="integers" target="_blank">integers</a> </li>
<li><a href="/rltoken/S-b9MN2iELhSEwCI093Vzw" title="Arithmetic Operators in C" target="_blank">Arithmetic Operators in C</a> </li>
<li><a href="/rltoken/usvxrTB3ko5kGTq48p5fSA" title="If statements in C" target="_blank">If statements in C</a> </li>
<li><a href="/rltoken/CU6mSX1qdZKOhDEgmToUGA" title="if...else statement" target="_blank">if…else statement</a> </li>
<li><a href="/rltoken/O1N-qacaTC-BHXm3Dp3eUA" title="Relational operators" target="_blank">Relational operators</a> </li>
<li><a href="/rltoken/TaX_y6ll4cRfxCrxG8ZuNQ" title="Logical operators" target="_blank">Logical operators</a> </li>
<li><a href="/rltoken/mwx2_bj3gIFEgCqdwdTp4w" title="while loop in C" target="_blank">while loop in C</a> </li>
<li><a href="/rltoken/MW4Ob-6JLWt7Zn6vZ0EsBw" title="While loop" target="_blank">While loop</a> </li>
</ul>

<p><strong>man or help</strong>:</p>

<ul>
<li><code>ascii</code> (<em>You do not need to learn about <code>scanf</code>, <code>getc</code>, <code>getchar</code>, <code>EOF</code>, <code>EXIT_SUCCESS</code>, <code>time</code>, <code>rand</code>, <code>srand</code>, <code>RAND_MAX</code>, <code>for</code> loops, <code>do...while</code> loops, functions.</em>)</li>
</ul>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="/rltoken/qBrRkO5QsdzGun5FkaMooQ" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>What are the arithmetic operators and how to use them</li>
<li>What are the logical operators (sometimes called boolean operators) and how to use them</li>
<li>What the the relational operators and how to use them</li>
<li>What values are considered TRUE and FALSE in C</li>
<li>What are the boolean operators and how to use them</li>
<li>How to use the <code>if</code>, <code>if ... else</code> statements</li>
<li>How to use comments</li>
<li>How to declare variables of types <code>char</code>, <code>int</code>, <code>unsigned int</code></li>
<li>How to assign values to variables</li>
<li>How to print the values of variables of type <code>char</code>, <code>int</code>, <code>unsigned int</code> with <code>printf</code></li>
<li>How to use the <code>while</code> loop</li>
<li>How to use variables with the <code>while</code> loop</li>
<li>How to print variables using <code>printf</code></li>
<li>What is the <code>ASCII</code> character set</li>
<li>What are the purpose of the <code>gcc</code> flags <code>-m32</code> and <code>-m64</code></li>
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
<li>A <code>README.md</code> file, at the root of the folder of the project</li>
<li>There should be no errors and no warnings during compilation</li>
<li>You are not allowed to use <code>system</code></li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
</ul>

  </div>
  
  ## Tasks

<details>
<summary><a href="./0-positive_or_negative.c">0. Positive anything is better than negative nothing</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/xjvjqfnG/image.png' border='0' alt='image'/></a>
- [Source Code](https://github.com/holbertonschool/0x01.c/blob/master/0-positive_or_negative_c)
- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-positive_or_negative.c -o 0-positive_or_negative`

</details>


<details>
<summary><a href="./1-last_digit.c">1. The last digit</a></summary><br>

<a href='https://postimg.cc/6TD40Kzx' target='_blank'><img src='https://i.postimg.cc/tCgd9CxJ/image.png' border='0' alt='image'/></a>
- [Source Code](./https://github.com/holbertonschool/0x01.c/blob/master/1-last_digit_c)
- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-last_digit.c -o 1-last_digit`

</details>

<details>
<summary><a href="./2-print_alphabet.c">2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/W1qSGbSz/image.png' border='0' alt='image'/></a>
- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-print_alphabet.c -o 2-print_alphabet`

<a href='https://postimg.cc/vghQ59Q3' target='_blank'><img src='https://i.postimg.cc/QCGHGkvG/image.png' border='0' alt='image'/></a>

</details>

<details>
<summary><a href="./3-print_alphabets.c">3. alphABET</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/8P1mXYfS/image.png' border='0' alt='image'/></a>
- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-print_alphabets.c -o 3-print_alphabets`

</details>

<details>
<summary><a href="./4-print_alphabt.c">4. When I was having that alphabet soup, I never thought that it would pay off</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/JhGLNK53/image.png' border='0' alt='image'/></a>
- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-print_alphabt.c -o 4-print_alphabt`

</details>


<details>
<summary><a href="./5-print_numbers.c">5. Numbers</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/3R8bjwTs/image.png' border='0' alt='image'/></a>
- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-print_numbers.c -o 5-print_numbers`

</details>

<details>
<summary><a href="./6-print_numberz.c">6. Numberz</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/SxDpwHKb/image.png' border='0' alt='image'/></a>
- This [ASCII](https://ascii.cl/) table will help you understand my solution.
	- For this you need to understand that `putchar` holds the decimal representation of the variable.
	- So we add `0 == 48` 48 is the decimal value to our single digit integer to convert it into its character representation.
	- Better explanation [here](https://stackoverflow.com/questions/21255038/what-does-putchar0-num-do)
- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-print_numberz.c -o 6-print_numberz`

</details>

<details>
<summary><a href="./7-print_tebahpla.c">7. Smile in the mirror</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/7hfC2SQf/image.png' border='0' alt='image'/></a>
- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-print_tebahpla.c -o 7-print_tebahpla`

</details>

<details>
<summary><a href="./8-print_base16.c">8. Hexadecimal</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/pLT2XP4L/image.png' border='0' alt='image'/></a>
- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-print_base16.c -o 8-print_base16`

</details>

<details>
<summary><a href="./9-print_comb.c">9. Patience, persistence and perspiration make an unbeatable combination for success</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/5tHb81BN/image.png' border='0' alt='image'/></a>
- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-print_comb.c -o 9-print_comb`

</details>

<details>
<summary><a href="./100-print_comb3.c">10. Inventing is a combination of brains and materials. The more brains you use, the less material you need</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/vmj9vQCP/image.png' border='0' alt='image'/></a>
- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-print_comb3.c -o 100-print_comb3`

</details>


<details>
<summary><a href="./101-print_comb4.c">11. The success combination in business is: Do what you do better... and: do more of what you do...</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/D0V76Dvk/image.png' border='0' alt='image'/></a>
- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-print_comb4.c -o 101-print_comb4`

</details>


<details>
<summary><a href="./102-print_comb5.c">12. Software is eating the World</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/90G1w4g5/image.png' border='0' alt='image'/></a>
- Compile this way: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 102-print_comb5.c -o 102-print_comb5`

</details>
