<h1>0x00. C - Hello, World</h1>
  <h2>Resources</h2>

  <p><strong>Read or watch</strong>:</p>

  <ul>
    <li>
      <a
        href="/rltoken/P01aLj9BDfDUOv-y9x82Yw"
        title="Everything you need to know to start with C.pdf"
        target="_blank"
        >Everything you need to know to start with C.pdf</a
      >
      (<em
        >You do not have to learn everything in there yet, but make sure you
        read it entirely first</em
      >)
    </li>
    <li>
      <a
        href="/rltoken/YWFrRob_-Yo-_NQikMLI-g"
        title="Dennis Ritchie"
        target="_blank"
        >Dennis Ritchie</a
      >
    </li>
    <li>
      <a
        href="/rltoken/W4oygfMgAp5Hyc7o6QuSYQ"
        title='"C" Programming Language: Brian Kernighan'
        target="_blank"
        >“C” Programming Language: Brian Kernighan</a
      >
    </li>
    <li>
      <a
        href="/rltoken/WYdE1novaWa0yt5fzGvLBw"
        title="Why C Programming Is Awesome"
        target="_blank"
        >Why C Programming Is Awesome</a
      >
    </li>
    <li>
      <a
        href="/rltoken/aE_pZLbexuLroHA0FmjLbw"
        title="Learning to program in C part 1"
        target="_blank"
        >Learning to program in C part 1</a
      >
    </li>
    <li>
      <a
        href="/rltoken/3a5y1N-0FlTaPbKRxlRLlQ"
        title="Learning to program in C part 2"
        target="_blank"
        >Learning to program in C part 2</a
      >
    </li>
    <li>
      <a
        href="/rltoken/idYJyVfQRZ9e5aljiT5UKg"
        title="Understanding C program Compilation Process"
        target="_blank"
        >Understanding C program Compilation Process</a
      >
    </li>
    <li>
      <a
        href="/rltoken/Iu2Vb1CbDPMHuDJG1iILKA"
        title="Betty Coding Style"
        target="_blank"
        >Betty Coding Style</a
      >
    </li>
    <li>
      <a
        href="/rltoken/zwv5CHLybXN6KFmsjbu_tg"
        title="Hash-bang under the hood"
        target="_blank"
        >Hash-bang under the hood</a
      >
      (<em>Look at only after you finish consuming the other resources</em>)
    </li>
    <li>
      <a
        href="/rltoken/JrokM8Pk6bd9wPqQvEfSAA"
        title="Linus Torvalds on C vs. C++"
        target="_blank"
        >Linus Torvalds on C vs. C++</a
      >
      (<em>Look at only after you finish consuming the other resources</em>)
    </li>
  </ul>

  <p><strong>man or help</strong>:</p>

  <ul>
    <li><code>gcc</code></li>
    <li><code>printf (3)</code></li>
    <li><code>puts</code></li>
    <li><code>putchar</code></li>
  </ul>

  <h2>Learning Objectives</h2>

  <p>
    At the end of this project, you are expected to be able to
    <a
      href="/rltoken/VGWjGaWZbgcLYTwfLEBmmQ"
      title="explain to anyone"
      target="_blank"
      >explain to anyone</a
    >, <strong>without the help of Google</strong>:
  </p>

  <h3>General</h3>

  <ul>
    <li>Why C programming is awesome</li>
    <li>Who invented C</li>
    <li>Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds</li>
    <li>What happens when you type <code>gcc main.c</code></li>
    <li>What is an entry point</li>
    <li>What is <code>main</code></li>
    <li>
      How to print text using <code>printf</code>, <code>puts</code> and
      <code>putchar</code>
    </li>
    <li>
      How to get the size of a specific type using the unary operator
      <code>sizeof</code>
    </li>
    <li>How to compile using <code>gcc</code></li>
    <li>
      What is the default program name when compiling with <code>gcc</code>
    </li>
    <li>
      What is the official C coding style and how to check your code with
      <code>betty-style</code>
    </li>
    <li>
      How to find the right header to include in your source code when using a
      standard library function
    </li>
    <li>
      How does the <code>main</code> function influence the return value of the
      program
    </li>
  </ul>

  <h3>Copyright - Plagiarism</h3>

  <ul>
    <li>
      You are tasked to come up with solutions for the tasks below yourself to
      meet with the above learning objectives.
    </li>
    <li>
      You will not be able to meet the objectives of this or any following
      project by copying and pasting someone else’s work.
    </li>
    <li>You are not allowed to publish any content of this project.</li>
    <li>
      Any form of plagiarism is strictly forbidden and will result in removal
      from the program.
    </li>
  </ul>

  <h2>Requirements</h2>

  <h3>C</h3>

  <ul>
    <li>
      Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code>
    </li>
    <li>
      All your files will be compiled on Ubuntu 20.04 LTS using
      <code>gcc</code>, using the options
      <code>-Wall -Werror -Wextra -pedantic -std=gnu89</code>
    </li>
    <li>All your files should end with a new line</li>
    <li>
      A <code>README.md</code> file at the root of the repo, containing a
      description of the repository
    </li>
    <li>
      A <code>README.md</code> file, at the root of the folder of
      <em>this</em> project, containing a description of the project
    </li>
    <li>There should be no errors and no warnings during compilation</li>
    <li>You are not allowed to use <code>system</code></li>
    <li>
      Your code should use the <code>Betty</code> style. It will be checked
      using
      <a
        href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl"
        title="betty-style.pl"
        target="_blank"
        >betty-style.pl</a
      >
      and
      <a
        href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl"
        title="betty-doc.pl"
        target="_blank"
        >betty-doc.pl</a
      >
    </li>
  </ul>

  <h3>Shell Scripts</h3>

  <ul>
    <li>
      Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code>
    </li>
    <li>All your scripts will be tested on Ubuntu 20.04 LTS</li>
    <li>
      All your scripts should be exactly two lines long (<code
        >$ wc -l file</code
      >
      should print 2)
    </li>
    <li>All your files should end with a new line</li>
    <li>
      The first line of all your files should be exactly
      <code>#!/bin/bash</code>
    </li>
  </ul>

  <h2>More Info</h2>

  <h3>Betty linter</h3>

  <p>
    To run the Betty linter just with command
    <code>betty &lt;filename&gt;</code>:
  </p>

  <ul>
    <li>
      Go to the
      <a href="/rltoken/wQ4sMfsWfxvyfN67Sc11zA" title="Betty" target="_blank"
        >Betty</a
      >
      repository
    </li>
    <li>
      Clone the
      <a href="/rltoken/wQ4sMfsWfxvyfN67Sc11zA" title="repo" target="_blank"
        >repo</a
      >
      to your local machine
    </li>
    <li><code>cd</code> into the Betty directory</li>
    <li>Install the linter with <code>sudo ./install.sh</code></li>
    <li>
      <code>emacs</code> or <code>vi</code> a new file called
      <code>betty</code>, and copy the script below:
    </li>
  </ul>

  <pre style="position: relative"><code>#!/bin/bash
