## To run code

1. Compile the code
  Open terminal and run the code below. Replace the filename.c with the target file name and the outputFileName with the corresponding output name without the extension.
  ```ssh
    gcc filename.c -o outputFileName

    || 

    gcc outputFileName -o filename.c
  ```

2. Run the output file
  open terminal and run
  ```ssh
    ./outputFileName
  ```


## NOTES
- only when you initialize a variable do you add the type of variable. e. 
  ```ssh
    int number = 10;
    number = 20;
  ```
- Indentation in C is 4 spaces.
- A forever loop looks like below
  ```ssh
    #include <stdio.h>
    #include <stdbool.h>

    int main(void) {
      while(true) {
        printf("meow \n); // code runs without stopping
      }
    }
  ```
- Control c cancels a running program
- Commands in linux terminal include
  ```ssh
    cd, ls, mkdir, cp, mv, rm, rmdir
  ```
- To rename a file in terminal
  ```ssh
    mv filename newFileName
  ```

- Do while loop
 ```ssh
  #include <stdio.h>

  int main(void) {
    int n;

    do {
      printf("What's the block size? ");
      scanf("%i", &n);
    }
    while (n < 1);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
          printf("#");
        }
      printf("\n");
    }
  }
 ```

 - Integer overflow - Situation where you want to use more bits than you have available to represent numbers.
 - C also allows for long data types to prevent integer overflow. Long stores at least 32 bits, giving it a range of -2,147,483,648 to 2,147,483,647. Alternatively, use unsigned long for a range of 0 to 4,294,967,295.
  ```ssh
    long number = 2000000000;
    unsigned long = 4000000000;
    long long number = 2000000000000000000
  ```

 - C also gives the float for feeding floating integers to avoid truncation; but gives us 6 decimal places;
  ```ssh
    float number = 1.24;
  ```
  - Floating point imprecisions. A situation where the computer tries to estimate values based on the number of bits allocated. Doubles fixes this issue.
 - Doubles takes double the memory of float (so at least 64 bits). In return, double can provide 15 decimal place from 2.3E-308 to 1.7E+308.
  ```ssh
    double number = 1.
  ```
 - long double takes at least 80 bits. As a result, we can get 19 decimal places from 3.4E-4932 to 1.1E+4932.
 - The void type specifies that no value is available. It is used in three kinds of situations.
    1. Function returns as void. - There are various functions in C which do not return any value or you can say they return void. A function with no return value has the return type as void. For example, void exit (int status);
    2. Function arguments as void. - There are various functions in C which do not accept any parameter. A function with no parameter can accept a void. For example, int rand(void);
    3. Pointers to void. 