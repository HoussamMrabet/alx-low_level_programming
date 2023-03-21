<h1">0x03. C - Debugging</h1>

<div>
    <h2>Resources</h2>

<p><strong>Read or watch:</strong></p>

<ul>
<li><a href="/rltoken/faGcpiJiejHH6GhqpmbhUw" title="Debugging" target="_blank">Debugging</a></li>
<li><a href="/rltoken/RaecqJBNkmZ92vLMpNDuGg" title="Rubber Duck Debugging" target="_blank">Rubber Duck Debugging</a></li>
</ul>

<p>Debugging is the process of finding and fixing errors in software that prevents it from running correctly. As you become a more advanced programmer and an industry engineer, you will learn how to use debugging tools such as <code>gdb</code> or built-in tools that IDEs have. However, it’s important to understand the concepts and processes of debugging manually.</p>

<p><img src="https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/medias/2019/5/af682f2cbb6d73fd4e42.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&amp;X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20230321%2Fus-east-1%2Fs3%2Faws4_request&amp;X-Amz-Date=20230321T221056Z&amp;X-Amz-Expires=86400&amp;X-Amz-SignedHeaders=host&amp;X-Amz-Signature=a3aa17f92047c5659b080e2db8c6c44d5d27e213d8604cc30d78d1a2dc794668" alt="" loading="lazy" style=""></p>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="/rltoken/b8uX1nIy0A55tWVlIRTaHQ" title="explain to anyone" target="_blank">explain to anyone</a>, without the help of Google:</p>

<h3>General</h3>

<ul>
<li>What is debugging</li>
<li>What are some methods of debugging manually</li>
<li>How to read the error messages</li>
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
<li>Your code should use the <code>Betty</code> style. It will be checked using <code>betty-style.pl</code> and <code>betty-doc.pl</code></li>
<li>A README.md file at the root of the repo, containing a description of the repository</li>
<li>A README.md file, at the root of the folder of this project (i.e. <code>0x03-debugging</code>), describing what this project is about</li>
</ul>

</div>

## Tasks

<details>
<summary><a href="./0-main.c">0. Multiple mains</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/FKc2PPmg/image.png' border='0' alt='image'/></a>
<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/vmWN7cL0/image.png' border='0' alt='image'/></a>

- First compilation: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c main/main.c -o first`
- Second compilation: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c 0-main.c -o 0-main`

</details>

<details>
<summary><a href="./1-main.c">1. Like, comment, subscribe</a></summary><br>

<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/Xq4qNHnn/image.png' border='0' alt='image'/></a>

- Compile this way: `gcc -std=gnu89 1-main.c -o 1-main`

</details>

<details>
<summary><a href="./2-largest_number.c">2. 0 > 972?</a></summary><br>

- This program prints the largest of three integers.

```bash
carrie@ubuntu:/debugging$ cat 2-main.c
#include <stdio.h>
#include "main.h"
/**
* main - prints the largest of 3 integers
* Return: 0
*/
int main(void)
{
        int a, b, c;
        int largest;
        a = 972;
        b = -98;
        c = 0;
        largest = largest_number(a, b, c);
        printf("%d is the largest number\n", largest);
        return (0);
}
carrie@ubuntu:/debugging$ 
```

```bash
carrie@ubuntu:/debugging$ cat 2-largest_number.c
#include "main.h"
/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
    int largest;
    if (a > b && b > c)
    {
        largest = a;
    }
    else if (b > a && a > c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }
    return (largest);
}
carrie@ubuntu:/debugging$
```
```bash
carrie@ubuntu:/debugging$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-largest_number.c 2-main.c -o 2-main
carrie@ubuntu:/debugging$ ./2-main
0 is the largest number
carrie@ubuntu:/debugging$
```
<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/c46hdXCR/image.png' border='0' alt='image'/></a>
- Compile this way: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-largest_number.c main/2-main.c -o 2-main`
</details>
<details>
<summary><a href="./3-print_remaining_days.c">3. Leap year</a></summary><br>
- This program converts a date to the day of year and determines how many days are left in the year, taking leap year into consideration.
```bash
carrie@ubuntu:/debugging$ cat 3-main_a.c
#include <stdio.h>
#include "main.h"
/**
* main - takes a date and prints how many days are left in the year, taking
* leap years into account
* Return: 0
*/
int main(void)
{
    int month;
    int day;
    int year;
    month = 4;
    day = 01;
    year = 1997;
    printf("Date: %02d/%02d/%04d\n", month, day, year);
    day = convert_day(month, day);
    print_remaining_days(month, day, year);
    return (0);
}
carrie@ubuntu:/debugging$
```
```bash
carrie@ubuntu:/debugging$ cat 3-convert_day.c
#include "main.h"
/**
* convert_day - converts day of month to day of year, without accounting
* for leap year
* @month: month in number format
* @day: day of month
* Return: day of year
*/
int convert_day(int month, int day)
{
    switch (month)
    {
        case 2:
            day = 31 + day;
            break;
        case 3:
            day = 59 + day;
            break;
        case 4:
            day = 90 + day;
            break;
        case 5:
            day = 120 + day;
            break;
        case 6:
            day = 151 + day;
            break;
        case 7:
            day = 181 + day;
            break;
        case 8:
            day = 212 + day;
            break;
        case 9:
            day = 243 + day;
            break;
        case 10:
            day = 273 + day;
            break;
        case 11:
            day = 304 + day;
            break;
        case 12:
            day = 334 + day;
            break;
        default:
            break;
    }
    return (day);
}
carrie@ubuntu:/debugging$
```
```bash
carrie@ubuntu:/debugging$ cat 3-print_remaining_days.c
#include <stdio.h>
#include "main.h"
/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/
void print_remaining_days(int month, int day, int year)
{
    if ((year % 4 == 0 || year % 400 == 0) && !(year % 100 == 0))
    {
        if (month >= 2 && day >= 60)
        {
            day++;
        }
        printf("Day of the year: %d\n", day);
        printf("Remaining days: %d\n", 366 - day);
    }
    else
    {
        if (month == 2 && day == 60)
        {
            printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
        }
        else
        {
            printf("Day of the year: %d\n", day);
            printf("Remaining days: %d\n", 365 - day);
        }
    }
}
carrie@ubuntu:/debugging$ 
```
```bash
carrie@ubuntu:/debugging$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-convert_day.c 3-print_remaining_days.c main/3-main_a.c -o 3-main_a 
carrie@ubuntu:/debugging$ ./3-main_a
Date: 04/01/1997
Day of the year: 91
Remaining days: 274
carrie@ubuntu:/debugging$
```
<a href='https://postimages.org/' target='_blank'><img src='https://i.postimg.cc/xjsGphYv/image.png' border='0' alt='image'/></a>
- Compile this way: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-convert_day.c 3-print_remaining_days.c main/3-main_b.c -o 3-main_b`
</details>
