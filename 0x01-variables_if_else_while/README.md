# C - HELLO WORLD

## Tasks :page_with_curl:

* **0. Preprocessor**
  * [0-preprocessor](./0-preprocessor): Bash script that runs a C file through the preprocessor and save the result into another file.
     - The C file name will be saved in the variable `$CFILE`.
     - The output should be saved in the file c.

* **1. Compiler**
  * [1-compiler](./1-compiler): Bash script that compiles a C file but does not link.
     - The C file name will be saved in the variable `$CFILE`.
     - The output file should be named the same as the C file, but with the extension `.o` instead of `.c`.
     - Example: if the C file is `main.c`, the output file should be `main.o`

* **2. Assembler**
  * [2-assembler](./2-assembler): Bash script that generates the assembly code of a C code and save it in an output file.
     - The C file name will be saved in the variable `$CFILE`.
     - The output file should be named the same as the C file, but with the extension `.s` instead of `.c`.
     - Example: if the C file is `main.c`, the output file should be `main.s`.

* **3. If the path be beautiful, let us not ask where it lead**
  * [3-paths](./3-paths): Bash script that that counts the number of directories in the `PATH`.

* **4. Global variables**
  * [4-global_variables](./4-global_variables): Bash script that lists environment variables.

* **5. Local variables**
  * [5-local_variables](./5-local_variables): Bash script that lists all local variables and environment variables, and functions.

* **6. Local variable**
  * [6-create_local_variable](./6-create_local_variable): Bash script that creates a new local variable.
   - Name: `BEST`.
   - Value: `School`.

* **7. Global variable**
  * [7-create_global_variable](./7-create_global_variable): Bash script that creates a new global variable.
   - Name: `BEST`.
   - Value: `School`.

* **8. Every addition to true knowledge is an addition to human power**
  * [8-true_knowledge](./8-true_knowledge): Bash script that prints the result of the addition of 128 with the value stored in the environment variable `TRUEKNOWLEDGE`, followed by a new line.

* **9. Divide and rule**
  * [9-divide_and_rule](./9-divide_and_rule): Bash script that that prints the result of `POWER` divided by `DIVIDE`, followed by a new line.
     - `POWER` and `DIVIDE` are environment variables.

* **10. Love is anterior to life, posterior to death, initial of creation, and the exponent of breath**
  * [10-love_exponent_breath](./10-love_exponent_breath): Bash script that displays the result of `BREATH` to the power `LOVE`.
     - `BREATH` and `LOVE` are environment variables.
     - The script should display the result, followed by a new line.

* **11. There are 10 types of people in the world -- Those who understand binary, and those who don't**
  * [11-binary_to_decimal](./11-binary_to_decimal): Bash script that converts a number from base 2 to base 10.
     - The number in base 2 is stored in the environment variable `BINARY`.
     - The script should display the number in base 10, followed by a new line.

* **12. Combination**
  * [12-combinations](./12-combinations): Bash script that prints all possible combinations of two letters, except oo.
     - Letters are lower cases, from a to z.
     - One combination per line.
     - The output should be alpha ordered, starting with aa.
     - Do not print oo.
     - Your script file should contain maximum 64 characters.

* **13. Floats**
  * [13-print_float](./13-print_float): Bash script that prints a number with two decimal places, followed by a new line. The number will be stored in the environment variable `NUM`.

* **14. Decimal to Hexadecimal**
  * [100-decimal_to_hexadecimal](./100-decimal_to_hexadecimal): Bash script that converts a number from base 10 to base 16.
     - The number in base 10 is stored in the environment variable `DECIMAL`.
     - The script should display the number in base 16, followed by a new line.

* **15. Everyone is a proponent of strong encryption**
  * [101-rot13](./101-rot13): Bash script that encodes and decodes text using the rot13 encryption. Assume ASCII.

* **16. The eggs of the brood need to be an odd number**
  * [102-odd](./102-odd): Bash script that prints every other line from the input, starting with the first line.

* **17. I'm an instant star. Just add water and stir.**
  * [103-water_and_stir](./103-water_and_stir): Bash script that adds the two numbers stored in the environment variables `WATER` and `STIR` and prints the result.
     - `WATER` is in base `water`
     - `STIR` is in base `stir`.
     - The result should be in base `bestchol`.
