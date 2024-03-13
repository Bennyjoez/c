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