# Simply a wrapper script to keep you from having to use betty-style
# and betty-doc separately on every item.
# Originally by Tim Britton (@wintermanc3r), multiargument added by
# Larry Madeo (@hillmonkey)

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done
</code><div title="Edit &amp; Save To Grepper"></div></pre>

  <ul>
    <li>
      Once saved, exit file and change permissions to apply to all users with
      <code>chmod a+x betty</code>
    </li>
    <li>
      Move the <code>betty</code> file into <code>/bin/</code> directory or
      somewhere else in your <code>$PATH</code> with
      <code>sudo mv betty /bin/</code>
    </li>
  </ul>

  <p>
    You can now type <code>betty &lt;filename&gt;</code> to run the Betty
    linter!
  </p>
</div>

### Tasks

<details>
<summary><a href="./0-preprocessor">0. Preprocessor</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/R0TYHDp0/image.png' border='0' alt='image'/></a>
- Here is the *[$CFILE](./main/main.c)* file.

</details>

<details>
<summary><a href="./1-compiler">1. Compiler</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/KYXbNw5r/image.png' border='0' alt='image'/></a>
- Here is the *[$CFILE](./main/main.c)* file.

</details>

<details>
<summary><a href="./2-assembler">2. Assembler</a></summary><br>

<a href='https://postimg.cc/kDBC1dZw' target='_blank'><img src='https://i.postimg.cc/nV1LLF18/image.png' border='0' alt='image'/></a>
- Here is the *[$CFILE](./main/main.c)* file.

</details>

<details>
<summary><a href="./3-name">3. Name</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/qRyzw2ng/image.png' border='0' alt='image'/></a>
- Here is the *[$CFILE](./main/main.c)* file.

</details>


<details>
<summary><a href="./4-puts.c">4. Hello, puts</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/bJt257Xy/image.png' border='0' alt='image'/></a>
- Compile and run this way: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c -o puts`.

</details>


<details>
<summary><a href="./5-printf.c">5. Hello, printf</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/14xVPJQG/image.png' border='0' alt='image'/></a>
- Compile this way: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 5-printf.c -o printf`.

</details>


<details>
<summary><a href="./6-size.c">6. Size is not grandeur, and territory does not make a nation</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/3rqgnFPJ/image.png' border='0' alt='image'/></a>
- Compile this way: `gcc 6-size.c -m32 -o size32 2> /tmp/32` & `gcc 6-size.c -m64 -o size64 2> /tmp/64`
- Compare outputs for the `size32` and `size64`.

</details>

<details>
<summary><a href="./100-intel">7. Intel</a></summary><br>

<a href='https://postimg.cc/PNS1z1D0' target='_blank'><img src='https://i.postimg.cc/BQ0N3gnZ/image.png' border='0' alt='image'/></a>
- Here is the *[$CFILE](./main/main.c)* file.

</details>

<details>
<summary><a href="./101-quote.c">8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/HkGmdF7c/image.png' border='0' alt='image'/></a>
- Compile this way: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o quote 101-quote.c`.

</details>
