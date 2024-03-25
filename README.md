# NPTEL-Introduction-to-Programming-in-C-Assignment-3-Question-3
NPTEL Introduction to Programming in C Assignment 3 Question 3

# Question 3
A line of English text will be given, where words are separated by one of the following symbols:

 ' ', '\t', '.', ',' and ';'

Each word may be separated from the next and the previous by one or more of the following symbols. You have to count the number of words in the sentence.

Note that to read the input, you have to read until the EOF symbol is read, as in the following example.
```c
int main()
{
    int c;
   
    c = getchar();
    while ( c != EOF ) {
       c = getchar();
    }
    return 0;
}
```

Note: it is possible to solve this question without arrays, so the maximum length of the line is not important.

Input
-----
A line of English text with words separated from one another by one or more occurrences of the symbols

 ' ', '\t', '.', ',' and ';'

Output
------
The number of words in the line.

Sample Input 1
------------
```sh
This is a sentence, it has words separated by spaces and fullstops.
```

Sample Output 1
-------------
```sh
12
```

Sample Input 2
------------
```sh
this is a line.
```

Sample Output 2
-------------
```sh
4
```

Sample Input 3
------------
```sh
This is a third line, with a lot of punctuation... but it should be alright.
```

Sample Output 3
-------------
```sh
15
```

Sample Input 4
------------
```sh
in fac;t the punctuation need not be proper.
```

Sample Output 4
-------------
```sh
9
```

Sample Input 5
------------
```sh
one more sentence,
```

Sample Output 5
-------------
```sh
3
```

Sample Input 6
------------
```sh
science is awesome.
```

Sample Output 6
-------------
```sh
3
```
